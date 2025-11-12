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





void StterId(int id){

this.id=id;

}

int GetterId(){

return this.id;

}


void StterName(String name){

this.name=name;

}

String GetterName(){

return this.name;

}

void StterSalary(double sal){

this.Salary=sal;

}

double GetterSalary(){

return this.Salary;

}



void StterCom(double com){

this.Commison=com;

}

double GetterCom(){

return this.Commison;

}


void Display(){

	System.out.println(this.id+"/"+this.name+"/"+this.Salary+"/"+this.Commison);

}


}

class TestHr{

	public static void main(String args[]){
		
	Hr d1;
	//Default Constructor 
	d1=new Hr();
	d1.Display();

	//parameterized Constructor 
	d1=new Hr(25,"nik",1254.8,145.6);
	d1.Display();



	d1.StterId(1);
	d1.GetterId();
	d1.StterName("nikhiul");
	d1.GetterName();
	d1.StterSalary(12.6);
	d1.GetterSalary();
	d1.StterCom(125.6f);
	d1.GetterCom();


	d1.Display();
	
	
	
	
	}

}