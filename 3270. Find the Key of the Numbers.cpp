class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string s1(to_string(num1)), s2(to_string(num2)), s3(to_string(num3));
        int ln1 = s1.length(), ln2 = s2.length(), ln3 = s3.length();
        string tmp{};
        if(ln1 < 4)
            for(int i = 0; i < 4-ln1; ++i)
                tmp += "0";
        s1 = tmp+s1;
        tmp.clear();
        if(ln2 < 4)
            for(int i = 0; i < 4-ln2; ++i)
                tmp += "0";
        s2 = tmp+s2;
        tmp.clear();
        if(ln3 < 4)
            for(int i = 0; i < 4-ln3; ++i)
                tmp += "0";
        s3 = tmp+s3;
        tmp.clear();
        string ans{};
        tmp = min(s1[0], min(s2[0], s3[0]));
        ans += tmp;
        tmp = min(s1[1], min(s2[1], s3[1]));
        ans += tmp;
        tmp = min(s1[2], min(s2[2], s3[2]));
        ans += tmp;
        tmp = min(s1[3], min(s2[3], s3[3]));
        ans += tmp;
        return stoi(ans);
    }
};
