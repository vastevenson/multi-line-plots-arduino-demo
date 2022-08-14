/*
 * Goal: print and label multiple lines in the Serial Plotter 
 * 
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 360; i++){
    Serial.print("Constant:");
    Serial.print(1);
    Serial.print(",");
    
    Serial.print("Cosine:");
    Serial.print(cos(DEG_TO_RAD * i));
    Serial.print(",");
    
    Serial.print("Sine:");
    Serial.println(sin(DEG_TO_RAD * i)); // note that println() is needed to end current set of datapoints
  }
}