package p1;



public class A{


	public void myfunA(){


		System.out.println("This myfunA is in the class A");

	}


}


class B {


	void myfunB(){

		A ref;
		ref=new A();
		ref.myfunA();

	}


}


class C{


	void myfunC(){

		A ref;
		ref=new A();
		ref.myfunA();

	}





}