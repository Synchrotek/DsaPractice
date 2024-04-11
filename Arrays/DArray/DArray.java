import java.util.Arrays;

class DArray {
    public static void main(String[] args) {
        int[] intArray; // O(1)
        intArray = new int[3]; // O(1)
        intArray[0] = 1; // .
        intArray[1] = 2; // .
        intArray[2] = 3; // . O(n)
        System.out.println(Arrays.toString(intArray));

        String sArray[] = { "a", "b", "c" }; // O(1)
        System.out.println(Arrays.toString(sArray));

        // Importing from other class
        SingleDarray sda = new SingleDarray(10);
        sda.insert(0, 0);
        sda.insert(1, 10);
        sda.insert(2, 20);
        sda.insert(1, 30);
        sda.insert(12, 120);
    }
}