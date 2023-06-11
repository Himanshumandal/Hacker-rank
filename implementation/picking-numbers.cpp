    int n=1;
for(int i=0;i<a.size()-1;i++){
    int c=0;
    for(int j=0;j<a.size();j++){
        if(i==j){
        continue;
        }
       if(abs(a[i]-a[j])<=1){
            c++;
        }
    }
    if(c>n){
        n=c;
    }
}
    return n;
}
