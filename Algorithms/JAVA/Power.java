import java.util.Scanner;

public class Power {
    static Scanner input = new Scanner(System.in);
    
    public static void main(String [] args){
        power();
    }
    
    public static void power(){
        System.out.println("Enter the base.");
        //  The base variable holds the base number supplied by the user.
        int base = input.nextInt();
        
        System.out.println("Enter the exponent.");
        //  The exponent variable holds the base number supplied by the user.
        int exponent = input.nextInt();
        
        // The pow method of the Math class returns the value of the first argument raised to the power of the second argument.
        System.out.println(base + " raised to the power of " + exponent + " is " + Math.pow(base, exponent));
    }
} 
