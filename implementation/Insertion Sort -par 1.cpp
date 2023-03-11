void insertionSort1(int n, vector<int> arr) {
    int comp=arr[n-1],min=arr[n-1];
    int count=n-1;
    for(int i=n-1;i>=count;i--){
       
        if(arr[i-1]>comp){
          // comp=arr[i];
           arr[i]=arr[i-1];
             count-=1;           
            }
            else if(arr[i-1]<comp){
                arr[i]=min;                 
            }
            for(int j=0;j<n;j++){
                cout<<arr[j]<<" ";
        }
       // cout<<arr[n-i-1]<<" ";
  
    cout<<endl;
    }
    
    
}
