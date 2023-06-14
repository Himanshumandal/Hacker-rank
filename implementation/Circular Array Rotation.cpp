vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int>v(a.size()),res;
   
    for(int i=0;i<a.size();i++){
        v[(i+k)%a.size()]=a[i];
    }
    for(int i=0;i<queries.size();i++){
        res.push_back(v[queries[i]]);
    }
    
   return res;
}
