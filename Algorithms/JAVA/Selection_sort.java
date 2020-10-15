import java.util.*;

public class Selection_sort {
    
  public static void selectionSort(int[] arr) {
    //write your ode here
    for(int i =0;i<arr.length-1;i++){
        int mi =i;
        for(int j =i+1;j<arr.length;j++){
            if(isSmaller(arr,j,mi)){mi=j;}
        }
        swap(arr,i,mi);
    }
    
  }

  // used for swapping ith and jth elements of array
  public static void swap(int[] arr, int i, int j) {
   
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  // return true if ith element is smaller than jth element
  public static boolean isSmaller(int[] arr, int i, int j) {

    if (arr[i] < arr[j]) {
      return true;
    } else {
      return false;
    }
  }

  public static void print(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
      System.out.println(arr[i]);
    }
  }

  public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = scn.nextInt();
    }
    scn.close();
    selectionSort(arr);
    print(arr);
  }

}