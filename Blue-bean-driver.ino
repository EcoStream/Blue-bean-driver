char DATA_DELIMITER = '%';
long raw_data = 123123;

void setup(){
  Serial.begin();
}


void loop(){
  String data = DATA_DELIMITER + String(raw_data) + DATA_DELIMITER;
  Serial.print(data + '\n');
  
  // Data rate at most 100ms
  Bean.sleep(1000);
}