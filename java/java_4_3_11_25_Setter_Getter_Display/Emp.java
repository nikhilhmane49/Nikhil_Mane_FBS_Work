class emp{
	
	int emp_id;
	String name;
	double salary;

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




