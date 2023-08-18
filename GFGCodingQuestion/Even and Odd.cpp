class Solution {
  public:
    void reArrange(int arr[], int n) {
        int ans[n];
        int odd=1,even=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                ans[even]=arr[i];
                even+=2;
            }
            else{
                ans[odd]=arr[i];
                odd=+2;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }
    }
};
