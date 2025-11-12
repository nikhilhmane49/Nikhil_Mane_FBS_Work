class Distance{

int Km,m;





	Distance(){
	System.out.println("Default constructor");
	this.Km=12;
	this.m=25;
	}

	//parameterized constructor

	Distance(int k,int m){
	System.out.println("parameterized constructor");
	this.Km=k;
	this.m=m;


	}


	void SetterKm(int x){
	this.Km=x;
	}
	
	int GetterKm(){
	return this.Km;
	}


	void SetterM(int m){
	this.m=m;
	}

	int GetterM(){
	return this.m;
	}

	
	void Display(){
	
	System.out.println(this.Km+"/"+this.m);		
	
	}


}


class TestDis{


	public static void main(String args[]){

	
	Distance d1;
	//Default Constructor 
	d1=new Distance();
	d1.Display();

	//parameterized Constructor 
	d1=new Distance(25,12);
	d1.Display();


	
	d1.SetterKm(12);
	d1.GetterKm();
	d1.SetterM(20);
	d1.GetterM();

	d1.Display();

	

	


	}

}