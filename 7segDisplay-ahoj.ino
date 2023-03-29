//     _
//     a
//  f| _ |b
//     g
//  e| _ |c
//     d      
//
byte connection[]  = {2,3,4,5,6,7,8};

byte lettL[4][7]={
{0,0,0,1,0,0,0}, //a
{1,0,0,1,0,0,0}, //h
{0,0,0,0,0,0,1}, //o
{1,0,0,0,0,1,1} //j
};
  
void setup() {
for(int i=2; i<9; i=i+1){
  pinMode(i, OUTPUT);
}
}
void lett(int j){
  for (int i=0; i<7; i=i+1){
    digitalWrite(connection[i], lettL[j][i]);
}
}
void loop() {
for(int j=0; j<4; j=j+1){
  lett(j);
  delay(750);
}
}
