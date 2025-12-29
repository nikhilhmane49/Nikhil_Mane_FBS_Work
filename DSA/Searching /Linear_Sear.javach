package p1;
import java.util.Scanner;

public class Linear_Search {

	
	public static void main(String[] args) {
		
		Scanner sc= new Scanner(System.in);  
		
		System.out.println("Enter the size of the array");
		
		int size=sc.nextInt();
		
		System.out.println("Enter the element in the array");
		
		
		int arr[]=new int[size];
		
		for(int i=0;i<size;i++) {
			arr[i]=sc.nextInt();
		}
		
		
		System.out.println("Enter the target element");
		int target=sc.nextInt();
		
		 int vara=LinearSerach( arr, size, target);
		 
		 if(vara!=-1) {
			 System.out.println("Element is found at "+vara+" postion");
		 }
		 else {
			 
			 System.out.println("Element not found!!!!");
		 }
		
		
	}
	
	
	static int  LinearSerach(int arr[],int size,int target){
		
		int found=-1;
		
		for(int i=0;i<size;i++) {
			
			if(target==arr[i]) {
				
				found=i;
				
				return found;
			}
		}
		
		return found;
		
	}
	
	
}
