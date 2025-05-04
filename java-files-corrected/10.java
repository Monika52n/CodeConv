class Identifiable {
    public String getId() {
        return name;
    }

    public String getPopulation() {
        return population;
    }
}

class City extends Identifiable {
    @Override
    public String getId() {
        return "City ID: " + name;
    }

    @Override
    public void describe() {
        System.out.println("City: " + name + ", Population: " + population);
    }
}