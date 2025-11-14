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


	void Display(){
	
	System.out.println(this.real+"+"+this.img+"i");
	}

   }


	class Testcomplex{
	

	public static void main(String args[]){

	complex[] arr=new complex[3];
	arr[0]=new complex();
	arr[1]=new complex();
	arr[2]=new complex();

	for(int i=0;i<3;i++){
		System.out.println(arr[i]);
	}
	
	for(int i=0;i<3;i++){
		arr[i].Display();
	}



	}
		
	}