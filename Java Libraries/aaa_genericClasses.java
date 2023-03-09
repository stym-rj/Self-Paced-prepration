class Pair<T, S> {
    public T x;
    public S y;
}

class aaa_genericClasses {
    public static void main(String[] args) {
        Pair<Integer, String> p = new Pair<Integer, String>();
        Pair<String, String> q = new Pair<>();
        p.x = 12;
        p.y = "Helloo";
        System.out.println(p.x);
        System.out.println(p.y);

        String str = Integer.toString(p.x);
        System.out.println(str);
    }
}
