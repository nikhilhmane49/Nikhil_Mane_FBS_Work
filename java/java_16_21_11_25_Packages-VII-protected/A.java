package p1;

public class A{

	protected void myfunA(){

		System.out.println("Function A is called form class A");

	}


}


class B extends A{


void myfunB(){

	A ref;
	ref=new A();
	ref.myfunA();    //-----> allowed 


	}

}


class C{

void myfunC(){

	A ref;
	ref=new A();
	ref.myfunA();  //-----> allowed 



	}


}


