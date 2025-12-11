package p2;

class X{

	void myfunX(){

		p1.A ref;
		ref=new p1.A();
		ref.myfunA();   //---->Error because myfunA is protected so you can access protected methods only through the subclass object (this, super, or an object of type Y), not through a plain A reference from outside package.

	}


}


class Y extends p1.A{


	void myfunY(){
		
		p1.A ref;
		ref=new p1.A();
		ref.myfunA();   //directly call object     //---->Error because myfunA is protected so you can access protected methods only through the subclass object (this, super, or an object of type Y), not through a plain A reference from outside package.


		super.myfunA(); //inheritances    //-----> allowed 
		this.myfunA();	//current context //----->allowed 


	}

}


class TestMain{

	public static void main(String [] args){
		
		p1.A d1;
		d1=new p1.A();
		
	}

}