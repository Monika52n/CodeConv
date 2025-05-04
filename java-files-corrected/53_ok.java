class Main {
    public static void main(String[] args) {
        int a = 12, b = 18;
        int max = (a > b)? a : b;
        while (true) {
            if (max % a == 0 && max % b == 0) {
                System.out.println("LCM of " + a + " and " + b + " is " + max);
                break;
            }
            ++max;
        }
    }
}