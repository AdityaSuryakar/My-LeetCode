int addDigits(int num) {
    int i,result,sum=0;
    if(num<9)
    {
        result=num;
    }
    else
    {
        while(num>0)
        {
            sum=sum+(num%10);
            num=num/10;
            if(num==0)
            {
                if(sum>9)
                {
                    num=sum;
                    sum=0;
                }
            }
        }
        result=sum;
    }
    return result;
}
