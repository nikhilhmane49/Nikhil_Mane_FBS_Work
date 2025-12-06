abstract class MusicalInstrument{


	String name;
	String type;

	
	MusicalInstrument(String name,String type){

	this.name=name;
	this.type=type;

	}

	void showInfo(){

	System.out.println("Instrument: " + name + " | Type: " + type);

	}


	abstract void play();


}



class Guitar extends MusicalInstrument{


	int numberOfStrings;
	
	Guitar(String name, String type, int numberOfStrings) {
        super(name, type);
        this.numberOfStrings = numberOfStrings;
    }



	void play(){

	 System.out.println("Strumming the guitar strings...");

	 }

}




class piano extends MusicalInstrument{


	int numberOfKeys;


	piano(String name, String type, int numberOfKeys){
	
	super(name,type);
	this.numberOfKeys=numberOfKeys;
	
	}


	void play(){
	
	System.out.println("Pressing the piano keys...");
	
	}

}



class flute extends MusicalInstrument{


     flute(String name, String type) {
        super(name, type);
    }

    
    void play() {
        System.out.println("Blowing air into the flute...");
    }

}



class Drum extends MusicalInstrument {

    Drum(String name, String type) {
        super(name, type);
    }

    
    void play() {
        System.out.println("Beating the drum surface...");
    }
}



class TestMain{


public static void main(String [] args){

	MusicalInstrument i1 = new Guitar("Acoustic Guitar", "String", 6);
	MusicalInstrument i2 = new piano("Grand Piano", "String", 88);
	MusicalInstrument i3 = new flute("Bansuri", "Wind");
	MusicalInstrument i4 = new Drum("Dholak", "Percussion");



	MusicalInstrument[] instruments={i1,i2,i3,i4};


	for(MusicalInstrument instr:instruments){

		instr.showInfo();

		instr.play();

		System.out.println("--------------------------------");


		}



	}




}


