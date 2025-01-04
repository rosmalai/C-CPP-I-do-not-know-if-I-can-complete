void setup(){
    pinModel(13, OUTPUT);  //set pin 13 as an output
}

void loop(){
    digitalWrite(13, HIGH); //turn led on
    delay(1000);            //wait for 1 second
    digitalWrite(13, LOW); //turn led off
    delay(1000);           //wait for 1 second

}