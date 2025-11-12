class Distance{

int Km,m;

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
	d1=new Distance();
	
	d1.SetterKm(12);
	d1.GetterKm();
	d1.SetterM(20);
	d1.GetterM();

	d1.Display();

	

	


	}

}