const int trigPin1=2; // Trigger pin for Sensor 1
const int echoPin1=3; // Echo pin for Sensor 1
const int trigPin2=4; // Trigger pin for Sensor 2
const int echoPin2=5; // Echo pin for Sensor 2
const int LED_PIN1=13; // LED pin for indicating blind spot detection
const int LED_PIN2=12;
const int LED_PIN3=11;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);
}

void loop() {
  // Measure distance for Sensor 1
  int duration1, distance1;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = duration1 * 0.034 / 2;
  

  // Measure distance for Sensor 2
  long duration2, distance2;
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = duration2 * 0.034 / 2;

    if (distance2 > 200 ){
    if(distance1 > 275 && distance1 < 320){
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
   } 
    else if(distance1 > 200  &&  distance1 < 275) {
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, LOW);
  }
  else if(distance1 < 200 && distance1 > 0){
   digitalWrite(LED_PIN1, HIGH);
   digitalWrite(LED_PIN2, HIGH);
   digitalWrite(LED_PIN3, HIGH);
  }
  
  else{
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
  }
    }
      else {
    
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
   } 
    

  // Print distance for debugging
  Serial.print("Distance Sensor 1: ");
  Serial.print(distance1);
  Serial.print(" cm, Distance Sensor 2: ");
  Serial.print(distance2);
  Serial.print('\n');


  delay(100); // Delay between measurements
}
