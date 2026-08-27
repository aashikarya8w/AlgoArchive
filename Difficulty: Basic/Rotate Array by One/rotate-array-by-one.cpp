class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        reverse(arr.begin(),arr.end());
        reverse(arr.begin()+1,arr.end());
        // int temp=arr[n-1];
        // for(int i=n-1;i>=0;i--){
        //     arr[i]=arr[i-1];
        // }
        // arr[0]=temp;
    }
};