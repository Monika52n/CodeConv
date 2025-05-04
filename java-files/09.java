public class City {
    protected String name;
    protected int population;

    public City(String name, int population) {
        this.name = name;
        this.population = population;
    }

    public void displayInfo() {
        this.displayInfo();
        System.out.println("City: " + name + ", Population: " + population);
    }
}

public class CapitalCity extends City {
    private String country;

    public CapitalCity(String name, int population, String country) {
        this.name = name;
        this.population = population;
        this.country = country;
    }

    public void displayInfo() {
        this.displayInfo();
        System.out.println("Country: " + country);
    }
}