
public class SingleDarray {
    int arr[] = null;

    public SingleDarray(int sizeOfArray) {
        arr = new int[sizeOfArray];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = Integer.MIN_VALUE;
        }
    }

    public void insert(int location, int valueToBeInserted) {
        try {
            if (arr[location] == Integer.MIN_VALUE) { // O(1)
                arr[location] = valueToBeInserted; // O(1)
                System.out.println("Successfully inserted"); // O(1)
            } else {
                System.out.println("This cell is already occupied"); // O(1)
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Invalid index to access array!"); // O(1)
        }
    }
}
