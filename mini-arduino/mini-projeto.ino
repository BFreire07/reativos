int RLED = 2;
int GLED = 3;
int YLED = 4;
int BUZZ = 8;

int i;
int len;
String palavra;
String cripta;
String morse;

void setup(){

  pinMode(RLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(YLED, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  Serial.begin(9600);
}

void loop(){

  while(Serial.available()) {
    palavra = Serial.readString();
  }
  delay(500);
  len = palavra.length();

  if (len > 0){
    for (i=0; i<len; i++){
      criptografa(palavra[i]);
      alfabeto(cripta[i]);
    }
    if (i == len){
      digitalWrite(RLED, HIGH);
      digitalWrite(GLED, HIGH);
      digitalWrite(YLED, HIGH);
      delay(500);
      digitalWrite(RLED, LOW);
      digitalWrite(GLED, LOW);
      digitalWrite(YLED, LOW);
      Serial.println("=====================================================================");
      Serial.print("Você digitou: ");
      Serial.print(palavra);
      Serial.print('\n');
      Serial.print("Mensagem Criptografada: ");
      Serial.print(cripta);
      Serial.print('\n');
      Serial.print("Codigo Morse: ");
      Serial.print(morse);
      Serial.print('\n');
      
      
      while(1);
    }
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

void criptografa(char s){

  int i, j;
  char c; 
  
  i = s;
  if ((i >96) && (i<123)){

    if (i<110){
      j = i + 13;  
    }
    else{
      j = i - 13;
    }
    c = j;
    
  }
  else{
    c = i;
  }

  cripta.concat(c);
  
}

void alfabeto(char v){

  switch(v){

    case 'a':

      morse.concat(".- ");
      dot();
      dash();
      ton();
      break;

    case 'b':

      morse.concat("-... ");
      dash();
      dot();
      dot();
      dot();
      ton();
      break;

    case 'c':

      morse.concat("-.-. ");
      dash();
      dot();
      dash();
      dot();
      ton();
      break;

    case 'd':

      morse.concat("-.. ");
      dash();
      dot();
      dot();
      ton();
      break;

    case 'e':

      morse.concat(". ");
      dot();
      ton();
      break;

    case 'f':

      morse.concat("..-. ");
      dot();
      dot();
      dash();
      dot();
      ton();
      break;

    case 'g':

      morse.concat("--. ");
      dash();
      dash();
      dot();
      ton();
      break;

    case 'h':

      morse.concat(".... ");
      dot();
      dot();
      dot();
      dot();
      ton();
      break;

    case 'i':

      morse.concat(".. ");
      dot();
      dot();
      ton();
      break;

    case 'j':

      morse.concat(".--- ");
      dot();
      dash();
      dash();
      dash();
      ton();
      break;

    case 'k':

      morse.concat("-.- ");
      dash();
      dot();
      dash();
      ton();
      break;

    case 'l':

      morse.concat(".-.. ");
      dot();
      dash();
      dot();
      dot();
      ton();
      break;

    case 'm':

      morse.concat("-- ");
      dash();
      dash();
      ton();
      break;

    case 'n':

      morse.concat("-. ");
      dash();
      dot();
      ton();
      break;

    case 'o':

      morse.concat("--- ");
      dash();
      dash();
      dash();
      ton();
      break;
    
    case 'p':

      morse.concat(".--. ");
      dot();
      dash();
      dash();
      dot();
      ton();
      break;

    case 'q':

      morse.concat("--.- ");
      dash();
      dash();
      dot();
      dash();
      ton();
      break;

    case 'r':

      morse.concat(".-. ");
      dot();
      dash();
      dot();
      ton();
      break;

    case 's':

      morse.concat("... ");
      dot();
      dot();
      dot();
      ton();
      break;

    case 't':

      morse.concat("- ");
      dash();
      ton();
      break;

    case 'u':

      morse.concat("..- ");
      dot();
      dot();
      dash();
      ton();
      break;

    case 'v':

      morse.concat("...- ");
      dot();
      dot();
      dot();
      dash();
      ton();
      break;

    case 'w':

      morse.concat(".-- ");
      dot();
      dash();
      dash();
      ton();
      break;

    case 'x':

      morse.concat("-..- ");
      dash();
      dot();
      dot();
      dash();
      ton();
      break;

    case 'y':

      morse.concat("-.-- ");
      dash();
      dot();
      dash();
      dash();
      ton();
      break;

    case 'z':

      morse.concat("--.. ");
      dash();
      dash();
      dot();
      dot();
      ton();
      break;

    case ' ':

      morse.concat(" / ");
      space();
      break;

    default:
      break;
          
  }

}
