import java.util.HashSet;
import java.util.Set;

public class SetDemo {
    public static void main(String[] args) {
        // Create a Set of Strings using HashSet
        Set<String> set = new HashSet<>();

        // Add elements to the Set
        set.add("Apple");
        set.add("Banana");
        set.add("Cherry");
        set.add("Apple"); // Adding a duplicate element

        // Display the Set
        System.out.println("Initial Set: " + set);

        // Remove an element from the Set
        set.remove("Banana");
        System.out.println("After removing 'Banana': " + set);

        // Check if the Set contains a specific element
        boolean containsCherry = set.contains("Cherry");
        System.out.println("Set contains 'Cherry': " + containsCherry);

        // Get the size of the Set
        int size = set.size();
        System.out.println("Size of the Set: " + size);

        // Iterate through the Set using a for-each loop
        System.out.print("Iterating through the Set: ");
        for (String item : set) {
            System.out.print(item + " ");
        }
        System.out.println();

        // Clear all elements from the Set
        set.clear();
        System.out.println("Set after clearing: " + set);

        // Check if the Set is empty
        boolean isEmpty = set.isEmpty();
        System.out.println("Is the Set empty: " + isEmpty);
    }
}
