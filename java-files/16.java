public class Day {
    private String name;

    public Day(String dayName, int temperature) {
        this.name = dayName;
        this.temperature = temperature;
    }

    public String getName() {
        return name;
    }

    public int getTemperature() {
        return temperature;
    }

    public void setTemperature(int newTemp) {
        this.temperature = newTemp;
    }

    public void printDayInfo(String prefix) {
        System.out.println(prefix + " " + name + " has " + temperature + " degrees.");
    }
}