



class Bank {
    private int balance = 0;
    
    void setter(int a){
        balance+=a;
    }
    
    int getter(){
        return balance;
    }
    
}

public class Banking {
    public static void main(String[] args) {
        System.out.println(" Welcome to the banking\n");
        
        Bank u1 = new Bank();
        
        u1.setter(10000);
        
        System.out.println("The balance of user 1 is "+u1.getter());
        
        
        
    }
}
