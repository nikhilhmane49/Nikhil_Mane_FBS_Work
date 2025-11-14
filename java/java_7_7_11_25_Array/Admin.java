class Admin{
	
	int id;
	String name;
	double salary,allowen;



	//Default constructor

	Admin(){
	System.out.println("Default constructor");
	this.id=12;
	this.name="nikhil";
	this.salary=123.54;
	this.allowen=124.54;
	}

	//parameterized constructor

	Admin(int e, String n,double s,double a){
	System.out.println("parameterized constructor");
	this.id=e;
	this.name=n;
	this.salary=s;
	this.allowen=a;

	}




	

	
	void display(){
	System.out.println(this.id+"/"+this.name+"/"+this.salary+"/"+this.allowen);
       }


}

class TestAdmin{

public static void main(String[] ags){
 	 
	
	Admin[] arr=new Admin[3];
	arr[0]=new Admin();
	arr[1]=new Admin();
	arr[2]=new Admin();

	for(int i=0;i<3;i++){
		System.out.println(arr[i]);
	}
	
	for(int i=0;i<3;i++){
		arr[i].display();
	}


}

}




