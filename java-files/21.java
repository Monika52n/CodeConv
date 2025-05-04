import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        FileWriter fw = new FileWriter("simple_example.txt");
        fw.write("Hello, this is a simple file write example.");
        fw.close();
    }
}