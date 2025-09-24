//import java.util.Arrays;


//note.->number of column are not same then that type of array is known as jagged array


public class Arraydemo{
    //find the max element of the array 
//     static int findmax(int[] nums){
//         int maxelement=nums[0];
//         for(int i=1; i<nums.length; i++){
//             if(maxelement<nums[i]){
//                 maxelement=nums[i];
//             }
//         }
//         return maxelement;
// }


//second max pehle find karna aur fir index find karna 
//fir for loop laga ke i!max[i]&&max ka condition with name second max ka condition yaha pe rakhna hai fir waise hiprint karana hai 
  

    static void reversearray(int nums[], int size){
        int start=0;
        int end=size-1;
            while(start<end){
                int temp=nums[start];
                nums[start]=nums[end];
                nums[end]=temp;
                start++;
                end--;
                
            }
        }

    public static void main(String[] arg){
        int[] nums = new int[]{5,6,12,8,13,10};
        int size=nums.length;
        

//we can print all the array value using import Arrays function alredy built in java
       // System.out.println(Arrays.toString(nums));
       
       //or
        //we can print array using loop
        // for(int i=0; i<nums.length; i++){
        //     System.err.println(nums[i]);
        // }

        //or
        //we can print array using loop
        // for(int num:nums){
        //     System.out.println(num+ " ");
        // }
        
        //call the findmax element
        // System.out.println(findmax(nums));

        reversearray(nums,size);
         for(int i=0; i<nums.length; i++){
       System.err.println(nums[i]);
        
        }
       
    }
}
