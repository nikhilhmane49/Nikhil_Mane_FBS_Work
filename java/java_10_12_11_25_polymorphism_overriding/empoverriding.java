class emp{

	int EmpId;
	String EmpName;
	String JoinDate;
	String Dept;
	double sal;



	//Default Constructor

	emp(){
	this.EmpId=12;
	this.EmpName="Ram";
	this.JoinDate="10 Nov";
	this.Dept="HR";
	this.sal=452.6;
	}


	//parameter Constructor

	emp(int id,String nam,String join,String Dep,double sal){
	this.EmpId=id;
	this.EmpName=nam;
	this.JoinDate=join;
	this.Dept=Dep;
	this.sal=sal;

	}


	double calsal(){

		return this.sal;

	}

	void setterid(int x){

		this.EmpId=x;

	}

	int getterid(){

		return this.EmpId;
	}



	void setterEmpName(String x){

		this.EmpName=x;

	}

	String getterEmpName(){

		return this.EmpName;
	}



	void setterJoinDate(String x){

		this.JoinDate=x;

	}

	String getterJoinDate(){

		return this.JoinDate;
	}

	void setterDept(String x){

		this.Dept=x;

	}

	String getterDept(){

		return this.Dept;
	}






	void Display(){

		System.out.println("the EmpId is: "+this.EmpId);
		System.out.println("the EmpName is: "+this.EmpName);
		System.out.println("the JoinDate is: "+this.JoinDate);
		System.out.println("the Dept is: "+this.Dept);
		System.out.println("the salary is: "+this.sal);

	}



}


class Hr extends emp{
	
	int totalInterviews;     
        String hrLevel;  
	double commission;


	//Default Constructor

	Hr(){

	super();

	this.totalInterviews=5;
	this.hrLevel="Jr.";
	this.commission=456.7;
	}


	//parameter Constructor

	Hr(int id,String nam,String join,String Dep, double sal,int no,String lev,double com){

	super(id,nam,join,Dep,sal);

	this.totalInterviews=5;
	this.hrLevel=lev;
	this.commission=com;

	}


	double calsal(){

		return this.sal+this.commission;

	}




	void settertotalInterviews(int x){

		this.totalInterviews=x;

	}

	int gettertotalInterviews(){

		return this.totalInterviews;
	}



	void setterhrLevel(String x){

		this.hrLevel=x;

	}

	String getterEmpName(){

		return this.hrLevel;
	}

	


	void Display(){

		super.Display();
		
		System.out.println("the totalInterviews is: "+this.totalInterviews);
		System.out.println("the hrLevel is: "+this.hrLevel);
		System.out.println("the commission is: "+this.commission);

	}



	
	

}


class admin extends emp{

	int officeRooms;          
        String shiftTiming; 
	double allo ;


	//Default Constructor

	admin(){

	super();

	this.officeRooms=5;
	this.shiftTiming="evening";
	this.allo=123.5;
	}


	//parameter Constructor

	admin(int id,String nam,String join,String Dep,double sal,int no,String shfit,double allo){

	super(id,nam,join,Dep,sal);

	this.officeRooms=no;
	this.shiftTiming=shfit;
	this.allo=allo;


	}



	double calsal(){

		return this.sal+this.allo;

	}








	void setterofficeRooms(int x){

		this.officeRooms=x;

	}

	int getterofficeRooms(){

		return this.officeRooms;
	}



	void setterhrLevel(String x){

		this.shiftTiming=x;

	}

	String gettershiftTiming(){

		return this.shiftTiming;
	}




	void Display(){

		super.Display();
		
		System.out.println("the officeRooms is: "+this.officeRooms);
		System.out.println("the shiftTiming is: "+this.shiftTiming);
	}




}


class salesmarketing extends emp {

	int totalClients;
	double monthlyTarget; 
	double insetive;



	//Default Constructor

	salesmarketing(){

	super();

	this.totalClients=7;
	this.monthlyTarget=124.5;
	this.insetive=145.6;
	}


	//parameter Constructor

	salesmarketing(int id,String nam,String join,String Dep,double sal,int no,double target,double inse ){

	super(id,nam,join,Dep,sal);

	this.totalClients=no;
	this.monthlyTarget=target;
	this.insetive=inse;

	}


	double calsal(){

		return this.sal+this.insetive;

	}




	void settertotalClients(int x){

		this.totalClients=x;

	}

	int gettertotalClients(){

		return this.totalClients;
	}



	void settermonthlyTarget(double x){

		this.monthlyTarget=x;

	}

	double gettermonthlyTarget(){

		return this.monthlyTarget;
	}



	void Display(){

		super.Display();
		
		System.out.println("the totalClients is: "+this.totalClients);
		System.out.println("the monthlyTarget is: "+this.monthlyTarget);
	}



}


class TestMain{

	public static void main(String args[]){

		Hr h;
		h=new Hr();
		System.out.println(h.calsal());


		admin A;
		A=new admin();
		System.out.println(A.calsal());


		salesmarketing S;
		S=new salesmarketing();
		System.out.println(S.calsal());


				

	}

}