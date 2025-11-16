int maxPower(char* s) 
{
    int count = 1, max = 1;
    int size = strlen(s);
    for (int i = 0; i < size - 1; i++) 
    {
        if (s[i] == s[i + 1]) 
        {
            count++;  
            if (count > max) 
            {
                max = count; 
            }
        } 
        else 
        {
            count = 1;  
        }
    }

    return max;
}
