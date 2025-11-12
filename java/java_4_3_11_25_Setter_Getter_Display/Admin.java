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

	
	void Setterallowen(double x){
	this.allowen=x;
	}
	
	double Getterallowen(){
	return this.allowen;
	}


	
	void display(){
	System.out.println(this.id+"/"+this.name+"/"+this.salary+"/"+this.allowen);
       }




}

class TestAdmin{

public static void main(String[] ags){
 	 
	Admin d1;
	d1=new Admin();
	d1.SetterId(12);
	d1.GetterId();
	d1.SetterName("nikhil");
	d1.GetterName();
	d1.SetterSalary(45.5);
	d1.GetterSalary();
	
	d1.display();

}

}




