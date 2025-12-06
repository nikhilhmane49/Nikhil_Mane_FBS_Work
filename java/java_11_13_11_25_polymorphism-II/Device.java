abstract class Device{

	String brand;
	int modelno;
	int price;

	Device(String brand,int modelno,int price){


		this.brand=brand;
		this.modelno=modelno;
		this.price=price;

	}




	void DevInfor(){


		System.out.println("Brand of Device : "+this.brand+"Model_no. "+this.modelno+"Prices "+this.price);


	}

	abstract void operate();


}


class MobilePhone extends Device{

	MobilePhone(String brand,int modelno,int price){

		super( brand, modelno, price);

	}


	void operate(){


	System.out.println("Make the call ,open the apps ");

	}
	

}



class WashingMachine extends Device{



	WashingMachine(String brand,int modelno,int price){

		super( brand, modelno, price);

	}


	void operate(){


	System.out.println("start washing cycle ");

	}


}


class Television extends Device{



	Television(String brand,int modelno,int price){

		super( brand, modelno, price);

	}


	void operate(){


	System.out.println("show channels");

	}



}






class TestMain{


	
	public static void main(String[] args){


	Device d1=new MobilePhone("samsang",1458,47895);


	Device d2=new WashingMachine("LG",1758,478785);


	Device d3=new Television("sony",14788,787895);

	

	Device[] dev={d1,d2,d3};

	for(Device de:dev){


	de.DevInfor();


	de.operate();


	System.out.println("---------------------------");


	}
	

	}



}

