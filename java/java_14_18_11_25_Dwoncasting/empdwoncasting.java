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





	void setcommission(double x){

		this.commission=x;


		System.out.println("commission added : " + x);
   

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



	void setallo(double x){

		this.allo=x;

		System.out.println("Allowance added : " + x);
    

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



	void setinsetive(double x){

		this.insetive=x;
		
		 System.out.println("Incentive added : " + x);

	}


	

}





class BonusCalculator{


	void giveBonus(emp e1){


		if(e1 instanceof salesmarketing){

			salesmarketing s1=(salesmarketing) e1;
			
			s1.setinsetive(50000);

		}
		
		if(e1 instanceof admin){

			admin a1=(admin) e1;
			
			a1.setallo(4000);

		}

		if(e1 instanceof Hr){

			Hr h1=(Hr) e1;
			
			h1.setcommission(6000);

		}

	}



}


class TestMain{

	public static void main(String args[]){

		
				
		emp e1=new Hr();
		emp e2=new admin();
		emp e3=new salesmarketing();



		BonusCalculator b = new BonusCalculator();





	System.out.println("For Hr:");
        b.giveBonus(e1);   // incentive

        System.out.println("\nFor Admin:");
        b.giveBonus(e2);   // allowance

        System.out.println("\nsalesmarketing:");
        b.giveBonus(e3);   // salesmarketing
				

	}

}