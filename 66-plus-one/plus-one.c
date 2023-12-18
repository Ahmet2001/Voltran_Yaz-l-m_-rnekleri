int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int x = 0;
    int artırılacak_sayı_index = digitsSize - 1;

    for (int i = 0; i < digitsSize; i++) {
        if (digits[i] == 9) {
            x++;
        } else {
            break;
        }
    }

    if (x == digitsSize) {
        int *liste = (int*)malloc((digitsSize + 1) * sizeof(int));
        liste[0] = 1;

        for (int k = 1; k < digitsSize + 1; k++) {
            liste[k] = 0;
        }

        *returnSize = digitsSize + 1;
        return liste;
    } else {
        for (int y = 0; y < digitsSize; y++) {
            if (digits[artırılacak_sayı_index] == 9) {
                digits[artırılacak_sayı_index] = 0;
                artırılacak_sayı_index--;
            } else {
                digits[artırılacak_sayı_index]++;
                break;
            }
        }

        *returnSize = digitsSize;
        return digits;
    }
}
