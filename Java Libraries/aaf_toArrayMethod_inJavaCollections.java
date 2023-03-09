import java.util.*;

// to array method is used to convert a collection framework to a normal array.

public class aaf_toArrayMethod_inJavaCollections {
    public static void main(String args[]) {
        List<Integer> a = new ArrayList<>();
        a.add(43);
        a.add(64);
        a.add(232);

        Object []arr = a.toArray();
        // Int []arr = arr2;        -> above line is same like this.
        for(Object x : arr)     System.out.print(x + " ");
        System.out.println();
        
        TreeSet<Integer> b = new TreeSet<>();
        b.add(12);
        b.add(43);
        b.add(10);
        b.add(65);
        // since b is a TreeSet, therefore it will keep its elements in sorted order.
            
        Object []arr2 = b.toArray();
        // Integer []arr3 = b.toArray();        // this is wrong, because toArray() method returns array of objects.
        for (int i = 0; i < arr2.length; i++)       System.out.print(arr2[i] + " ");
        System.out.println();
    }
}