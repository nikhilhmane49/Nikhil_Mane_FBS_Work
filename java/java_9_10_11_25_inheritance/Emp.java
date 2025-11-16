class emp{

	int EmpId;
	String EmpName;
	String JoinDate;
	String Dept;



	//Default Constructor

	emp(){
	this.EmpId=12;
	this.EmpName="Ram";
	this.JoinDate="10 Nov";
	this.Dept="HR";
	}


	//parameter Constructor

	emp(int id,String nam,String join,String Dep){
	this.EmpId=id;
	this.EmpName=nam;
	this.JoinDate=join;
	this.Dept=Dep;
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
	}



}


class Hr extends emp{
	
	int totalInterviews;     
        String hrLevel;  


	//Default Constructor

	Hr(){

	super();

	this.totalInterviews=5;
	this.hrLevel="Jr.";
	}


	//parameter Constructor

	Hr(int id,String nam,String join,String Dep,int no,String lev){

	super(id,nam,join,Dep);

	this.totalInterviews=5;
	this.hrLevel=lev;
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
	}



	
	

}


class admin extends emp{

	int officeRooms;          
        String shiftTiming; 


	//Default Constructor

	admin(){

	super();

	this.officeRooms=5;
	this.shiftTiming="evening";
	}


	//parameter Constructor

	admin(int id,String nam,String join,String Dep,int no,String shfit){

	super(id,nam,join,Dep);

	this.officeRooms=no;
	this.shiftTiming=shfit;

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



	//Default Constructor

	salesmarketing(){

	super();

	this.totalClients=7;
	this.monthlyTarget=124.5;
	}


	//parameter Constructor

	salesmarketing(int id,String nam,String join,String Dep,int no,double target){

	super(id,nam,join,Dep);

	this.totalClients=no;
	this.monthlyTarget=target;

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

		Hr h1=new Hr();
		h1.Display();
		
		admin a1=new admin();
		a1.Display();


		salesmarketing s1=new salesmarketing();
		s1.Display();

		

	}

}