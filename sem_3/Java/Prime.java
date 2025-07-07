// Online Java Compiler
// Use this editor to write, compile and run your Java code online

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        System.out.println("Name : Mishra Priyanshu");
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number : ");
        int num = sc.nextInt();
        
        boolean prime = true;
        
        for(int i=2; i<num; i++){
            
            if(num%i==0){
            System.out.println("The number is not prime number");
            prime = false;
            break;}
        }
        
        if(prime){
            System.out.println("The number is prime number");
        }
        
        
    }
              }
