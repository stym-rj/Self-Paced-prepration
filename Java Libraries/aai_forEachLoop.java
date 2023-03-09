import java.util.*;

public class aai_forEachLoop {
    public static void main(String args[]) {
        List<Integer> a = Arrays.asList(43,6,243,65,42,54,2345,23,45,3,96);

        // for (Integer x : a)      System.out.print(x + " ");
        for (Object x : a)      System.out.print(x + " ");          // we use Object instead of Integer for flexibility of datatypes.
    }
}
