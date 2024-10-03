import java.util.ArrayList;
import java.util.List;

public class ListDemo {
    public static void main(String[] args) {

        List<String> list = new ArrayList<>();

        list.add("Apple");
        list.add("Banana");
        list.add("Cherry");

        System.out.println("Initial List: " + list);

        list.add(1, "Blueberry");
        System.out.println("After adding 'Blueberry' at index 1: " + list);

        list.remove(2);
        System.out.println("After removing element at index 2: " + list);

        list.remove("Banana");
        System.out.println("After removing 'Banana': " + list);

        String fruit = list.get(1); 
        System.out.println("Element at index 1: " + fruit);

        list.set(1, "Date");
        System.out.println("After setting index 1 to 'Date': " + list);

        int size = list.size();
        System.out.println("Size of the List: " + size);

        boolean contains = list.contains("Date");
        System.out.println("List contains 'Date': " + contains);

        System.out.print("Iterating through the List: ");
        for (String item : list) {
            System.out.print(item + " ");
        }
        System.out.println();

        list.clear();
        System.out.println("List after clearing: " + list);
    }
}
