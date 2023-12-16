int missingNumber(int* nums, int numsSize) {
    int ilk_terim = 1;
        int son_terim = numsSize;
        
        int toplam = 0;
        for (int i = 0;i<numsSize;i++) {
            toplam = toplam + nums[i];
        }


        int sonuç = ((ilk_terim + son_terim)*son_terim)/2 - toplam;
        return sonuç;
}