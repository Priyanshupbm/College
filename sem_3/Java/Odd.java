
import java.util.Scanner;

public class Odd{
    
    public static void main (String [] args){
        
        
        int sum=0,num1,num2;
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the starting number : ");
        num1 = sc.nextInt();
        
        
        System.out.print("Enter the ending number : ");
        num2 = sc.nextInt();
        
        for(int i = num1+1; i< num2 ; i++){
            if( i%2==1){
                sum+=i;
            }
        }
        
         System.out.println("The sum of number between "+num1+" to "+num2+" is "+sum);
         
         
         sum = 0;
        
        if (num1%2==1){
            
            num1+= 1;
            
            sum = ((num2-num1)/2*(2*(num1+1)+(((num2-num1)/2)-1)*2)/2);
            
            num1 -= 1;
            
        }
        
        else {
     
            
            sum = ((num2-num1)/2*(2*(num1+1)+(((num2-num1)/2)-1)*2)/2);
            
        }
            
        
        System.out.println("The sum of number between "+num1+" to "+num2+" is "+sum);
        
    }
}
        