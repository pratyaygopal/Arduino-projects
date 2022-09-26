int trig = 10;
int echo = 11;
long duration;
long distance;
long pot;

void setup() {
  pinMode(echo, INPUT);

  pinMode(trig, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  pot = analogRead(A0);

  int notes[7] = {261, 294, 329, 349, 392, 440, 494}; //Putting several notes in an array
  //          mid C  D   E   F   G   A   B


  int sound = map(pot, 0, 1000, 0, 6);  //map distance to the array of notes
  tone(12, notes[sound]);  //call a certain note depending on distance


}
