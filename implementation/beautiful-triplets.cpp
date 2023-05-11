int beautifulTriplets(int d, vector<int> arr) {
    int count=0;
    int n=arr.size();
   for(int i=0;i<n;i++){
       int ch=0,itr;
       for(int j=i+1;j<n;j++){
           
            if(arr[j]-arr[i]==d){
               ch=1;
               itr=j;
           }
           if(ch==1){
               if(arr[j]-arr[itr]==d){
                   count++;
               }
           }
          
       }
   }
    return count;
}
