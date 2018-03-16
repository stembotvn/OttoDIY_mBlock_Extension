# OttoDIY_mBlock_Extension
Mblock is a software that allows Programming in Scratch Language for robots,Release by MakeBlocks, inherited from Scratch 2.0 by MIT. Extension is a set of files that allows you to install blocks for different types of robots to compatible with mBlock Environment
Download and install mBlock Software: http://www.mblock.cc/software/mblock/mblock3/

## OttoDIY 
   A BiPedal Robot is very Fun and wonderful opensource project. http://www.ottodiy.com/
   You can build your own and teach your kids programming Scratch for Otto Robot using this Extension 
   <img src="https://github.com/stembotvn/OttoDIY_mBlock_Extension/blob/master/media/Otto.png" width="250" align="center">

## WHAT NEWS WITH OTTODIY in mBlock Extension V3.1
   ### Otto can response sound, can follow the light, can read 2 buttons, can send and receive data to Computer via Serial port   
   ### Added LED MAtrix mouth for emotion 
   ### Added play melody with Buzzer
   ### More Language: Italiano, Brasilian Portuguese Language, French, Spanish... and will be more with community contribution. 
   
# Hardware Connection (NOTE THAT THIS IS ADVANCED FUNCTIONS VERSION, THE DIAGRAM IS DIFFERENT THAN CLASSIC VERSION
<img src="https://github.com/stembotvn/OttoDIY_mBlock_Extension/blob/master/media/connection.png" width="500" align="center">

 |  Component             | Arduino Pin |
 | --- | --- |
 |  Servo Hip left        | D2          |
 |  Servo Foot Left       | D4          |
 |  Servo Hip right       | D3          |
 |  Servo Foot right| D5|
 |  Buzzer          | D13|
 |Bluetooth HC06 Rx | D7|
 |Bluetooth HC06 Tx | D6|
 |SRF04 Trigger     | D8|
 |SRF04 Echo        | D9|
 |Max7219 LedMatrix Data | D10|
 |Max7219 LedMatrix CS   | D11|
 |Max7219 LedMatrix Clk  | D12|
 |Analog Sound Sensor Module|A6|
 |Button 1                  |A2|
 |Button 2                  |A3|
 |Light sensor Module (RIGHT) Analog output Pin|A0|
 |Light Sensor Module (LEFT) Analog output Pin|A1|

## Getting Started Learning to Code with Scratch, Great Starting for Kids and Beginner
   Refer to Wiki Page: https://github.com/stembotvn/OttoDIY_mBlock_Extension/wiki 
   
   See video how to install Otto Extension in mBlock software
   https://www.youtube.com/watch?v=lPDUmW9uHto
   
## How to calibration Otto Legs
As you know, it is difficult to install Servos with accurate angle home, So we need an tool to calibrate by software. 
From Version 3.5, We added calibrate block and make Calibration demo program so Makers can easily calibrate even inside mBlock software via Serial port. 
- https://github.com/stembotvn/OttoDIY_mBlock_Extension/wiki/Lesson-2:-Otto-calibration
- Video instruction: https://www.youtube.com/watch?v=iJVykUi7Bts&t=115s

## Online Doccumentation for setup Open Classroom to teach kids coding Scratch for Otto
We are building the online doccument with SphinX docs via ReadtheDocs Platform. All in progress. 

http://ottolearning.rtfd.io/

The sourcecode of online doccument is host in github:

https://github.com/stembotvn/OttoLearning

Forked, build and make a pull request if you want to contribute with me to build the doccument if you familiar with Sphinx docs. 


### NOTE: Version 2.6 full all of functions only work in Arduino Mode of mBlock (code in Scratch, mBLock automatically generate to Arduino code)
Have Fun learning with Otto robot!

## THERE IS A BUG FOUND WITH EXTENSION IN MBLOCK, IF YOU NEED TO SWITCH OVER EXTENSION OF MANY EXTENSIONS, PLEASE CLEAR CACHE IN MANAGE EXTENSION FIRST FOR WORKING WELL WITH MY EXTENSION

## Our Laser Cut Design version 
   https://github.com/stembotvn/OttoLaserCutDesign
    
