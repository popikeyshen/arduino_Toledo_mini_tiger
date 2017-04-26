long int a=0;
long int b=0;
long int c=0;
long int d=0;

void setup() {
  Serial.begin(9600);
  
  pinMode(A0,INPUT);    // A1         --
  pinMode(A1,INPUT);     // A3        |   |         A0
  pinMode(A2,INPUT);     // A2         --
  pinMode(A3,INPUT);
  
  pinMode( 8,INPUT);
  digitalWrite(8,LOW);
  pinMode( 9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  

}

void loop() {

    for(int i=0; i<=1000; i++)
    {
       a+=analogRead(A0);
       b+=analogRead(A1);
       c+=analogRead(A2);
       d+=analogRead(A3);
    }
  
    Serial.print(a/1000);Serial.print(" ");
    Serial.print(b/1000);Serial.print(" ");
    Serial.print(c/1000);Serial.print(" ");
    Serial.println(d/1000);
    
    if(b/1000>100)
    {Serial.println("  __  ");}
    else
    {Serial.println("      ");}
    
    if(d/1000>100)
    {Serial.print(" |");}
    else
    {Serial.print("  ");}
    
    if(c/1000>100)
    {Serial.print("__");}
    else
    {Serial.print("  ");}
    
    if(a/1000>100)
    {Serial.println("|");}
    else
    {Serial.println("  ");}
    
    
    a=0;
    b=0;
    c=0;
    d=0;
    
    delay(10);
}


