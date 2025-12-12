public class UnBoxingExample {

    public static void main(String[] args) {
        
        Integer obj = 20;    // Wrapper object
        int a = obj;         // Unboxing (Integer → int)

        System.out.println("Wrapper object: " + obj);
        System.out.println("Primitive value: " + a);
    }
}
