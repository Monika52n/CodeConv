import java.util.*;

class Main {
    public static void main(String[] args) {
        final int size = 5;
        int[] numbers = {12, 7, 9, 20, 5};
        int sum = 0;
        int maxValue = numbers[0];
        int minValue = numbers[0];
        for (int i = 0; i < size; i++) {
            sum += numbers[i];
            if (numbers[i] > maxValue) maxValue = numbers[i];
            if (numbers[i] < minValue) minValue = numbers[i];
        }
        System.out.println("Sum: " + sum);
        System.out.println("Max value: " + maxValue);
        System.out.println("Min value: " + minValue);
    }
}