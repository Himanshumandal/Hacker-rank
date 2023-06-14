void insertionSort2(int n, vector<int> arr) {
    for(int i=1;i<arr.size();i++){
        
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
               swap(arr[i],arr[j]);
            }
        }
        for(int k=0;k<arr.size();k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}
