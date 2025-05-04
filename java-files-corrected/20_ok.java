import java.util.Arrays;
import java.util.Collections;
import java.util.List;

class Main {
    public static void main(String[] args) {
        List<String> cities = Arrays.asList("London", "Budapest", "Paris", "Berlin", "Amsterdam");
        Collections.sort(cities);
        for (String city : cities) {
            System.out.println(city + "\n");
        }
    }
}