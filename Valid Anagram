#include<string.h>
char gethashvalue(char ch){
    return ch-'a';
}
bool isAnagram(char* s, char* t) {
    if(strlen(s) !=strlen(t)){
        return 0;
    }
    int str1[26] = {0};
    int str2[26] = {0};
    for(int i=0; s[i]!='\0';i++){
        str1[gethashvalue(s[i])]++;
        str2[gethashvalue(t[i])]++;
    }
    
    for(int i=0; s[i]!='\0';i++){
        if(str1[gethashvalue(s[i])] != str2[gethashvalue(s[i])])
        return 0;
    }
    return 1;
    
}
