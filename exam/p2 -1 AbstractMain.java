abstract class Shape {
    // Abstract method to calculate area
    abstract double calculateArea();

    // Abstract method to calculate perimeter
    abstract double calculatePerimeter();

    // Concrete method to display information about the shape
    void displayInfo() {
        System.out.println("Area: " + calculateArea());
        System.out.println("Perimeter: " + calculatePerimeter());
    }
}

class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    double calculateArea() {
        return Math.PI * radius * radius;
    }

    @Override
    double calculatePerimeter() {
        return 2 * Math.PI * radius;
    }
}

class Rectangle extends Shape {
    private double width;
    private double height;

    public Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }

    @Override
    double calculateArea() {
        return width * height;
    }

    @Override
    double calculatePerimeter() {
        return 2 * (width + height);
    }
}

public class AbstractMain {
    public static void main(String[] args) {
        Shape myCircle = new Circle(5.0);
        Shape myRectangle = new Rectangle(4.0, 6.0);

        System.out.println("Circle Information:");
        myCircle.displayInfo();

        System.out.println("\nRectangle Information:");
        myRectangle.displayInfo();
    }
}
