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



       //Default Constructor 
	d1=new Admin();
	d1.display();

	//parameterized Constructor 
	d1=new Admin(25,"nik",1254.8,145.6);
	d1.display();



	d1.SetterId(12);
	d1.GetterId();
	d1.SetterName("nikhil");
	d1.GetterName();
	d1.SetterSalary(45.5);
	d1.GetterSalary();
	d1.Setterallowen(45.5);
	d1.Getterallowen();
	
	d1.display();

}

}




