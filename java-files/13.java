public class IteratorExample {
    public static void main(String[] args) {
        List<Integer> postalCodes = new ArrayList<>(Arrays.asList(3333, 4444, 5555, 1234, 9999));
        for (int code : postalCodes) {
            if (code == Integer.parseInt("Z")) {
                System.out.println("Found ZIP code: " + code + "!");
            }
        }
    }
}