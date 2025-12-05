class test{

	int date,month,year;
	String dow;
}

class maintest{

public static void main(String[] args){
	test d1;
	d1=new test();
	System.out.println(d1.date);
	System.out.println(d1.month);
	System.out.println(d1.year);
	System.out.println(d1.dow);
	
	d1.date=1;
	d1.month=12;
	d1.year=2025;
	d1.dow="friday";
	System.out.println(d1.date);
	System.out.println(d1.month);
	System.out.println(d1.year);
	System.out.println(d1.dow);
	
}
}