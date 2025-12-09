package p2;

import p1.A;   // we import A because A is in another package

class X{

	void myfunX(){

		p1.A  ref;
		ref=new p1.A();
		ref.myfunA();          //---->Error because myfunA is private so it is acess only in class A

	}


}



class Y extends p1.A{                 //---->Error because myfunA is private so it is acess only in class A



	void myfunY(){

		p1.A ref;
		ref=new p1.A();
		ref.myfunA();        //---->Error because myfunA is private so it is acess only in class A




		super.myfunA();      // calling inherited method from parent A  //---->Error because myfunA is private so it is acess only in class A

                this.myfunA();       // calling inherited method using current class object  //---->Error because myfunA is private so it is acess only in class A


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