/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int n, int* returnSize){
   int temp;
    int* arr = (int*)malloc(n * sizeof(int));
   for(int i=0;i<n;i++)
   {
     arr[i]=nums[i]*nums[i];
   } 
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;}
    } 
   }
*returnSize=n;
return arr;
free(arr);   
}
