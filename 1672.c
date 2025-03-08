int maximumWealth(int** accounts, int size, int* col) {
   int sum,max=0;
   for(int i=0;i<size;i++){
    sum=0;
    for(int j=0;j<col[i];j++){
        sum+=accounts[i][j];
    }if(sum>max){
        max=sum;
    }
   } return max;
}
