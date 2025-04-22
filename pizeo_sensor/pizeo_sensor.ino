// Define the analog input pin connected to the voltage divider output
// On XIAO ESP32-C3, A0/D1 corresponds to GPIO 1
const int sensorPin = 1; // GPIO 1

void setup() {
  // Initialize Serial communication at 115200 baud rate
  Serial.begin(115200);

  // Optional: Wait for Serial Monitor to open (especially needed on some boards)
  // Remove the "//" from the line below if you have issues seeing the first messages
  // while (!Serial) { delay(10); }

  Serial.println("ESP32 Piezoresistive Sensor Reading");
  Serial.print("Reading from Analog Pin: ");
  Serial.println(sensorPin);
}

void loop() {
  // Read the raw analog value from the sensor pin
  // ESP32 ADC is typically 12-bit, so values range from 0 to 4095
  int rawValue = analogRead(sensorPin);

  // Print the raw value to the Serial Monitor
  Serial.print("Raw Sensor Value: ");
  Serial.println(rawValue);

  // Wait for a short period before the next reading
  delay(100); // Read roughly 10 times per second
}