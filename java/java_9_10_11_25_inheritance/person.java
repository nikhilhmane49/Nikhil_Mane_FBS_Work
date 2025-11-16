class person{

	String name;
	int age;
	String address;
	



	//Default Constructor

	person(){
	this.name="nikhil";
	this.age=22;
	this.address="navi mumbai";
	}


	//parameter Constructor

	person(String nam,int age,String add){
	this.name=nam;
	this.age=age;
	this.address=add;

	}




	void setterage(int x){

		this.age=x;

	}

	int getterage(){

		return this.age;
	}



	void settername(String x){

		this.name=x;

	}

	String gettername(){

		return this.name;
	}


	void setteraddress(String x){

		this.address=x;

	}

	String getteraddress(){

		return this.address;
	}



	void Display(){

		System.out.println("The name is "+this.name);
		System.out.println("The age is "+this.age);
		System.out.println("The address is "+this.address);

	
	}







}


class student extends person{


	int rollno;
	String course;




	//Default Constructor

	student(){
	super();
	this.rollno=54;
	this.course="web";
	}


	//parameter Constructor

	student(String nam,int age,String add,int roll,String cou){
	super( nam, age, add);
	this.rollno=roll;
	this.course=cou;

	}




	void setterrollno(int x){

		this.rollno=x;

	}

	int getterrollno(){

		return this.rollno;
	}



	void settercourse(String x){

		this.course=x;

	}

	String gettercourse(){

		return this.course;
	}





	void Display(){
		super.Display();
		System.out.println("The rollno is "+this.rollno);
		System.out.println("The course is "+this.course);	
	}





}


class teacher extends person{

	String subject;
	double salary;



	//Default Constructor

	teacher(){
	super();
	this.subject="Webfullstack";
	this.salary=125.6;
	}


	//parameter Constructor

	teacher(String nam,int age,String add,String sub,double sal){
	super( nam, age, add);
	this.subject=sub;
	this.salary=sal;

	}




	void settersubject(String x){

		this.subject=x;

	}

	String gettersubject(){

		return this.subject;
	}



	void settersal(double x){

		this.salary=x;

	}

	double gettersal(){

		return this.salary;
	}





	void Display(){
		super.Display();
		System.out.println("The subject is "+this.subject);
		System.out.println("The salary is "+this.salary);	
	}




}



class officer extends person{

	String department;
	String grade;



	//Default Constructor

	officer(){
	super();
	this.department="Admin";
	this.grade="I class";
	}


	//parameter Constructor

	officer(String nam,int age,String add,String dep,String grade){
	super( nam, age, add);
	this.department=dep;
	this.grade=grade;

	}




	void setterdepartment(String x){

		this.department=x;

	}

	String getterdepartment(){

		return this.department;
	}



	void settergrade(String x){

		this.grade=x;

	}

	String gettergrade(){

		return this.grade;
	}





	void Display(){
		super.Display();
		System.out.println("The department is "+this.department);
		System.out.println("The grade is "+this.grade);	
	}





}





class TestMain{


	public static void main(String args[]){

		officer f1=new officer();
		f1.Display();

		teacher t1=new teacher();
		t1.Display();

		student s1=new student();
		s1.Display();
	}

}






