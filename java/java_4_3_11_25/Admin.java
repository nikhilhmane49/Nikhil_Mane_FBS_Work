class Admin{
	
	int id;
	String name;
	double salary,allowen;

	void SetterId(int x){
	this.id=x;
	}
	
	int GetterId(){
	return this.id;
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

class TestAdmin{

public static void main(String[] ags){
 	
	emp d1;
	d1=new emp();
	d1.SetterId(12);
	d1.GetterId();
	d1.SetterName("nikhil");
	d1.GetterName();
	d1.SetterSalary(45.5);
	d1.GetterSalary();
	
	d1.display();

}

}




