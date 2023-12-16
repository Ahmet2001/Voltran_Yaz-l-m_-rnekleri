int singleNumber(int* nums, int numsSize) {
           int x = 0;
        
        for (int i = 0;i < numsSize;i++){
            x = 0;
            for (int k = 0;k < numsSize;k++){
                if (nums[i] == nums[k]) {
                    x++;
                }
                
                }
           if (x == 1) {
                return nums[i];
               }
            
            }
       
       return 7; 
}