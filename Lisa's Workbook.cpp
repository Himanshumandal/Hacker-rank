int workbook(int n, int k, vector<int> arr) {
    int sp=0,page=1;
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<=arr[i];j++){
            if(j==page){
                sp++;
            }
            if(j%k==0 && j<arr[i]){
                page++;
            }
        }
        page++;
        cout<<sp<<page<<endl;
    }
    return sp;
}
