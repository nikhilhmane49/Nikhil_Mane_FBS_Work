class date{

	int day,month,year;



	date(){
	System.out.println(" default Constructor is call");
	this.day=1;
	this.month=12;
	this.year=2004;
	}

	date(int d,int m, int y){
	System.out.println("para Constructor is call");
	this.day=d;
	this.month=m;
	this.year=y;
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

	date[] arr=new date[3];
	arr[0]=new date();
	arr[1]=new date(2,11,2005);
	arr[2]=new date();
	
	for(int i=0;i<3;i++){
		System.out.println(arr[i]);
	}
	
	for(int i=0;i<4;i++){
		arr[i].display();
	}



}
}
//testdate class end here
