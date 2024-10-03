import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

public class JdbcCrudOperations {
    private static final String DB_URL = "jdbc:mysql://localhost:3306/LUCDatabase";
    private static final String USER = "root";
    private static final String PASSWORD = "Shola129";

    private static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";

    public static void main(String[] args) {
        Connection connection = null;
        Scanner scanner = new Scanner(System.in);

        try {
            Class.forName(JDBC_DRIVER);

            connection = DriverManager.getConnection(DB_URL, USER, PASSWORD);

            while (true) {
                System.out.println("Choose an operation:");
                System.out.println("1. Insert");
                System.out.println("2. Update");
                System.out.println("3. Delete");
                System.out.println("4. Exit");
                int choice = scanner.nextInt();

                switch (choice) {
                    case 1:
                        insertRecord(connection, scanner);
                        break;
                    case 2:
                        updateRecord(connection, scanner);
                        break;
                    case 3:
                        deleteRecord(connection, scanner);
                        break;
                    case 4:
                        System.out.println("Exiting...");
                        return;
                    default:
                        System.out.println("Invalid choice. Please try again.");
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            try {
                if (connection != null) connection.close();
                if (scanner != null) scanner.close();
            } catch (SQLException se) {
                se.printStackTrace();
            }
        }
    }

    private static void insertRecord(Connection connection, Scanner scanner) {
        try {
            String sql = "INSERT INTO students (id, name, age, grade) VALUES (?, ?, ?, ?)";
            PreparedStatement preparedStatement = connection.prepareStatement(sql);

            System.out.print("Enter student ID: ");
            int id = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            System.out.print("Enter student name: ");
            String name = scanner.nextLine();

            System.out.print("Enter student age: ");
            int age = scanner.nextInt();

            System.out.print("Enter student grade: ");
            String grade = scanner.next();

            preparedStatement.setInt(1, id);
            preparedStatement.setString(2, name);
            preparedStatement.setInt(3, age);
            preparedStatement.setString(4, grade);

            int rowsInserted = preparedStatement.executeUpdate();
            if (rowsInserted > 0) {
                System.out.println("A new student was inserted successfully!");
            }

            preparedStatement.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    private static void updateRecord(Connection connection, Scanner scanner) {
        try {
            String sql = "UPDATE students SET name = ?, age = ?, grade = ? WHERE id = ?";
            PreparedStatement preparedStatement = connection.prepareStatement(sql);

            System.out.print("Enter student ID to update: ");
            int id = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            System.out.print("Enter new student name: ");
            String name = scanner.nextLine();

            System.out.print("Enter new student age: ");
            int age = scanner.nextInt();

            System.out.print("Enter new student grade: ");
            String grade = scanner.next();

            preparedStatement.setString(1, name);
            preparedStatement.setInt(2, age);
            preparedStatement.setString(3, grade);
            preparedStatement.setInt(4, id);

            int rowsUpdated = preparedStatement.executeUpdate();
            if (rowsUpdated > 0) {
                System.out.println("Student record updated successfully!");
            } else {
                System.out.println("No record found with ID: " + id);
            }

            preparedStatement.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    private static void deleteRecord(Connection connection, Scanner scanner) {
        try {
            String sql = "DELETE FROM students WHERE id = ?";
            PreparedStatement preparedStatement = connection.prepareStatement(sql);

            System.out.print("Enter student ID to delete: ");
            int id = scanner.nextInt();

            preparedStatement.setInt(1, id);

            int rowsDeleted = preparedStatement.executeUpdate();
            if (rowsDeleted > 0) {
                System.out.println("Student record deleted successfully!");
            } else {
                System.out.println("No record found with ID: " + id);
            }

            preparedStatement.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
