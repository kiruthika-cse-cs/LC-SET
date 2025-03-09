bool checkIfPangram(char* sentence) {
    int a[26],j;
    for(int i=0;i<strlen(sentence);i++)
    {
        j=(int)sentence[i]-97;
        a[j]++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
        return false;
    }
return true;
}
