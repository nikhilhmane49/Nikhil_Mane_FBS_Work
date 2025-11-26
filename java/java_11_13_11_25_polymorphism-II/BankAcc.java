
import java.time.LocalDate;
import java.time.Period;



class BankAcc{

double balance;

BankAcc(double bal){

	this.balance=bal;

}

void withdraw(double amount){

	System.out.println("This is the general ");


}	


}


class Saving extends BankAcc {

	double minbal;
	double amount;


	Saving(double bal){

	super(bal);
	
	}
	

	void withdraw(double amount){
		minbal=2000;
		
		if(this.balance-amount>minbal){
			balance=balance-amount;
			System.out.println("Withdraw Sucessfully : "+"the Current bal is :"+this.balance); 

		}
		else{
			System.out.println("Withdraw can not happen because of min balance is : "+this.minbal); 



		}
	


      }


}


class Current extends BankAcc {

	double DoLimit=10000;
	double amount;



	Current(double bal){

	super(bal);


	}

	void withdraw(double amount){

		if(amount<=this.balance + DoLimit){
			this.balance =this.balance-amount; 

			System.out.println("DO is successful done:"+"the New Balance is"+this.balance);
		}
		else{

			System.out.println("DO is reject because it is exceeding DOLimit");

		}


        }

}


class Salary extends BankAcc{

	LocalDate LastTranDate;
	double amount;


	Salary(double bal){

	super(bal);


	}





	void withdraw(double amount){

		LocalDate today = LocalDate.now();

		 LastTranDate = LocalDate.of(2025, 10, 10);
		
		Period diff = Period.between(today, LastTranDate);

		if(diff.getDays()<61){
			this.balance=this.balance-amount;
			
			System.out.println("Sucessfull"+"new balance is :"+this.balance);

		}
		else{

			System.out.println("the last transaction is greater than 2 months so withdraw can not happen");
		}

        }



}


class TestMain{


public static void main(String  ags[]){

	
	BankAcc acc;

	acc=new Saving(5000);
	acc.withdraw(2000);


	acc=new Current(6000);
	acc.withdraw(2000);


	acc=new Salary(8000);
	acc.withdraw(2000);



	}


}