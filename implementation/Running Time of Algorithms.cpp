int runningTime(vector<int> arr) {
    int c=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                c++;
            }
        }
    }
    return c;
}
