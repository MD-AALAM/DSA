  import java.util.Scanner;

 public class sumofNnumber {

    public static int sumofdig(int n) {
    int digsum=0;
    while(n>0){
        int lastdigit=n%10;
        n /=10;
        digsum += lastdigit;

    }
    return digsum;
}
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number n:");
        int n =sc.nextInt();

        // sumofdig(145);

    System.out.println(sumofdig(n));

        
    }
}
