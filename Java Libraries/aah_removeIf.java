import java.util.*;

public class aah_removeIf {
    public static void main(String args[]) {
        ArrayList<Integer> a = new ArrayList<>();
        a.add(54);
        a.add(43);
        a.add(67);
        a.add(98);
        a.add(42);

        a.removeIf((n) -> (n % 2 == 0));
        // lambda expression : 
        // (n) : this is parameter to the function.
        // -> : arrow operator
        // (n % 2 == 0) : code of the function.

        System.out.println(a);
    }
}
