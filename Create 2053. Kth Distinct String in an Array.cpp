class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int count = 0;

        for (int i = 0; i < arr.size(); i++) {
            bool isDistinct = true;

            for (int j = 0; j < arr.size(); j++) {
                if (i != j && arr[i] == arr[j]) {
                    isDistinct = false;
                    break;
                }
            }

            if (isDistinct) {
                count++;
                if (count == k)
                    return arr[i];
            }
        }

        return "";
    }
};
