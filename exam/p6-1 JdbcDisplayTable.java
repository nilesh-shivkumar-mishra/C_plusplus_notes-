import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class JdbcDisplayTable {
    // JDBC URL, username, and password of MySQL server
    private static final String DB_URL = "jdbc:mysql://localhost:3306/LUCDatabase";
    private static final String USER = "root";
    private static final String PASSWORD = "Shola129";

    // JDBC driver name
    private static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";

    public static void main(String[] args) {
        Connection connection = null;
        Statement statement = null;

        try {
            // Register JDBC driver
            Class.forName(JDBC_DRIVER);

            // Open a connection
            System.out.println("Connecting to the database...");
            connection = DriverManager.getConnection(DB_URL, USER, PASSWORD);

            // Execute a query to retrieve data from the table
            System.out.println("Creating statement...");
            statement = connection.createStatement();
            String sql = "SELECT id, name, age, grade FROM students";
            ResultSet resultSet = statement.executeQuery(sql);

            // Extract and display data from the result set
            System.out.println("ID\tName\t\tAge\tGrade");
            System.out.println("----------------------------------------");
            while (resultSet.next()) {
                // Retrieve data by column name
                int id = resultSet.getInt("id");
                String name = resultSet.getString("name");
                int age = resultSet.getInt("age");
                String grade = resultSet.getString("grade");

                // Display data
                System.out.println(id + "\t" + name + "\t\t" + age + "\t" + grade);
            }

            // Clean up environment
            resultSet.close();
            statement.close();
            connection.close();
        } catch (SQLException se) {
            // Handle errors for JDBC
            se.printStackTrace();
        } catch (Exception e) {
            // Handle errors for Class.forName
            e.printStackTrace();
        } finally {
            // Finally block used to close resources
            try {
                if (statement != null) statement.close();
            } catch (SQLException se) {
                se.printStackTrace();
            }
            try {
                if (connection != null) connection.close();
            } catch (SQLException se) {
                se.printStackTrace();
            }
        }

        System.out.println("Retrieved data successfully!");
    }
}
