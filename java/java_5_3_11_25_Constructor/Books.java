	

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





		void SetterIsbn(int x){
		this.Isbn=x;
		}

		int GetterIsbn(){
		return this.Isbn;
		}

		void SetterName(String x){
		this.bname=x;
		}

		String GetterName(){
		return this.bname;
		}


		void Setterprice(double x){
		this.price=x;
		}

		double Getterprice(){
		return this.price;
		}

		void Settercategory(String x){
		this.category=x;
		}

		String Gettercategory(){
		return this.category;
		}
		

		void Display(){
		System.out.println(this.Isbn+"/"+this.bname+"/"+this.category+"/"+this.price);
		}


	}




	class TestBooks{


	public static void main(String args[]){

	Books d1;
	//Default Constructor 
	d1=new Books();
	d1.Display();

	//parameterized Constructor 
	d1=new Books(25,"nik","It",125.6);
	d1.Display();


	d1.SetterIsbn(12);
	d1.GetterIsbn();
	d1.SetterName("Nikhil");
	d1.GetterName();
	d1.Setterprice(125);
	d1.Getterprice();
	d1.Settercategory("IT_Dept");
	d1.Gettercategory();



	d1.Display();
	
	

}



	}