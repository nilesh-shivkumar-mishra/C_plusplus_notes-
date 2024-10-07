CREATE DATABASE DBMS2;
USE DBMS2;

-- Step 1: Create Tables
CREATE TABLE employees (
    id INT PRIMARY KEY,
    name VARCHAR(100),
    position VARCHAR(100),
    salary DECIMAL(10, 2)
);
select *from employees;
CREATE TABLE employee_changes (
    change_id INT AUTO_INCREMENT PRIMARY KEY,
    emp_id INT,
    emp_name VARCHAR(100),
    change_type VARCHAR(10),
    old_salary DECIMAL(10, 2),
    new_salary DECIMAL(10, 2),
    change_time TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

-- Step 2: Create Triggers
DELIMITER $$

-- Trigger before inserting a record
CREATE TRIGGER before_employee_insert
BEFORE INSERT ON employees
FOR EACH ROW
BEGIN
    IF NEW.salary < 0 THEN
        SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Salary cannot be negative';
    END IF;
END$$

DELIMITER $$
-- Trigger after inserting a record
CREATE TRIGGER after_employee_insert
AFTER INSERT ON employees
FOR EACH ROW
BEGIN
    INSERT INTO employee_changes (emp_id, emp_name, change_type, new_salary)
    VALUES (NEW.id, NEW.name, 'INSERT', NEW.salary);
END$$
DELIMITER $$
-- Trigger after updating a record
CREATE TRIGGER after_employee_update
AFTER UPDATE ON employees
FOR EACH ROW
BEGIN
    INSERT INTO employee_changes (emp_id, emp_name, change_type, old_salary, new_salary)
    VALUES (OLD.id, OLD.name, 'UPDATE', OLD.salary, NEW.salary);
END$$
DELIMITER $$
-- Trigger after deleting a record
CREATE TRIGGER after_employee_delete
AFTER DELETE ON employees
FOR EACH ROW
BEGIN
    INSERT INTO employee_changes (emp_id, emp_name, change_type, old_salary)
    VALUES (OLD.id, OLD.name, 'DELETE', OLD.salary);
END$$

DELIMITER ;

-- Step 3: Insert Data (Run this separately to test the triggers)
INSERT INTO employees (id, name, position, salary) VALUES (1, 'Alice', 'Engineer', 60000.00);
INSERT INTO employees (id, name, position, salary) VALUES (2, 'Shovin', 'cs', 50000.00);

-- Step 4: Update Data (Run this separately to test the triggers)
UPDATE employees SET salary = 65000.00 WHERE id = 2;

-- Step 5: Delete Data (Run this separately to test the triggers)
DELETE FROM employees WHERE id = 2;

-- Step 6: Check the employee_changes table to see the logs
SELECT * FROM employee_changes;
