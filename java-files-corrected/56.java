class ExceptionHandling {
    public static void main(String[] args) {
        try {
            int num = 10, den = 0;

            if (num == 0) {
                throw new IllegalArgumentException("Cannot divide by zero.");
            }

            System.out.println("Result: " + num / den);
        }
        catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}