class subcalu{

	
	void sub(int a,int b){

	System.out.println(a-b);

	}


	void sub(int a){

	System.out.println(a-a);

	}

	void sub(int a,float b){

	System.out.println(a-b);

	}


	void sub(float a,int b){

	System.out.println(a-b);

	}

}



class TestSubCalu{

	public static void main(String args[]){

	subcalu c1;
	c1=new subcalu();
	
	float var=2.6f;

	c1.sub(1,2);
	c1.sub(1);
	c1.sub(1,var);
	c1.sub(var,2);

	
	
	}

}