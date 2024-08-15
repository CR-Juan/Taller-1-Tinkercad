bool Negativos = true;
int Suma = 0;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
}

void sumador(){
  if (digitalRead(11)==1){
    Suma+=2;
    delay(500);
}
  if (digitalRead(10)==1){
    Suma+=1;
    delay(500);
}
  if (digitalRead(9)==1){
    Suma=0;
    delay(500);
}
  if (digitalRead(8)==1){
    Suma=0;
    if (Negativos==false){
      Negativos=true;
    }
    else if (Negativos==true){
      Negativos=false;
    }
    delay(500);
  }
}
void loop()
{
  sumador();
  if (Negativos==false){
  if (Suma==0){
    digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
  }
  else if (Suma==1){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
}
  else if (Suma==2){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
}
  else if (Suma==3){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
}
  else if (Suma==4){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
}
   else if (Suma==5){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
}
   else if (Suma==6){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
}
   else if (Suma==7){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
}
   else if (Suma==8){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
}
   else if (Suma==9){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
}
   else if (Suma==10){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
}
   else if (Suma==11){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
}
   else if (Suma==12){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
}
   else if (Suma==13){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
}
   else if (Suma==14){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
}
   else if (Suma==15){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
}
   else if (Suma==16){
  	digitalWrite(0, 1);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
}
}
  else if(Negativos==true){
  if (Suma==0){
    digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
  }
  else if (Suma==1){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
}
  else if (Suma==2){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
}
  else if (Suma==3){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
}
  else if (Suma==4){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
}
   else if (Suma==5){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
}
   else if (Suma==6){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
}
   else if (Suma==7){
  	digitalWrite(0, 0);
    digitalWrite(1, 0);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
}
   else if (Suma==8){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
}
   else if (Suma==9){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
}
   else if (Suma==10){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
}
   else if (Suma==11){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
}
   else if (Suma==12){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
}
   else if (Suma==13){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
}
   else if (Suma==14){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
}
   else if (Suma==15){
  	digitalWrite(0, 0);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
}
   else if (Suma==16){
  	digitalWrite(0, 1);
    digitalWrite(1, 0);
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
}
  }
}