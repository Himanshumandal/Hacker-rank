int beautifulDays(int i, int j, int k) {
    int ans=0;
  for(int st=i;st<=j;st++){
       int eq=st,rev=0;
        while(eq!=0){
        rev=(rev*10)+(eq%10);
        eq/=10;
        }
        
        if(abs(st-rev)%k==0){
            ans++;
        }
        //i++;
    }
    return ans;
}
