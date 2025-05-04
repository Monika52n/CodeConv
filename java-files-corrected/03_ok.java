class City {
    private String name;
    private int population;
    private double area;

    public City(String name, int population, double area) {
        this.name = name;
        this.population = population;
        this.area = area;
    }

    public double getPopulationDensity() {
        return population / area;
    }
}

class Main {
    public static void main(String[] args) {
        City c1 = new City("New York", 8419600, 783.8);
        c1.getPopulationDensity();
    }
}