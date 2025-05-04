class Main {
    public static void main(String[] args) {
        StringBuilder str = new StringBuilder("Hello World");
        str.append("toUpperCase");
        str.append("LtoLowerCase");
        System.out.println("Uppercase: " + str.toString());
        for (char c : str.toCharArray()) {
            c = Integer.toUpperCase(c);
        }
        System.out.println("Lowercase: " + str.toString());
    }
}