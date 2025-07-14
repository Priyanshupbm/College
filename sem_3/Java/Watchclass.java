

class Watch{
    
    String type;
    String brand ;
    int cost;
    
    public void display(){
        
        System.out.println("Type : "+ this.type+"\nBrand : "+this.brand+"\nCost : "+this.cost);
    }
}




public class Watchclass {
	public static void main(String[] args) {
		
		Watch w1 = new Watch();
		w1.type = "analog";
		w1.brand = "casio";
		w1.cost = 700000;
		
		System.out.println("The detail of watch 1 is ");
		w1.display();
		
	}
}