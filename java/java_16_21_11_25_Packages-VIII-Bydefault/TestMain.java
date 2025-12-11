
package p2;

class X{

	void myfunX(){

		p1.A ref;
		ref=new p1.A();
		ref.myfunA();   //ERROR--->myfunA() is not public in A; cannot be accessed from outside package
	}


}


class Y extends p1.A{


	void myfunY(){
		
		p1.A ref;
		ref=new p1.A();
		ref.myfunA();   //directly call object     //ERROR--->myfunA() is not public in A; cannot be accessed from outside package


		super.myfunA(); //inheritances    //ERROR--->myfunA() is not public in A; cannot be accessed from outside package

		this.myfunA();	//current context //ERROR--->myfunA() is not public in A; cannot be accessed from outside package

	}

}


class TestMain{

	public static void main(String [] args){
		
		p1.A d1;
		d1=new p1.A();
		
	}

}