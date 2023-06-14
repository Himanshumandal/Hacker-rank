int jumpingOnClouds(vector<int> c) {
int res=0,ind=0;
while(ind<c.size()-1){
    if(c[ind]==0){
        ind+=2;
    }
    else{
        ind+=1;
    }
    res++;
}
return res;
}
