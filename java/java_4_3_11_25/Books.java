	

	class Books{

		int Isbn;
		String bname,category;
		double price;


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
	d1=new Books();

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