import java.util.function.Predicate;

public interface Collection<E> extends Iterable<E> {
    int size();     // size of collection
    boolean isEmpty();      // if collection is empty or not
    boolean contains(Object o);     // check wheather a given item is present or not
    boolean add(E e);       // to add another element in the collection.
    boolean remove(Object o);       // to remove an object from given method.
    Iterator <E> Iterator();    // iterator to the collection.
    // there is also another better iterator, called as list Interator. this gives various other options to iterate in reverse.
    Object[] toArray();         // used to convert contents of object to an array.
    T[] toArray(T[] arr);       // returns an array
    Stream<E> stream();         // (java 1.8) converts collection to a stream of data and you can apply multiple operations together in a pipeline way
    Stream<E> parallelStream();


    // and then there are various bulk operations.. etc etc...
    boolean containsAll(Collection<?> c);       // if the collection contains all c collection items or not.
    boolean addAll(collection <? extends E> c);     // adds all items of collection
    boolean removeAll(collection <?> c);        // remove all items in collection.
    boolean removeIf(Predicate <? super E> filter);
}


public class aad_collectionInterface {
    public static void main (String args[]) {

    }
}
