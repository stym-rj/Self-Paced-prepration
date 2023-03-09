import java.util.*;
import java.io.*;

public class aae_iteratorsInJava {

    static void removeEven(Collection<Integer> c) {
        Iterator<Integer> it = c.iterator();

        // | 54 | 98 | 31 | 87 |            <- this is how iterator works
        // iterator goes on to these boundaries. not on elements.
        // initially, iterator's position is just before the first element.
        // when next() is called, the iterator jumps just after and just before the 2nd element and so on...

        while (it.hasNext()) {          // hasNext() returns a boolean value and tells if there is next element in the collection or not.
            int x = (Integer) it.next();        // this next() method does two things : gives the next value and puts the iterator in next position.
            if (x % 2 == 0)         it.remove();        // remove() removes the element just before the iterator.
        }
    }

    static void print1(Collection<Integer> c) {
        Iterator<Integer> it = c.iterator();
        while(it.hasNext()) {
            System.out.print(it.next() + " ");
        }
        System.out.println();
    }
    public static void main(String args[]) {
        Collection <Integer> a = new ArrayList<Integer>();
        a.add(54);
        a.add(98);
        a.add(31);
        a.add(87);

        print1(a);
        removeEven(a);
        print1(a);

        Collection<Integer> b = new LinkedList<Integer>();
        b.add(76);
        b.add(45);
        b.add(32);
        b.add(12);
        b.add(21);
        b.add(98);

        print1(b);
        removeEven(b);
        print1(b);
    }
}
