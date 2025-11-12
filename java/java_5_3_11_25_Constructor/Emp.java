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




	void SetterId(int x){
	this.emp_id=x;
	}
	
	int GetterId(){
	return this.emp_id;
	}

	void SetterName(String x){
	this.name=x;
	}
	
	String GetterName(){
	return this.name;
	}

	void SetterSalary(double x){
	this.salary=x;
	}
	
	double GetterSalary(){
	return this.salary;
	}

	
	void display(){
	System.out.println(this.emp_id+"/"+this.name+"/"+this.salary);
       }


}

class TestEmp{

public static void main(String[] ags){
 	
	emp d1;

	//Default Constructor 
	d1=new emp();
	d1.display();

	//parameterized Constructor 
	d1=new emp(25,"nik",1254.8);
	d1.display();




	d1.SetterId(12);
	d1.GetterId();
	d1.SetterName("nikhil");
	d1.GetterName();
	d1.SetterSalary(45.5);
	d1.GetterSalary();
	
	d1.display();

}

}




