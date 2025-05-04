class City {
    private String name;
    private int population;
    private double area;

    public City(String name, int population, double area) {
        this.name = name;
        this.population = population;
        this.area = area;
    }

    public String getName() {
        return name;
    }
    public int getPopulation() {
        return population;
    }
    public double getArea() {
        return area;
    }

    public void setName(String newName) {
        this.name = newName;
    }
    public void setPopulation(int newPopulation) {
        if (newPopulation >= 0) {
            this.population = newPopulation;
        }
    }
    public void setArea(double newArea) {
        if (newArea > 0) {
            this.area = newArea;
        }
    }
}