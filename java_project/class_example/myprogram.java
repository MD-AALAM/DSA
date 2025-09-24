

public class myprogram{
    public static void main(String[] args) {
      student s1 = new student("majid",20);
        s1.printname();
    }
}
class student{
    String name;
    int age;

    student(String name, int age) {
        this.name=name;
        this.age=age;
        
    }
   public void printname(){
    System.out.println(name);
        System.out.println(age);
   }

    
}