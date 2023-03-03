int hurdleRace(int k, vector<int> height) {
int maxi,ans=0;
maxi=*max_element(height.begin(),height.end());
ans=maxi-k;
if(ans<0){
    return 0;
}
return ans;
}
