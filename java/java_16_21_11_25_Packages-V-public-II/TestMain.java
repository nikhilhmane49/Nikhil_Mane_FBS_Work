package p2;

import p1.A;   // we import A because A is in another package

class X{

	void myfunX(){

		p1.A  ref;
		ref=new p1.A();
		ref.myfunA();          // allowed because myFunA is public

	}


}



class Y extends p1.A{                 // A is public so you can inherit


	void myfunY(){

		p1.A ref;
		ref=new p1.A();
		ref.myfunA();        // calling through object



		super.myfunA();      // calling inherited method from parent A
                this.myfunA();       // calling inherited method using current class object

	}



}



 class TestMain{


	public static void main(String[] args){


		X xobj = new X();
		xobj.myfunX();



		Y yobj=new Y();
		
		yobj.myfunY();


		yobj.myfunA();
	}


}