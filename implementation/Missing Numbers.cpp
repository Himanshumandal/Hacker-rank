vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    map<int,int>mp;
    for(int i=0;i<brr.size();i++){
        mp[brr[i]]++;
    }
    vector<int>v;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]--;
    }
    for(auto i:mp){
        if(i.second>0){
            v.push_back(i.first);
        }
    }
    return v;
}
