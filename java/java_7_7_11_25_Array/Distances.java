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


	
	
	void Display(){
	
	System.out.println(this.Km+"/"+this.m);		
	
	}


}


class TestDis{


	public static void main(String args[]){





	Distance[] arr=new Distance[3];
	arr[0]=new Distance();
	arr[1]=new Distance(14,45);
	arr[2]=new Distance();




	
	
	for(int i=0;i<3;i++){
		System.out.println(arr[i]);
	}
	
	for(int i=0;i<3;i++){
		arr[i].Display();
	}




	

	

	


	}

}