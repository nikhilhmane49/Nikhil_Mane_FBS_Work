class emp{
	
	int emp_id;
	String name;
	double salary;



	//Default constructor

	emp(){
	System.out.println("Default constructor");
	this.emp_id=12;
	this.name="nikhil";
	this.salary=123.54;
	}

	//parameterized constructor

	emp(int e, String n,double s){
	System.out.println("parameterized constructor");
	this.emp_id=e;
	this.name=n;
	this.salary=s;
	}




	void display(){
	System.out.println(this.emp_id+"/"+this.name+"/"+this.salary);
       }


}

class TestEmp{

public static void main(String[] ags){


	emp[] arr=new emp[3];
	arr[0]=new emp();
	arr[1]=new emp(25,"nik",1254.8);
	arr[2]=new emp();
	
	
 	for(int i=0;i<3;i++){
		System.out.println(arr[i]);
	}
	
	for(int i=0;i<3;i++){
		arr[i].display();
	}

}

}




