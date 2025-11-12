

class student{

int roll_no;
String name;
double marks;




        //Default constructor

	student(){
	System.out.println("Default constructor");
	this.roll_no=12;
	this.name="nikhil";
	this.marks=123.54;
	}

	//parameterized constructor

	student(int e, String n,double s){
	System.out.println("parameterized constructor");
	this.roll_no=e;
	this.name=n;
	this.marks=s;


	}






void SetterRoll(int x){
	this.roll_no=x;
}

int GetterRoll(){
	return this.roll_no;
}


void SetterName(String x){
	this.name=x;
}

String GetterName(){
	return this.name;
}


void Settermarks(double x){
	this.marks=x;
}

double Gettermarks(){
	return this.marks;
}

void Display(){
	System.out.println(this.roll_no+"/"+this.name+"/"+this.marks);
}


}


class TestStudent{

public static void main(String args[]){

	student d1;
	//Default Constructor 
	d1=new student();
	d1.Display();

	//parameterized Constructor 
	d1=new student(25,"nik",125.6);
	d1.Display();




	d1.SetterRoll(12);
	d1.GetterRoll();
	d1.SetterName("Nikhil");
	d1.GetterName();
	d1.Settermarks(125);
	d1.Gettermarks();


	d1.Display();
	
	

}

}