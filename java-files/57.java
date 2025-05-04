public class Car {
    private String brand;
    private int year;

    public Car(String b, int y) {
        brand = b;
        year = y;
    }

    public void displayInfo() {
        System.out.println("Brand: " + brand + ", Year: " + year);
    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String b) {
        brand = b;
    }

    public void setYear(int y) {
        year = y;
    }

    public int getYear() {
        return year;
    }
}