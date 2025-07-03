// Define the pins for the 7-segment display
int segPins[] = {19, 18, 5, 17, 16, 4, 0}; // A, B, C, D, E, F, G pins
int numToSegment[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() {
  // Initialize the 7-segment display pins as output
  for (int i = 0; i < 7; i++) {
    pinMode(segPins[i], OUTPUT);
  }
}

void loop() {
  // Loop through numbers 0 to 9
  for (int num = 0; num < 10; num++) {
    displayNumber(num);
    delay(1000);  // Wait 1 second before displaying the next number
  }
}

void displayNumber(int num) {
  // Loop through all segments and set the corresponding pin high or low
  for (int i = 0; i < 7; i++) {
    digitalWrite(segPins[i], numToSegment[num][i]);
  }
}

