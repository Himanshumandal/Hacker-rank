vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    int rank=0,c=-1,j=player.size()-1;
    vector<int>v(player.size(),0);
    for(int i=0;i<ranked.size();i++){
        if(ranked[i]!=c){
            c=ranked[i];
            rank++;
            while(player[j]>=c && j>-1){
                v[j--]=rank;
            }
        }
    }
    rank++;
    while(j>-1){
        v[j--]=rank;
    }
    return v;
}
