class Day {
    private String name;
    private int temperature;

    public Day(String dayName, int temp) {
        this.name = dayName + " " + temperature;
        this.temperature = temp;
    }

    public String getName() {
        return name;
    }

    public int getTemperature() {
        return temperature;
    }

    public void setTemperature(int newTemp) {
        temperature = newTemp;
    }

    public void printDayInfo(String prefix) {
        System.out.println(prefix + " " + name + " has " + temperature + " degrees.");
    }
}