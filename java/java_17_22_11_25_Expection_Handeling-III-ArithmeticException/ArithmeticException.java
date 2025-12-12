//Input----->argument --->[10,0]

package p1;

public class ArithmeticException {

	public static void main(String[] args) {
		
		System.out.println(args.length);   //When we give the argument as 10,0 
		int a=Integer.parseInt(args[0]);
		int b=Integer.parseInt(args[1]);
		int c=a/b;
		System.out.println(c);
	}

}




ERROR---->Exception in thread "main" java.lang.ArithmeticException: / by zero
	at p1.ArithmeticException.main(ArithmeticException.java:10)




solution--->



package p1;

public class ArithmeticExceptionSolution {

	public static void main(String[] args) {
		
		System.out.println(args.length);
		int a=Integer.parseInt(args[0]);
		int b=Integer.parseInt(args[1]);
		
		if(b == 0) {
		    System.out.println("Dusra argument 0 mat daal!!");
		} else {
		    int c = a / b;
		    System.out.println(c);
		}

	}

}


