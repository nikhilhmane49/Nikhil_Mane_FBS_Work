  class complex{

	int real,img;





	//Default constructor

	complex(){
	System.out.println("Default constructor");
	this.real=12;
	this.img=25;
	}

	//parameterized constructor

	complex(int a, int b){
	System.out.println("parameterized constructor");
	this.real=a;
	this.img=b;


	}




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
	//Default Constructor 
	d1=new complex();
	d1.Display();

	//parameterized Constructor 
	d1=new complex(25,23);
	d1.Display();





	d1.SetterReal(12);
	d1.GetterReal();
	d1.SetterImg(21);
	d1.GetterImg();

	d1.Display();


	}
		
	}