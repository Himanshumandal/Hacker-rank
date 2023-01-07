vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<int>p;
    int i;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            int temp=arr[i]+arr[j];
        if(temp==m){
           p.push_back(i+1);
           p.push_back(j+1);
           return p;
        }
        }
    }
    p.push_back(-1);
    return p;
}
