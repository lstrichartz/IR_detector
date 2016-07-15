
// We'll use analog input 0 to measure the ir sensor's
// signal pin.

const int irsignalPin = 0;

void setup()
{
  pinMode(irsignalPin, INPUT);
  Serial.begin(9600);
}


void loop()
{

float irsignal;

//  analogRead(irsignalPin);
  
  Serial.print("  IR on? ");
  Serial.println(analogRead(irsignalPin)-1000);
   
  delay(1000); 
}




