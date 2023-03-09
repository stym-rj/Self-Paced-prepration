import java.util.ArrayList;

// wildcards in generics are reffered to unknown types.
// pair<?> a = new pair<>();

class Student {
    void print() {
        System.out.println("Student");
    }
}

class EnggStudent extends Student {
    void print() {
        System.out.println("Engg Student");
    }
}

class MngStudent extends Student {
    void print() {
        System.out.println("Management Student");
    }
}

class aac_wildcardsInGenerics {
    static void printStudents(ArrayList <? extends Student> al) {       // ArrayList -> datatype. | <? extends Student> -> this is also kind of datatype (this means that (? means unknown type), ("extends Student"means ? is inheriting Studnet)). | al -> this is the variable name.
        for (Student s : al) {
            s.print();
        }
    }

    public static void main (String args[]) {
        ArrayList <EnggStudent> al1 = new ArrayList<>();
        al1.add(new EnggStudent());
        al1.add(new EnggStudent());
        ArrayList <MngStudent> al2 = new ArrayList<>();
        al2.add(new MngStudent());
        al2.add(new MngStudent());
        al2.add(new MngStudent());
        al2.add(new MngStudent());
        printStudents(al1);
        printStudents(al2);
    }
}