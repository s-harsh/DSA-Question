class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
            return ;
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int p=arr[low];
        int i=low,j=high;
        while(i<=j){
            while(arr[i]<=p && i<=high){
                i++;
            }
            while(arr[j]>p && j>=low){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[low],arr[j]);
        return j;
    }
};
