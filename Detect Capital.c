bool detectCapitalUse(char* word) {
    int len = strlen(word);
    int countCap = 0;
    for(int i=0; i<len; i++)
        if(word[i] >= 65 && word[i] <= 90)
            countCap++;
    return ((countCap == 0) || (countCap == len) || (countCap == 1 && word[0] >= 65 && word[0] <= 90));
}
