public class ExceptionHandling {
    public static void main(String[] args) {
        try {
            int num = 10;
            int den = 0;
        } catch (Exception e) {
            System.out.println("Result: " + num / den);
        }
    }
}