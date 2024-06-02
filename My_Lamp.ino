#define IR_SENSOR 9

const int pin5V = 5;          // Pin to output 5V
const int pinGND1 = 6;        // Pin to output GND1
const int pinGND2 = 7;        // Pin to output GND2

// Variable to store the current state
int state = 1;

void setup() {

    Serial.begin(9600);

  // Set the pin modes
  pinMode(pin5V, OUTPUT);
  pinMode(pinGND1, OUTPUT);
  pinMode(pinGND2, OUTPUT);
  pinMode(IR_SENSOR, INPUT);
  
  // Initialize the output pins
  digitalWrite(pin5V, LOW);
  digitalWrite(pinGND1, LOW);
  digitalWrite(pinGND2, LOW);
}

void loop() {
  int IRSensorValue = digitalRead(IR_SENSOR);
  Serial.println(IRSensorValue);
  delay(2000);
  if(IRSensorValue==LOW){
    state = (state % 3) + 1;
  }
      
  if (state == 1) {
    digitalWrite(pin5V, HIGH);
    digitalWrite(pinGND1, LOW);
    digitalWrite(pinGND2, LOW);        
  }
  else if (state == 2) {
    digitalWrite(pin5V, HIGH);
    digitalWrite(pinGND1, LOW);
    digitalWrite(pinGND2, HIGH);        
  }
  else if (state == 3) {
    digitalWrite(pin5V, HIGH);
    digitalWrite(pinGND1, HIGH);
    digitalWrite(pinGND2, LOW);        
  }
}
