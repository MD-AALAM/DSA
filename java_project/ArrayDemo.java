import java.util.Arrays;

public class ArrayDemo {

    static void reversearray(int array[], int size) {
        int start = 0;
        int end = size - 1;
        while (start < end) {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;
            start++;
            end--;
        }
    }

    static void printarray(int array[]) {
        System.out.println(Arrays.toString(array));
    }

    public static void main(String[] arg) {
        int array[] = {5, 10, 15, 20, 25};
        int size = array.length;
        reversearray(array, size);
        printarray(array); // Output will be: [25, 20, 15, 10, 5]
    }
}
