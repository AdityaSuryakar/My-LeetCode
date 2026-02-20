class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size() < 26){
            return false;
        } 
        vector<bool> found(26, false);
        for (int i = 0; i < sentence.size(); i++) {
            char c = sentence[i];
            if (c >= 'a' && c <= 'z') {
                found[c - 'a'] = true;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (!found[i]){
                return false;
            } 
        }

        return true;
    }
};
