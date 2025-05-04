public class Place {
    public void describe() {
        System.out.println("This is a place.");
    }
}

public class City extends Place {
    @Override
    public void describe() {
        System.out.println("This is a city with many buildings.");
    }
}