public class abstraction_demo {
   public static void main(String[] args) {
    ATM p= new SBI(); //parent class reference and child class object
    p.withdraw();
    p.showname();

    ATM q= new HDFC();
    q.withdraw();
    p.showname();
   } 
}
abstract class ATM{
    abstract void withdraw();  //abstract method

    void showname(){  //concrete method
        System.out.println("This is ATM");
    }
}
class SBI extends ATM{
    @Override
    void withdraw(){
        System.out.println("withdraw from SBI");
    }
}
class HDFC extends ATM{
    @Override
    void withdraw(){
        System.out.println("withdraw from HDFC");
    }
}