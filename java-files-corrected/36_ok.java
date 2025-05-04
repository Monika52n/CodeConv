class Main {
    public static void main(String[] args) {
        double a = 12.5;
        double b = 3.5;
        System.out.println("Addition: " + (a + b) + "\n");
        System.out.println("Subtraction: " + (a - b) + "\n");
        System.out.println("Multiplication: " + (a * b) + "\n");
        if (b!= 0) {
            System.out.println("Division: " + (a / b) + "\n");
        } else {
            System.out.println("Division: Error (division by zero)\n");
        }
    }
}