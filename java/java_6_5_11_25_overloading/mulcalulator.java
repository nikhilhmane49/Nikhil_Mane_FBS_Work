class mulcalu{

	
	void sub(int a,int b){

	System.out.println(a*b);

	}


	void sub(int a){

	System.out.println(a*a);

	}

	void sub(int a,double b){

	System.out.println(a*b);

	}


	void sub(double a,int b){

	System.out.println(a*b);

	}

}



class TestMulCalu{

	public static void main(String args[]){

	mulcalu c1;
	c1=new mulcalu();

	c1.sub(1,2);
	c1.sub(1);
	c1.sub(1,2.5);
	c1.sub(1.4,2);

	
	
	}

}