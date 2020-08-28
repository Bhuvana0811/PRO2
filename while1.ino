//var = 0;
// this constant won't change:
const int  buttonPin = 2;
const int ledPin = 13;

// Variables will change:
int buttonState = 0;
int lastButtonState = 0;
int ledPinState = 0;

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  buttonState = digitalRead(buttonPin);
  ledPinState = digitalRead(ledPin);
  Serial.print("ledPinState is : ");
  Serial.println(ledPinState);
  Serial.print("buttonState is : ");
  Serial.println(buttonState);
  Serial.print("lastbuttonState is : ");
  Serial.println(lastButtonState);
  if ((buttonState == 0) && (lastButtonState == 1) && (ledPinState == 0))
  {
    // do something repetitive 200 times
    if (buttonState == 1)
    {
      digitalWrite(ledPin, HIGH);
    }
    digitalWrite(ledPin, 1);
    delay(2000);
    digitalWrite(ledPin, 0);
    //lastButtonState = buttonState;
    ledPinState = digitalRead(ledPin);
    lastButtonState = buttonState; // = digitalRead(buttonPin);
  }
  else //if ((buttonState == 1 ) && (ledPinState == 1))
  {
    digitalWrite(ledPin, 0);
    lastButtonState = buttonState;
  }

}
