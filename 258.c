int addDigits(int num) {
    int sum=0,rem;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num/=10;
    }
    num=sum;
    while(sum>9)
    {
        sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+rem;
            num/=10;
        }
        num=sum;
    }
    return sum;
}
