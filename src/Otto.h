#ifndef Otto_h
#define Otto_h

#include <Servo.h>
#include "Oscillator.h"
//#include <EEPROM.h>

#include "US.h"
#include "MaxMatrix.h"
#include "BatReader.h"

#include "Otto_mouths.h"
#include "Otto_sounds.h"
#include "Otto_gestures.h"
#include "SoftSerialCommand.h"

//-- Constants
#define FORWARD     1
#define BACKWARD    -1
#define LEFT        1
#define RIGHT       -1
#define SMALL       5
#define MEDIUM      15
#define BIG         30

#define HIP_L   2        // connect Servo Hip left to D2
#define FOOT_L  4        // Connect Servo Foot Left to D4
#define HIP_R   3        // Connect Servo Hip right to D3
#define FOOT_R  5        // COnnect Servo Foot Right to D5

#define PIN_Buzzer  13
#define PIN_Trigger 8
#define PIN_Echo    9
#define PIN_NoiseSensor A6
///define Bluetooth in SoftwareSerial 
#define BT_Rx   6  
#define BT_Tx   7
//define Max7219 pins DIN=10 CS=11 CLK=12
#define PIN_DIN    10   //max 7219
#define PIN_CS     11
#define PIN_CLK    12

class Otto
{
  public:
    //-- Otto initialization
    void init(int YL, int YR, int RL, int RR, bool load_calibration=true, int NoiseSensor=PIN_NoiseSensor, int Buzzer=PIN_Buzzer, int USTrigger=PIN_Trigger, int USEcho=PIN_Echo);

    //-- Attach & detach functions
    void attachServos();
    void detachServos();

    //-- Oscillator Trims
    //  void setTrims(int YL, int YR, int RL, int RR);
    // void saveTrimsOnEEPROM();

    //-- Predetermined Motion Functions
    void _moveServos(int time, int  servo_target[]);
    void oscillateServos(int A[4], int O[4], int T, double phase_diff[4], float cycle);

    //-- HOME = Otto at rest position
    void home();
    bool getRestState();
    void setRestState(bool state);
    
    //-- Predetermined Motion Functions
    void jump(float steps=1, int T = 2000);

    void walk(float steps=4, int T=1000, int dir = FORWARD);
    void turn(float steps=4, int T=2000, int dir = LEFT);
    void bend (int steps=1, int T=1400, int dir=LEFT);
    void shakeLeg (int steps=1, int T = 2000, int dir=RIGHT);

    void updown(float steps=1, int T=1000, int h = 20);
    void swing(float steps=1, int T=1000, int h=20);
    void tiptoeSwing(float steps=1, int T=900, int h=20);
    void jitter(float steps=1, int T=500, int h=20);
    void ascendingTurn(float steps=1, int T=900, int h=20);

    void moonwalker(float steps=1, int T=900, int h=20, int dir=LEFT);
    void crusaito(float steps=1, int T=900, int h=20, int dir=FORWARD);
    void flapping(float steps=1, int T=1000, int h=20, int dir=FORWARD);
    void move(int moveID,int time);
    //-- Sensors functions
    float getDistance(); //US sensor
    int   getNoise();      //Noise Sensor

    //-- Battery
    double getBatteryLevel();
    double getBatteryVoltage();
    
    //-- Mouth & Animations
    void putMouth(unsigned long int mouth, bool predefined = true);
    void putAnimationMouth(unsigned long int anim, int index);
    void clearMouth();
 
    //-- Sounds
    void _tone (float noteFrequency, long noteDuration, int silentDuration);
    void bendTones (float initFrequency, float finalFrequency, float prop, long noteDuration, int silentDuration);
    void sing(int songName);

    //-- Gestures
    void playGesture(int gesture);

 
  private:
    
    MaxMatrix ledmatrix=MaxMatrix(PIN_DIN,PIN_CS,PIN_CLK, 1);  // init Max7219 LED Matrix, 1 module

    BatReader battery;
    Oscillator servo[4];
    US us;

    int servo_pins[4];
    int servo_trim[4];
    int servo_position[4];

    int pinBuzzer;
    int pinNoiseSensor;
    
    unsigned long final_time;
    unsigned long partial_time;
    float increment[4];

    bool isOttoResting;

    unsigned long int getMouthShape(int number);
    unsigned long int getAnimShape(int anim, int index);
    void _execute(int A[4], int O[4], int T, double phase_diff[4], float steps);

};

#endif


