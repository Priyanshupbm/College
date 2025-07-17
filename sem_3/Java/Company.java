class Company {
    public static void main(String[] args) {
        Employee e1 = new Employee("E352662","Ram");
        Employee e2 = new Employee("E261891","Shyam");
        
        System.out.println("The detail of employees is ");
        
        e1.display();
        e2.display();
        
        Employee.change_name("ABC");
        
        System.out.println("\nThe detail of employees after changing the company name to ABC is ");
        
        e1.display();
        e2.display();
        

        
    }
}



class Employee {
    static String company_name = "XYZ";
    String id,name ;
    
    Employee(String i,String n){
        name = n;
        id = i;
    }
    
    public void display(){
        System.out.println("Company name is "+company_name+"\nid : "+this.id+"\nName : "+this.name);
    }
    
    public static void change_name(String n){
        company_name = n;
    }
}
