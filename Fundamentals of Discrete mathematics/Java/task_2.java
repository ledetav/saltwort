public class task_2 {
    public static void main(String[] args) {
        int count = 0;
        for (int i = 0; i < 1000; i++) {
            if (countDigit(i, 7) == 1) {
                count++;
            }
        }
        System.out.println("Number of integers between 0 and 999 containing exactly one digit 7: " + count);
    }

    private static int countDigit(int n, int digit) {
        int count = 0;
        while (n > 0) {
            if (n % 10 == digit) {
                count++;
            }
            n /= 10;
        }
        return count;
    }
}

