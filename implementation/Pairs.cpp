int pairs(int k, vector<int> arr) {
    unordered_set<int>st;
    for(int i=0;i<arr.size();i++){
        st.insert(arr[i]);
    }
    int ans=0;
    for(int i=0;i<arr.size();i++){
        if(st.find(arr[i]+k)!=st.end()){
            ans++;
        }
    }
    return ans;
}
