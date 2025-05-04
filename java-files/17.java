import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new FileReader("simple_example.txt"));
        String line;
        while ((line = reader.readLine())!= null) {
            System.out.println(line);
        }
        reader.close();
    }
}