class Hr{

int id;
String name;
float Salary,Commison; 

void StterId(int id){

this.id=id;

}

int GetterId(){

return this.id;

}


void StterName(String name){

this.name=name;

}

String GetterName(){

return this.name;

}

void StterSalary(float sal){

this.Salary=sal;

}

float GetterSalary(){

return this.Salary;

}



void StterCom(float com){

this.Commison=com;

}

float GetterCom(){

return this.Commison;

}


void Display(){

	System.out.println(this.id+"/"+this.name+"/"+this.Salary+"/"+this.Commison);

}


}

class TestHr{

	public static void main(String args[]){
		
	Hr d1;
	d1=new Hr();

	d1.StterId(1);
	d1.GetterId();
	d1.StterName("nikhiul");
	d1.GetterName();
	d1.StterSalary(12.6f);
	d1.GetterSalary();
	d1.StterCom(125.6f);
	d1.GetterCom();


	d1.Display();
	
	
	
	
	}

}