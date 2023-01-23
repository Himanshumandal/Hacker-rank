 vector<int>a;
    //int n=arr.size()/d;
for(int i=d;i<arr.size();i++){
    a.push_back(arr[i]);
}
for(int i=0;i<d;i++){
    a.push_back(arr[i]);
}
    
return a;
}
