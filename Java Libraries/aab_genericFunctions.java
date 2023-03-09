public class aab_genericFunctions {
    public static <T> int count (T arr[], T x) {
        int res = 0;
        for (T e : arr)     if (e.equals(x))        res++;
        return res;
    }

    public static void main (String args[]) {
        Integer arr[] = {3,5,3,43,345,45,87,3};
        System.out.println(count(arr, 3));
    }
}
