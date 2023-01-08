int minimumAbsoluteDifference(vector<int> arr) {
vector<long>a;
sort(arr.begin(),arr.end());
int diff=abs(arr[0]-arr[1]);

for(int i=arr.size()-1;i>=0;i--){
    if(abs(arr[i]-arr[i-1])<diff)
        diff=abs(arr[i]-arr[i-1]);
}
return diff;
}
