class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
                vector <int> temp;
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].size(); j++){
                if (words[i][j] == x){
                    temp.push_back(i);
                    break;
                }
            }
        }
        return temp;
        
    }
};
