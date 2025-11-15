class BankAcc{

int accno;
String name;
double bal;
//******this can also write in the place of static block---->static double interest=8;
static double interest;





//Default contractor 
BankAcc(){

	this.accno=12;
	this.name="nikhil";
	this.bal=1245.4;
	//this.interest=12;
}



//parameterized contractor 
BankAcc(int x,String n,double b){

	this.accno=x;
	this.name=n;
	this.bal=b;
	//this.interest=i;
}



static {

	interest=12;


}



void setteraccno(int x){

	this.accno=x;

}


int getteraccno(){

	return this.accno;


}



void settername(String x){

	this.name=x;

}


String gettername(){

	return this.name;


}



void setterbal(double x){

	this.bal=x;

}


double getterbal(){

	return this.bal;


}


//******Static setterfunction to change the value 
static void setterinterest(double x){

	interest=x;

}


double getterinterest(){

	return this.interest;


}




void Display(){

	System.out.println(this.accno+"/"+this.name+"/"+this.bal+"/"+this.interest);


}



}


class TestBankAcc{


public static void main(String agrs[]){



BankAcc b1,b2;

b1=new BankAcc();


b1.Display();


b2=new BankAcc(45,"nis",126.5);

b2.Display();
b1.Display();


//*****call the static function by classname (to change the value of static variable)

BankAcc.setterinterest(13.6);

b2.Display();
b1.Display();






}



}