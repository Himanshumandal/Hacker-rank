int theLoveLetterMystery(string s) {
    int c=0,i=0,j=s.size()-1;
    while(i<j){
        c+=abs(s[i]-s[j]);
        i++;
        j--;
    }
    return c;
}
