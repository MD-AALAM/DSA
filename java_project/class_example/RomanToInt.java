import java.util.*;

public class RomanToInt{
    public static int getvalue(char c){
        if(c=='I'){
        return 1;
    }
      if(c=='V'){
        return 5;
    }
      if(c=='X'){
        return 10;
    }
      if(c=='L'){
        return 50;
    }
      if(c=='C'){
        return 100;
    }
      if(c=='D'){
        return 500;
    }
      if(c=='M'){
        return 1000;
    }
    return 0;
    }
    public static int romanToInt(String s) {
        // Write your implementation here
        int ans=0;
        for(int i=0; i<s.length()-1; i++){
            char cc=s.charAt(i);
            char nc=s.charAt(i+1);
            
            
            if((cc=='I' && nc=='V' )||(cc=='I' && nc=='X')){
                ans -= 1;
           
            }
            else if((cc=='X' && nc=='L' )||(cc=='X' && nc=='C')){
                ans -= 10;
            }
            else if((cc=='C' && nc=='D' )||(cc=='C' && nc=='M')){
                ans -= 100;
            }else{
            ans +=getvalue(cc);
            
            }
         
        }  
        ans +=getvalue(s.charAt(s.length()-1));
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter roman number i capital:");
        String roman = sc.nextLine().toUpperCase();
        System.out.println(romanToInt(roman));
    }
}