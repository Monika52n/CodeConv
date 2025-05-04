public class SwitchExample {
    public static void main(String[] args) {
        int number = 2;
        switch (number) {
            case 1:
                System.out.println("You selected one.");
                break;
            case 2:
                System.out.println("You selected two.");
                break;
            case 3:
                System.out.println("You selected three.");
                break;
            default:
                System.out.println("Invalid selection!");
        }
    }
}