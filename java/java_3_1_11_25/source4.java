class date{

	int day,month,year;



	date(){
	System.out.println("Constructor is call");
	this.day=1;
	this.month=12;
	this.year=2004;
	}

	void setday(int x){

	  this.day=x;
         }


	void setmonth(int x){

	  this.month=x;
         }
	
	void setyear(int x){

	  this.year=x;
         }

	int getterday(){
	
	return this.day;
	}

	int gettermonth(){
	
	return this.month;
	}
	

	int getteryear(){
	
	return this.year;
	}

	void display(){
	System.out.println("this is a day:"+this.day);
	System.out.println("this is a month:"+this.month);
	System.out.println("this is a year:"+this.year);
	}

}
//date class end here


class testdate{

public static void main(String[] args){

	date d1;
	
	d1=new date();
	d1.display();

	d1.setday(31);
	d1.setmonth(12);
	d1.setyear(2004);

	

System.out.println(d1.day+"/"+d1.month+"/"+d1.year);

System.out.println(d1.getterday());
System.out.println(d1.gettermonth());
System.out.println(d1.getteryear());

d1.display();

}
}
//testdate class end here
