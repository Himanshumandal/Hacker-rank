int birthday(vector<int> s, int d, int m) {
int count=0;
for(int i=0;i<s.size();i++){
    int sum=0;
    for(int j=0;j<m;j++){
        sum=sum+s[i+j];
    }
   // m++;
    if(sum==d){
        count++;
    }
}
return count;    
}
