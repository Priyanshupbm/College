// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;


class Input {
    public static void main(String[] args) {
        
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name : ");
        String name = sc.nextLine();
        
        
        System.out.print("Enter your age : ");
        int age = sc.nextInt();
        
        
        System.out.print("Enter your marks : ");
        double marks = sc.nextDouble();
        
        System.out.print("\nThe detail of student is \nName : "+name+"\nAge : "+age+"\nMarks : "+marks);
    }
}
