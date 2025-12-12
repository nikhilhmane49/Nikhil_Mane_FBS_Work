//Input----->argument --->[1,2]

package p1;

public class ArrayIndexOutOfBoundsException {

	public static void main(String[] args) {
		
		System.out.println(args.length);
		int a=Integer.parseInt(args[3]);   //When we give the argument as 1,2 -->means we are passing 2 value in the String[] args , But we are acessing 3 index

	}

}


ERROR--->Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 3 out of bounds for length 2
	at p1.ArrayIndexOutOfBoundsException.main(ArrayIndexOutOfBoundsException.java:8)




solution---->


package p1;

public class ArrayIndexOutOfBoundsExceptionSolution {

	public static void main(String[] args) {
		
		System.out.println(args.length);

        for (int i = 0; i < args.length; i++) {
            System.out.println(Integer.parseInt(args[i]));
        }
	}

}
