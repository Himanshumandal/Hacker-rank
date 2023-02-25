  /* form 1918 is the start day of george calender(*conversion of the julian calender to geoge calender) so the we return (+12) 26.09.1918*/
if(year==1918){
   return "26.09.1918";
}
string st;
if(year%4==0){
    if(year<1918||(year%100!=0||year%400==0)){
  st="12.09."+to_string(year);
}
else{
     st="13.09."+to_string(year);
}
}
else{
    st="13.09."+to_string(year);
}
return st;
}
