public class Identifiable {
    public String getId() {
        return name;
    }
}

public class City extends Identifiable {
    @Override
    public String getId() {
        return name;
    }
}