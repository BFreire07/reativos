int RLED = 2;
int GLED = 3;
int YLED = 4;
int BUZZ = 8;

int i;
int len;
String palavra = "bruno ";

void setup(){

  pinMode(RLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(YLED, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  Serial.begin(9600);
}

void loop(){

    len = palavra.length();
  
  for (i=0; i<len; i++){

    alfabeto(palavra[i]);

  }

}

void dot(){

  digitalWrite(RLED, HIGH); //Acende o LED Vermelho
  delay(500);
  digitalWrite(RLED, LOW);  //Desliga o LED Verde
  delay(500);

}

void dash(){

  digitalWrite(GLED, HIGH); //Acende o LED Verde
  delay(500);
  digitalWrite(GLED, LOW);  //Desliga o LED Verde
  delay(500);

}

void space(){
 
    digitalWrite(YLED, HIGH); //Acende o LED Amarelo
    delay(500);
    digitalWrite(YLED, LOW);  //LED Verde OFF
    delay(500);
  
}

void ton(){

  tone(BUZZ, 1200);      //Toca o Buzzer em D
  delay(500);
  noTone(BUZZ);

}


void alfabeto(char v){

  switch(v){

    case 'a':

      dot();
      dash();
      ton();
      break;

    case 'b':

      dash();
      dot();
      dot();
      dot();
      ton();
      break;

    case 'c':

      dash();
      dot();
      dash();
      dot();
      ton();
      break;

    case 'd':

      dash();
      dot();
      dot();
      ton();
      break;

    case 'e':

      dot();
      ton();
      break;

    case 'f':

      dot();
      dot();
      dash();
      dot();
      ton();
      break;

    case 'g':

      dash();
      dash();
      dot();
      ton();
      break;

    case 'h':

      dot();
      dot();
      dot();
      dot();
      ton();
      break;

    case 'i':

      dot();
      dot();
      ton();
      break;

    case 'j':

      dot();
      dash();
      dash();
      dash();
      ton();
      break;

    case 'k':

      dash();
      dot();
      dash();
      ton();
      break;

    case 'l':

      dot();
      dash();
      dot();
      dot();
      ton();
      break;

    case 'm':

      dash();
      dash();
      ton();
      break;

    case 'n':

      dash();
      dot();
      ton();
      break;

    case 'o':

      dash();
      dash();
      dash();
      ton();
      break;
    
    case 'p':

      dot();
      dash();
      dash();
      dot();
      ton();
      break;

    case 'q':

      dash();
      dash();
      dot();
      dash();
      ton();
      break;

    case 'r':

      dot();
      dash();
      dot();
      ton();
      break;

    case 's':

      dot();
      dot();
      dot();
      ton();
      break;

    case 't':

      dash();
      ton();
      break;

    case 'u':

      dot();
      dot();
      dash();
      ton();
      break;

    case 'v':

      dot();
      dot();
      dot();
      dash();
      ton();
      break;

    case 'w':

      dot();
      dash();
      dash();
      ton();
      break;

    case 'x':

      dash();
      dot();
      dot();
      dash();
      ton();
      break;

    case 'y':

      dash();
      dot();
      dash();
      dash();
      ton();
      break;

    case 'z':

      dash();
      dash();
      dot();
      dot();
      ton();
      break;

    case ' ':
          
      space();
      break;

    default:
      break;
          
  }

}
