/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int sort(const void*m,const void*n){
    int a=*(int*)m;
    int b=*(int*)n;
    return a-b;
 }
int* numberGame(int* nums, int size, int* returnSize) {
   int *arr=(int*)malloc(sizeof(int)*size);
   qsort(nums,size,sizeof(int),sort);
   int alice,bob;
   for(int i=0;i<size;i+=2)
   {
    alice=nums[i];
    bob=nums[i+1];
    arr[i]=bob;
    arr[i+1]=alice;
   } 
   *returnSize=size;
   return arr;
}
