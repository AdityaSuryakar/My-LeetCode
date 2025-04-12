char* removeTrailingZeros(char* num) 
{
    int size=strlen(num);
    int i;
    for(i=size-1;i>=0;i--) 
    {
        if(num[i]!='0') 
        {
            break; 
        }
    }
    num[i + 1] = '\0';
    return num;
}
