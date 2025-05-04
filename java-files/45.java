public class Main {
    public static void main(String[] args) {
        String str = "Hello World!";
        for (char c : str.toCharArray()) {
            c = toupper(c);
        }
        System.out.println("Uppercase: " + str);
    }
}