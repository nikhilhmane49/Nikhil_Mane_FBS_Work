  class complex{

	int real,img;

	void SetterReal(int x){
	
	this.real=x;
	}
	
	
	int GetterReal(){
	return this.real;
	}

	void SetterImg(int x){
	this.img=x;
	}
	
	int GetterImg(){
	return this.img;
	}

	void Display(){
	
	System.out.println(this.real+"+"+this.img+"i");
	}

   }


	class Testcomplex{
	

	public static void main(String args[]){

	complex d1;
	d1=new complex();
	d1.SetterReal(12);
	d1.GetterReal();
	d1.SetterImg(21);
	d1.GetterImg();

	d1.Display();


	}
		
	}