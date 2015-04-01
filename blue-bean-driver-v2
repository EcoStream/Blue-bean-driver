void setup(){
  Serial.begin();
  Bean.setAccelerationRange(2);
}


void loop(){

  const char * beanName = Bean.getBeanName();
  AccelerationReading accel = {0, 0, 0};
  accel = Bean.getAcceleration();

  String //dataString = String(beanName);
  //dataString += ",";
  dataString = String(accel.xAxis, DEC);
  dataString += ",";
  dataString += String(accel.yAxis, DEC);
  dataString += ",";
  dataString += String(accel.zAxis, DEC);
  
  Serial.println(dataString);
  
  Bean.sleep(200);
}
