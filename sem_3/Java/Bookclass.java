
class Book {
  
     String title;
     String author;
  
     Book(String t,String a){
      title = t;
      author = a;
    }
    
    void detail(){
        System.out.println("Name : "+this.title+"\nAuthor : "+this.author);
    }
    
}

public class Bookclass {
    public static void main(String[] args) {
        
        Book b1 = new Book("The wings of fire","APJ abdul kalam");
        
        System.out.println("The detail of  Book is");
        b1.detail();
        
    }
}
