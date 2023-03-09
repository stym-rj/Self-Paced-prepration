class employee{
    int empid = 10;
    void detail() {
        class employeedetail{
            void show() {
                System.out.println("employee id : " + empid);
                System.out.println("employee name is : satyam");
            }
        }

        employeedetail ed = new employeedetail();
        ed.show();
    }
}

public class bt_innerClass {
    public static void main(String args[]) {
        employee e = new employee();
        e.detail();
    }
}