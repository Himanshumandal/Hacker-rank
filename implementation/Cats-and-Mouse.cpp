string catAndMouse(int x, int y, int z) {
int discatA=abs(z-x),discatB=abs(z-y);
if(discatA<discatB){
    return "Cat A";
}
else if(discatA>discatB){
    return "Cat B";
}
return "Mouse C";
}
