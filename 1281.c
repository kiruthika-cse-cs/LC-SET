int subtractProductAndSum(int n) {
   int rem,l=1,s=0;
   while(n!=0){
    rem=n%10;
    l=l*rem;
    s=s+rem;
    n=n/10;}
   return l-s;
}
