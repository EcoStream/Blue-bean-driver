char DATA_DELIMITER = '%';
long raw_data = 34;

void setup(){
  Serial.begin();
}


void loop(){

	// Example usage
  String data = DATA_DELIMITER + String(raw_data) + DATA_DELIMITER;
  Serial.print(data + '\n');

  // Demo only
  raw_data++;
  if (raw_data > 99) {
  	raw_data = 34;
  }
  
  // Data rate at most 100ms
  Bean.sleep(200);
}