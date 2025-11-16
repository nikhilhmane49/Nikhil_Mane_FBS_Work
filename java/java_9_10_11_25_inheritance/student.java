class student{
	
	int id;
	String name;
	double distance;
	static int count=0;


	//***Default Contractor

	student(){

	this.id=12;
	this.name="nikhil";
	this.distance=12.5;
	count++;

	}

	//*****parameterized Contractor

	student(int a, String s,double c){

	this.id=a;
	this.name=s;
	this.distance=c;
	count++;


	}




	//**static getter count function


	static int gettercount(){

		return count;
	}


	void setterid(int id){

	this.id=id;
	
	}

	int getterid(){

	return this.id;

	}



	void settername(String n){

	this.name=n;
	
	}

	String gettername(){

	return this.name;

	}




	void setterdistance(double d){

	this.distance=d;
	
	}

	double getterdistance(){

	return this.distance;

	}


	void Display(){


	System.out.println("the id is:"+this.id);
	System.out.println("the name is:"+this.name);
	System.out.println("the distance is:"+this.distance);

	}





} //class Student end here


//******'extends' keyword means is-a relation--->this compiler do not understand English (is-a) so it use keyword extends(is-a)

class placedstudent extends student   //**^^^^Step1
{

	//*****^^^Step 2 remove the state and behavior which are already avaliable in super    class
	
	String Distination,companyNam;
	
	


	//Default Contractor

	placedstudent(){
	super(); //********Step 4 A
	
	this.Distination="web";
	this.companyNam="tcs";


	}

	//parameterized Contractor

	placedstudent(int a, String s,double c,String d,String co){
	
	super(a,s,c); //******Step 4 B
	
	this.Distination=d;
	this.companyNam=co;

	}




	void setterDistination(String n){

	this.Distination=n;
	
	}

	String getterDistination(){

	return this.Distination;

	}






	void settercompanyNam(String n){

	this.companyNam=n;
	
	}

	String gettercompanyNam(){

	return this.companyNam;

	}





	void Display(){


	super.Display();   //****^^^^^ Step 3
	System.out.println("the Distination is:"+this.Distination);
	System.out.println("the companyNam is:"+this.companyNam);


	}




}//class Studentplacement end here





class TestMainClass{

	public static void main(String agrs[]){
			
	student s1=new student();
	System.out.println("the total count is: "+student.gettercount());
	
	student s2=new student(12,"nishant",12.5);
	System.out.println("the total count is: "+student.gettercount());

	
	placedstudent ps1=new placedstudent();
	System.out.println("the total count is: "+student.gettercount());


	ps1.Display();
	System.out.println(ps1.gettername());

		


	}


}