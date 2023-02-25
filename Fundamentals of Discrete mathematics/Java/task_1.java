import java.util.*;

class SetTransform {
    public static Set<Integer> inputSet() {
        try (Scanner scanner = new Scanner(System.in)) {
            while (true) {
                String userInput = scanner.nextLine().trim();
                String[] inputList = userInput.split(" ");
                try {
                    Set<Integer> setInt = new HashSet<>();
                    for (String s : inputList) {
                        setInt.add(Integer.parseInt(s));
                    }
                    return setInt;
                } catch (NumberFormatException e) {
                    System.out.println("Error: set can only consist of integers");
                }
            }
        }
    }

    public static void main(String[] args) {
        System.out.println("Enter set A:");
        Set<Integer> setA = inputSet();

        System.out.println("Enter set B:");
        Set<Integer> setB = inputSet();

        System.out.println("Enter set U:");
        Set<Integer> setU = inputSet();

        System.out.println("Enter set C:");
        Set<Integer> setC = inputSet();

        Set<Integer> result = new HashSet<>(setA);
        result.retainAll(setB);
        Set<Integer> setUC = new HashSet<>(setU);
        setUC.removeAll(setC);
        result.addAll(setUC);

        System.out.println("Transformed set: " + result);
    }
}
