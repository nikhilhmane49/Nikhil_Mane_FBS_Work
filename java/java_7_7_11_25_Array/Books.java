	

	class Books{

		int Isbn;
		String bname,category;
		double price;





	//Default constructor

	Books(){
	System.out.println("Default constructor");
	this.Isbn=12;
	this.bname="nikhil";
	this.category="DeptIt";
	this.price=123.54;
	}

	//parameterized constructor

	Books(int e, String n, String m,double s){
	System.out.println("parameterized constructor");
	this.Isbn=e;
	this.bname=n;
	this.category=m;
	this.price=s;


	}



        void Display(){
		System.out.println(this.Isbn+"/"+this.bname+"/"+this.category+"/"+this.price);
	}

		
		


	}




	class TestBooks{


	public static void main(String args[]){





	Books[] arr=new Books[3];
	arr[0]=new Books();
	arr[1]=new Books(25,"nik","It",125.6);
	arr[2]=new Books();

	

	for(int i=0;i<3;i++){
		System.out.println(arr[i]);
	}
	
	for(int i=0;i<3;i++){
		arr[i].Display();
	}

	
	

}



	}