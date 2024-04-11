const int temp = A2;
float t;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(temp , INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  t = analogRead(temp);
  Serial.println("Temperature is equal to:-");
  Serial.print(t); 

}
