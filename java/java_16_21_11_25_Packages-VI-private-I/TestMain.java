package p2;



class X{

void myfunX(){

	p1.A  ref;   //---->Error because myfunA is private so it is acess only in class A

	ref=new p1.A();
	ref.myfunA();

	}


}



class Y extends p1.A{


void myfunY(){

	p1.A ref;  //---->Error because myfunA is private so it is acess only in class A

	ref=new p1.A();
	ref.myfunA();

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