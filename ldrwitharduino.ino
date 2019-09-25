
const int ldrinput= A0; 
int light=10;

int x;

void setup() {
   
    pinMode(10,OUTPUT);
    
    pinMode(A0,INPUT);
   
}

void loop() {
    x=analogRead(A0);
    
    if(x>700) // there is dark
    {
        digitalWrite(light,1);
        delay(1000);
        }
    else  // there is light
    {
       digitalWrite(light,0);  //turn off light
        delay(1000);
    }
   
    
 
  
    
}

