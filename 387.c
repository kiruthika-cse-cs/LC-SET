int firstUniqChar(char* s) {
    int len=strlen(s);
    if(len==1)
    return 0;
    for(int i=0;i<len-1;i++){
        int dup=0;a
        for(int j=i+1;j<len;j++){
            if(s[i]!='!'){
                if(s[i]==s[j]){
                    dup++;
                    s[j]='!';
                }
            }
            else{
                dup++;
                break;
            }
        }
        if(dup==0)
        return i;
    }
    if(s[len-1]!='!')
    return len-1;
    return -1;
}        
