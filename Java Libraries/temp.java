import java.util.*;

public class temp {
    public static void main (String args[]) {
        ArrayList<Integer> a = new ArrayList<>();
        a.add(43);
        a.add(21);

        Iterator<Integer> it = a.iterator();
        int y = it.next();
        System.out.println(y);
        // while(it.hasNext()) {
        //     System.out.println(it);
        // }
    }
}