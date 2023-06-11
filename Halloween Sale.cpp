int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int c=0 ;
    while(s>=p){
        s-=p;
        p=max(m,p-d);
        c++;
    }
    return c;
}
