class Vehicle{


	void Break(){
		System.out.println("The Break aplly");
	}


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
	

	Vehicle v=new Vehicle();
	v.Break();
	
	

	Bus b=new Bus();
	b.Break();

	Car c=new Car();
	c.Break();

	Bike bi=new Bike();
	bi.Break();

}

}
