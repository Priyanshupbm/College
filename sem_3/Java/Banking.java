
class Bank {
  
  private int accountnum;
  private int balance ;
  
    Bank(int num,int a){
      this.accountnum = num;
      this.balance = a;
    }
    
    void setter(int a){
        balance+=a;
    }
    
    void getter(){
        System.out.println("The account number : "+this.accountnum+"\nBalance : "+this.balance);
    }
    
}

public class Banking {
    public static void main(String[] args) {
        System.out.println(" Welcome to the banking\n");
        
        Bank u1 = new Bank(6373728,1000);
        
        System.out.println("The detail of user 1 is");
        u1.getter();
        
        u1.setter(10000);
        System.out.println("Detail after adding 10000 to balance is");
        u1.getter();
        
        
        
        
    }
}
