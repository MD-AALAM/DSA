// mini project

 import java.util.Scanner;

 public class program {
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     //ask user to guess my randomly generated number
     int mynumber = ((int)(Math.random()*100));
      int usernuber = 0;
      do { 
         System.out.println("guess my number(1-100):");
         usernuber=sc.nextInt();

         if(usernuber>mynumber){
            System.out.println("this number is too large");
         }
         else if(usernuber==mynumber){
            System.out.println("woohoo its correct number");
         }
         else{
           System.out.println("this number is too small");
         }
         
       } while (usernuber>=0);
       System.out.println("my number was:");
       System.out.println(mynumber);
      }
}
