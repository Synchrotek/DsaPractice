class prog1 {
    public static int multiplyNumbers(int n) {
        return n * n;
    }

    public static void printNUmbers(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.println(i + " " + j);
            }
        }

        for (int k = 0; k < n; k++) {
            System.out.println(k);
        }
    }

    public static void main(String[] args) {
        System.out.println(multiplyNumbers(10));
        printNUmbers(10);
    }
}