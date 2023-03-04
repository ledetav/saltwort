import java.util.*;

public class task_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the four sets from user input
        Set<Integer> setA = readSetFromInput(scanner, "A");
        Set<Integer> setB = readSetFromInput(scanner, "B");
        Set<Integer> setU = readSetFromInput(scanner, "U");
        Set<Integer> setC = readSetFromInput(scanner, "C");

        // Transform the sets according to the formula (A||B)&(U\C)
        Set<Integer> unionAB = new HashSet<>(setA);
        unionAB.addAll(setB);
        Set<Integer> complementC = new HashSet<>(setU);
        complementC.removeAll(setC);
        Set<Integer> result = new HashSet<>(unionAB);
        result.retainAll(complementC);

        // Print the result
        System.out.println("Result: " + result);
    }

    // Helper method to read a set from user input
    private static Set<Integer> readSetFromInput(Scanner scanner, String setName) {
        System.out.print("Enter set " + setName + ": ");
        String inputLine = scanner.nextLine();
        String[] elements = inputLine.split("\\s+");
        Set<Integer> set = new HashSet<>();
        for (String element : elements) {
            try {
                int value = Integer.parseInt(element);
                set.add(value);
            } catch (NumberFormatException e) {
                System.out.println("Error: invalid input for set " + setName);
                return readSetFromInput(scanner, setName);
            }
        }
        return set;
    }
}