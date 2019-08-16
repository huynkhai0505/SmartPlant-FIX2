  /*
  # Editor     : Tan Khai Huynh
  # Date       : 08/08/2019
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  # the sensor value description
  # 520 ~ 530     dry soil
  # 550 ~ 720     humid soil
  
  */
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  int val;
  val = analogRead(0);
  if (val <= 550){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  Serial.println(val); //print the value to serial port
  delay(1000);
}
