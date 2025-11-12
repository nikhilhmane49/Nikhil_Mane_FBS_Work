class calu{

	
	void add(int a,int b){

	System.out.println(a+b);

	}


	void add(int a){

	System.out.println(a+a);

	}

	void add(int a,double b){

	System.out.println(a+b);

	}


	void add(double a,int b){

	System.out.println(a+b);

	}

}



class TestCalu{

	public static void main(String args[]){

	calu c1;
	c1=new calu();

	c1.add(1,2);
	c1.add(1);
	c1.add(1,2.5);
	c1.add(1.4,2);

	
	
	}

}