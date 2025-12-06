abstract class Vehicle{


abstract void Break();


}


class Bus extends Vehicle{

	void Break(){
		System.out.println("The Bus Break aplly");
	}


}

class Car extends Vehicle{


	void Break(){
		System.out.println("The Car Break aplly");
	}


}


class Bike extends Vehicle{

	void Break(){
		System.out.println("The Bike Break aplly");
	}


}



class TestMain{

	public static void main(String args[]){
		
	

	Bus b=new Bus();
	b.Break();

	Car c=new Car();
	c.Break();

	Bike bi=new Bike();
	bi.Break();

}

}
