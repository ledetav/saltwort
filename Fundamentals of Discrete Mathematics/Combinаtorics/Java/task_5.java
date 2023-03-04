import java.util.ArrayList;
import java.util.Scanner;

public class task_5 {
    public static void generateCombinations(ArrayList<Integer> combination, int n, int k, int offset) {
        if (k == 0) {
            for (int i : combination) {
                System.out.print(i + " ");
            }
            System.out.println();
            return;
        }

        for (int i = offset; i <= n - k; i++) {
            combination.add(i);
            generateCombinations(combination, n, k - 1, i + 1);
            combination.remove(combination.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int k = scanner.nextInt();
        int n = scanner.nextInt();

        ArrayList<Integer> combination = new ArrayList<>();
        generateCombinations(combination, n, k, 0);
    }
}
