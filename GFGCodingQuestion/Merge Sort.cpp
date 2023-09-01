class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int left=l,right=m+1;
        int ans[r - l + 1];
        int idx=0;
        while(left<=m && right<=r){
            if(arr[left]<arr[right]){
                ans[idx++]=arr[left++];
            }
            else{
                ans[idx++]=arr[right++];
            }
        }
        while(left<=m){
            ans[idx++]=arr[left++];
        }
        while(right<=r){
            ans[idx++]=arr[right++];
        }
        for(int i=l;i<=r;i++){
            arr[i]=ans[i-l];
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l==r){
            return ;
        }
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        return;
    }
};
