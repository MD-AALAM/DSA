import java.util.Scanner;

public class Game {
    public static void main(String[] args) {
    // 0 for Rock
    // 1 for paper
    //2 for scissor
        Scanner sc= new Scanner(System.in);
        System.out.println("enter 0 for Rock, 1 for paper,  2 for scissor");
        int userinpput = sc.nextInt();
        int compinput = (int)(Math.random()*3);
        if(userinpput ==compinput){
            System.out.println("draw");
        }
        else if((userinpput==0 && compinput==2) || (userinpput==1 && compinput==0) || (userinpput==2 && compinput==1)){
            System.out.println("user wins");
        }
        else{
            System.err.println("computer wins");
        }
        if(compinput==0){
            System.err.println("compinput:Rock");
        }
        else if(compinput==1){
            System.out.println("compinput:Paper");
        }
        else{
            System.out.println("compinput:scissor");
        }
    }
}