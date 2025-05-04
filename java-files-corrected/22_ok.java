class Main {
    public static void main(String[] args) {
        int value = 10;
        Integer ptr = value;
        Integer ptrPtr = ptr;
        System.out.println("Value: " + value + " Points: " + ptr + " Points: " + ptrPtr);
    }
}