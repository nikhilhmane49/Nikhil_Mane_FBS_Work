//Input----->argument --->a/@/?.....


package p1;

public class NumberFormatException {

	public static void main(String[] args) {
		
		
		System.out.println(args.length);
		int a=Integer.parseInt(args[0]);    //--->When the argument is other than integer(such as String ...)

	}

}



Error------->>>>>Exception in thread "main" java.lang.NumberFormatException: For input string: "a"
	at java.base/java.lang.NumberFormatException.forInputString(NumberFormatException.java:67)
	at java.base/java.lang.Integer.parseInt(Integer.java:662)
	at java.base/java.lang.Integer.parseInt(Integer.java:778)
	at p1.NumberFormatException.main(NumberFormatException.java:9)






solution----------->



package p1;

public class NumberFormatExceptionsolution {

    public static void main(String[] args) {
        
        System.out.println(args.length);
        
        if(args.length == 0) {
            System.out.println("Please enter a value...");
            return;  // stop execution
        }
        
        if(args[0].matches("\\d+")) {
            int a = Integer.parseInt(args[0]);
            System.out.println("Integer is: " + a);
        } else {
            System.out.println("Bhai integer daal");
        }
    }
}
