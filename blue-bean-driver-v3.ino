char DATA_DELIMITER = '%';
unsigned long time;
int sent = 1;
int ms_send = 200;
int ms_read = 20;
const char * beanName;
AccelerationReading accel;
String dataString;

void setup(){
  Serial.begin();
  Bean.setAccelerationRange(2);
  beanName = Bean.getBeanName();
  //accel = {0, 0, 0};
}


void loop(){

  if( sent == 1 ){
    time = millis();

    dataString = String(time, DEC);
    dataString += ",";
    dataString += beanName;

    sent = 0;
  }
  else{
    
    accel = Bean.getAcceleration();

    dataString += ",";
    dataString += String(accel.xAxis, DEC);
    dataString += ",";
    dataString += String(accel.yAxis, DEC);
    dataString += ",";
    dataString += String(accel.zAxis, DEC);
  }

  if( millis() > time + ms_send ){
    dataString += "\n"; 
    Serial.println(dataString); 

    sent = 1;
  }
 
}
