
class Student {
  
     String name;
     int rollno;
  
     Student(String n,int r){
      name = n;
      rollno = r;
    }
    
    void detail(){
        System.out.println("Name : "+this.name+"\nRoll no. : "+this.rollno);
    }
    
}

public class Studentclass {
    public static void main(String[] args) {
        
        Student s1 = new Student("Ram",4);
        Student s2 = new Student("Shyam",34);
        
        System.out.println("The detail of student 1 is");
        s1.detail();
        
        System.out.println("\nThe detail od student 2 is");
        s2.detail();
        
        
        
        
    }
}
