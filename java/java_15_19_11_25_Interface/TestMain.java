//----- Interface

interface Racer{

	void toRace(); //-----abstract method

}

//------ Class implementing interface

class SportsCar implements Racer{

	//--------- Must override interface method

	public void toRace(){

		 System.out.println("SportsCar is racing...");
	}

}



//-------- Test class with main()



class Test {
    public static void main(String[] args) {

        Racer r1;            		 //---- reference of interface
        r1 = new SportsCar(); 		//-----object of SportsCar

        r1.toRace();         		//------ calling overridden method
    }
}