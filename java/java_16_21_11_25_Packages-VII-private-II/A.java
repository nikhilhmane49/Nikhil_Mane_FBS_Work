package p1;



public class A{


	private void myfunA(){


		System.out.println("This myfunA is in the class A");

	}


}


class B {


	void myfunB(){

		A ref;
		ref=new A();
		ref.myfunA();   //---->Error because myfunA is private so it is acess only in class A


	}


}


class C{


	void myfunC(){

		A ref;
		ref=new A();
		ref.myfunA();  //---->Error because myfunA is private so it is acess only in class A


	}





}