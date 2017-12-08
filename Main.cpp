String pass;
int adderFlag = 0;
if(pass.length%3 == 1){
  adderFlag =1;
}else if(pass.length%3 == 2){  
  adderFlag = 2;
}
unsigned char[] pswd = new char[pass.length + adderFlag];
char[] rnd = new char[3];

for(int i=0; i<3; i++){ 
  rnd[i] = Random.r.nextChar
}

for (int i=0; i< pswd.length; i+=3){

}
