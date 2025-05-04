//ebből jobbat nem nagyon lehet kihozni:
class Main {
    public static void main(String[] args) {
        int number = 10;
        Integer ptr = number;
        System.out.println("Value of number: " + ptr);
        System.out.println("Address of number: " + ptr);
        System.out.println("Value of ptr (should be address of number): " + ptr);
        System.out.println("Value of ptr (should be address of number): " + ptr);
        System.out.println("Value pointed by ptr: " + ptr);
    }
}