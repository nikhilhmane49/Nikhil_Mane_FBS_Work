

class student{

int roll_no;
String name;
double marks;

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
	d1=new student();

	d1.SetterRoll(12);
	d1.GetterRoll();
	d1.SetterName("Nikhil");
	d1.GetterName();
	d1.Settermarks(125);
	d1.Gettermarks();


	d1.Display();
	
	

}

}