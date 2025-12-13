class ExpectionHandling{



	public static void main(String [] args){
		
	try{

		if(args.length<2){
			throw new ArrayIndexOutOfBoundsException();
		}
		

		int a=Integer.parseInt(args[0]);
		int b=Integer.parseInt(args[1]);

		if(b==0){

			throw new ArithmeticException();
		}
		else{
			int c=a/b;
			System.out.println(c);
		}	
	}
	catch(ArrayIndexOutOfBoundsException ab){
		System.out.println("Add the value to the agrs, their is less value in the array");
	}
	catch(ArithmeticException at){

		System.out.println("The second arugmentshould not be 0 this should be non 0");
	}
	catch(Exception e){

		System.out.println("Oops somethings got wrong");
	}
	finally{

		System.out.println("The code is working");
	}



}

	
}