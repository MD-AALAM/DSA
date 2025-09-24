 // project to ask a random number to user 
 import java.util.Scanner;
  public class my_project{
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int usernumber;
    int mynumber = (int)(Math.random()*100);
    System.out.println("you get 10 chance only");
    for(int i=0; i<10; i++){
    System.out.println("guess my number(1-100):");
    usernumber=sc.nextInt(); 
    if(usernumber>mynumber){
     System.out.println("this number is too large:");
    }
    else if(usernumber==mynumber){
    System.out.println("wooho: you choose correct answer you win");
    break;
    }
    else if(usernumber<mynumber){
    System.out.println("this number is too small");
    }else
    {
       System.out.println("you lose:");
    }
    }
}
  }