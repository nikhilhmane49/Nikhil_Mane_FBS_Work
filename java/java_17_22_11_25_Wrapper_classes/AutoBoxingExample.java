public class AutoBoxingExample {

    public static void main(String[] args) {
        
        int a = 10;          // primitive int
        Integer obj = a;     // Autoboxing (int → Integer)

        System.out.println("Primitive value: " + a);
        System.out.println("Wrapper object: " + obj);
    }
}
