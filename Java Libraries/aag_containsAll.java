// this method is like this : 
// boolean containsAll(Collection<?> c) {}

import java.util.*;

public class aag_containsAll {
    public static void main(String args[]) {
        List<Integer> a = new LinkedList<>();
        a.add(20);
        a.add(10);
        a.add(50);
        a.add(40);

        List<Integer> b = new LinkedList<>();
        b.add(10);
        b.add(40);
        b.add(40);

        System.out.println(a.containsAll(b));       // if all the items in b present in a?  (gives true).

        List<Integer> c = new LinkedList<>();
        c.add(20);
        c.add(50);
        c.add(800);

        System.out.println(a.containsAll(c));       // if all the items in c present in a?      (gives false).


        TreeSet<Integer> d = new TreeSet<>();
        d.add(10);
        d.add(50);

        System.out.println(a.containsAll(d));       // since this method is of Collections class, therefore we can match a TreeSet with LinkedList or ArrayList or anyother type with anyother type of Collection Class.
    }
}
