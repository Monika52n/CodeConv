public class Main {
    public static void main(String[] args) {
        Runnable helloWorld = () -> System.out.println("Hello from the thread!");
        Thread t = new Thread(helloWorld);
        t.start();
        System.out.println("Hello from the thread!");
    }
}