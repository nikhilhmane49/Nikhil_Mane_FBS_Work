

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



void Display(){
	System.out.println(this.roll_no+"/"+this.name+"/"+this.marks);
}


}


class TestStudent{

public static void main(String args[]){

	student[] arr=new student[3];
	arr[0]=new student();
	arr[1]=new student(25,"nik",125.6);
	arr[2]=new student();


	for(int i=0;i<3;i++){
		System.out.println(arr[i]);
	}
	
	for(int i=0;i<3;i++){
		arr[i].Display();
	}



	
	

}

}