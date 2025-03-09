int countDigits(int num) {
int temp=num,n=num,rem;
int c=0,f=0;
while(num!=0)
{
    c++;
    num=num/10;
}
if(c==1)
return 1;
while(n!=0)
{
    rem=n%10;
    if(temp%rem==0)
    {
        f++;
    }
    n=n/10;
}
return f;
}
