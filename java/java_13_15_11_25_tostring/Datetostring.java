class Date {


int day;
int month;
int year;


Date(){

	this.day=12;
	this.month=5;
	this.year=2026;
	
	System.out.println("hello");

}



public String toString(){


return "\n the date is : "+this.day+"The month is : "+this.month+"the year : "+this.year;

}





}



class TestMain{


public static void main(String[] args){


	Date d1=new Date();


	


	System.out.println(d1.toString());


}


}