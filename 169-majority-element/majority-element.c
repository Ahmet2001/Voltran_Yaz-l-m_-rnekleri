int majorityElement(int* nums, int numsSize) {
    int x = 0;
    int eb = nums[0];
    for (int y = 1;y < numsSize;y++){
        if (nums[y] > eb){
            eb = nums[y];
        }

        



    }
        
        for (int i = 0;i < eb + 1;i++){
            x = 0;
            for (int k = 0;k < numsSize;k++){
                if (nums[numsSize - 1] < 0){
                    return nums[numsSize - 1];
                }

                
                if (i == nums[k]) {
                    x++;
                }
                
                }
           if (x > numsSize/2) {
                return i;
               
               }
           
            }
            return 0;
}
