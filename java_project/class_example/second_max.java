public class second_max {
    public static void finddMax(int[] nums){
        int maxelement=nums[0];
        int maxindex=0;
        for(int i=1; i<nums.length; i++){
            if(maxelement<nums[i]){
                maxelement = nums[i];
                maxindex=i;
            }
        }
        int secondMax=0;
       for(int i=0; i<nums.length; i++){
        if(i!=maxindex && secondMax<nums[i]){
            secondMax=nums[i];
        }
       }
         System.out.println(maxelement);
       System.out.println(maxindex);
       System.out.println(secondMax);
    }
    public static void main(String[] args){
        int[] nums=new int[]{10,20,25,30,40,60};
        finddMax(nums);
      
    }    
}
