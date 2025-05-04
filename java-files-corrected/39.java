class Main {
    public static void main(String[] args) {
        Thread t = new Thread(() -> System.out.println("Hello from the thread!"));
        t.start();
        System.out.println("Hello from the thread!");
    }
}