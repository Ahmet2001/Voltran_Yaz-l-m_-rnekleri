class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> liste2;

        for (int i = 0; i < numRows; i++) {
            vector<int> liste1;
            liste1.push_back(1);
            for (int k = 1; k < i; k++) {
                liste1.push_back(liste2[i - 1][k] + liste2[i - 1][k-1]);
            }
            if (i > 0) {
            liste1.push_back(1);
            }
        liste2.push_back(liste1);
        liste1.clear();
        }
    return liste2;
    }
};