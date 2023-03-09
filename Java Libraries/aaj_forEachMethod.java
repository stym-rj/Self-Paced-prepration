import java.util.Arrays;
import java.util.List;

public class aaj_forEachMethod {
    public static void main(String args[]) {
        List<Integer> a = Arrays.asList(321,53,24,234,24,35,234,34);

        a.forEach(x -> System.out.print(x + " "));
        System.out.println();

        a.forEach(x -> {
            x++;
            System.out.print(x + " ");
        });     // this is how we pass more than one line of code in lambda expression
        System.out.println();
        System.out.println(a);
    }
}
