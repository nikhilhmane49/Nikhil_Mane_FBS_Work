package p1;

import java.util.Scanner;

public class Bubble_Sort {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of the array");
        int size = sc.nextInt();

        System.out.println("Enter the elements of the array");
        int[] arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        bubbleSort(arr, size);

        System.out.println("Sorted array:");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    static void bubbleSort(int[] arr, int size) {
    	
    	

        for (int i = size - 1; i > 0; i--) {
        	
        	
            for (int j = 0; j < i; j++) {

                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                  
                }
            }
        }
    }
}
