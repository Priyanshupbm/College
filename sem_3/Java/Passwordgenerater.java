import java.util.*;


public class Passwordgenerater {


    static String generate(int a,int in,int sy,boolean sh){

        Random random = new Random();
        int c;
        char s;
        String p = "";
        
        for(int i=1;i<=a;i++){
            c = random.nextInt(2);
            if(c==1){
                c = random.nextInt(27)+65;
                s = (char) c;
                p+=Character.toString(s);
            }

            else if(c==0){
                c = random.nextInt(27)+97;
                s = (char) c;
                p+=Character.toString(s);
            }
        }


        for(int i=1;i<=in;i++){
            c = random.nextInt(10);
            p+=Integer.toString(c);
        }

        for(int i=1;i<=in;i++){
            c = random.nextInt(4);
            if(c==0){
                c = random.nextInt(15)+33;
                s = (char) c;
                p+=Character.toString(s);
            }

            else if(c==1){
                c = random.nextInt(7)+58;
                s = (char) c;
                p+=Character.toString(s);
            }

            else if(c==2){
                c = random.nextInt(4)+123;
                s = (char) c;
                p+=Character.toString(s);
            }

            else if(c==3){
                c = random.nextInt(6)+91;
                s = (char) c;
                p+=Character.toString(s);
            }
        }

        if(sh){
            String np = "";

            while(p.length()!=0){
                c = random.nextInt(p.length());
                np+= p.substring(c,c+1);
                p = p.substring(0, c) + p.substring(c+ 1);
            }
            return np;
        }


        return p;

    }



    public static void main(String[] args) {
        

        Scanner scanner = new Scanner(System.in);
        int c,a,i,sy;
        boolean shuffle;
        String pass;

        System.out.println("   $!! WELCOME to password generater !!$");

        while(true)
        {
            System.out.print("\n\nSelect the tasks\n1.Generate password\n2.Load save password\n3.Exit\n        : ");
            c = scanner.nextInt();

            switch(c){

                case 1:
                    System.out.print("Enter the number of alphabates for the password : ");
                    a = scanner.nextInt();

                    System.out.print("Enter the number of integes for the password : ");
                    i = scanner.nextInt();

                    System.out.print("Enter the number of symbol for the password : ");
                    sy = scanner.nextInt();

                    while(true){
                        System.out.print("Did you want shuffle password or not (true/false) : ");
                        shuffle = scanner.nextBoolean();

                        if(shuffle == true || shuffle == false){
                            break;
                        }
                        else{
                            System.out.println("Enter only true or false .");
                        }
                    }
                    



                    pass = generate(a,i,sy,shuffle);
                    System.out.println("\nThe generate password is "+pass);
                    break;
                
                case 2:
                    break;

                case 3:
                    scanner.close();
                    return;

                default:
                    System.out.println("\nEnter only number from 1 to 3 ,Try again !!");


            }

        }

    }
}
