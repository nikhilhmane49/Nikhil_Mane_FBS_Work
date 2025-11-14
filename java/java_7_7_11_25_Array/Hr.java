class Hr{

int id;
String name;
double Salary,Commison; 



	//Default constructor

	Hr(){
	System.out.println("Default constructor");
	this.id=12;
	this.name="nikhil";
	this.Salary=123.54;
	this.Commison=124.54;
	}

	//parameterized constructor

	Hr(int e, String n,double s,double a){
	System.out.println("parameterized constructor");
	this.id=e;
	this.name=n;
	this.Salary=s;
	this.Commison=a;

	}








void Display(){

	System.out.println(this.id+"/"+this.name+"/"+this.Salary+"/"+this.Commison);

}


}

class TestHr{

	public static void main(String args[]){






	Hr[] arr=new Hr[3];
	arr[0]=new Hr();
	arr[1]=new Hr();
	arr[2]=new Hr();

	for(int i=0;i<3;i++){
		System.out.println(arr[i]);
	}
	
	for(int i=0;i<3;i++){
		arr[i].Display();
	}


			
	
	
	}

}