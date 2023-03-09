import java.util.*;

public class aak_stream {
    public static void main(String args[]) {
        // stream function is present in Collection interface.
        List<Integer> a = Arrays.asList(4234,234,25,45,4,564,45,575,34,543,3,8);

        a.stream()
            .forEach(x -> System.out.print(x + " "));
        System.out.println();

        a.stream()
            .filter(x -> x > 10)        // from the list, it will take all items greater than 10
            .filter(x -> x % 2 == 0)    // from above filtered items, it will take out all even numbers
            .forEach(x -> System.out.print(x + " "));       // from above filtered items, it will print all.
            // .filter() is a lazy operation. means that when there is a need for that process then only it will be executed, else it won't execute. In the above example, System.out.print() needs the .filter() process, so, it will execute when printing line is reached. but if there would have been no printing line, then .filter() command wouldn't have executed at all.



        // trying stream() for array :
        // int arr[] = {34,432,4,3425,234,53245,3};
        // arr.stream()
        //     .filter(x -> x > 100)
        //     .filter(x -> x % 2 != 0)
        //     .forEach(x -> System.out.print(x + ""));
        // this thing dosent works for normal arrays b/c arrays are not a part of collection framework.
    }
}
