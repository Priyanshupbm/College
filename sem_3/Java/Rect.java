class Rect {
    public static void main(String[] args) {
        
        Rectangle r1 = new Rectangle();
        
        Rectangle r2 = new Rectangle(50,34);
    }
}

class Rectangle {
    
    Rectangle(){
        System.out.println("The area of default rectangle is 50 sq. unit");
    }
    
    Rectangle(int base,int height){
        System.out.println("The area of rectangle of base "+base+" and "+height+" is "+base*height+" sq. unit");
    }
}


