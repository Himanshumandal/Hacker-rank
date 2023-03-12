string fairRations(vector<int> B) {
    int c=0;
    string ans="";
    int n=B.size();
for(int i=0;i<n-1;i++){
    if(B[i]%2!=0){
        B[i]++;
        B[i+1]++;
        c+=2;
    }
}
if(B[n-1]%2==0){
    ans= to_string(c);
}
else {
    ans= "NO"; 
}
return ans;
}
