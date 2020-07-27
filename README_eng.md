```markdown

```

<img width="871" alt="MI2RL_logo" src="https://user-images.githubusercontent.com/55417425/77146652-e4a44700-6ace-11ea-9e69-3d38b3f35392.png"><br>



# DONT push the dispenser
* DONT push the dispenser, AVOID the chance of cross-contamination. 
* Since we understand that, as engineers, it's our responsibility to put our knowledge to overcome the difficulties of our community and society, especially in the era of global pandemic(COVID-19), we developed this "non-contact type", "automated" pumping device for hand-sanitizer.  This project is a contribution of Medical Imaging and Intelligent Reality Lab in Asan Medical Center(AMC-MI2RL) in Seoul, Korea.
* This device is made with a Arduino Nano CH340,  ultrasonic sen and two pieces of sg90 servo motors.
* [Demo Video(YouTube link)](https://youtu.be/2AqtVSnK7Oo)



## Setting Environment and  Rationale

* Setting

  - for digital input/output TX, RX, D2~D13 : 14 pin
  - for analog input A0~A7: 8 pin
  0 Atmel Atmega328P-AU 
  -  Support **USB upload and power supply** as well as  **external power supply(DC 5V~12V)**
  - Use 5V-pin for 3.3V ~ 5.5V supply and use VIN-pin for 6V ~ 12V
  -  Lower than 100 milliamperes(mA) of current is recommended when supply power to the external module using 5V pin
  - **Warning** :  Diode can be burnt with higher than 100mA, when using USB port power supply
  
* Parts needed

  | Name of Component                          |     Num of parts neeeded        |
  | ----------------------------------------- | --------------------- |
  | CH340 board(compatible with arduino nano) | 1ea                   |
  | servo motor                               | 2ea                   |
  | bread board                               | 1ea                   |
  | 9v battery                                | 4ea                   |
  | 9v battery socket                         | 4ea                   |
  | jumper wire                               | (as mush as possible) |
  | HC_SR04 (ultrasound sensor)               | 1ea                   |
  

  
* Rationale 

  * Have you ever worried about the possible contamination of pushing the surface of pump of the dispenser, when using hand sanitizer?
  * For whomever feared about potential exposure to contaminations  through public hand sanitizers

![](https://user-images.githubusercontent.com/42925197/77137204-4903de00-6ab0-11ea-937e-0cba5ad5ad16.png)


  * <u> Alcohol rub is recommended and necessary to reduce the cross contamination  especially for health workers or for the people entering the public space, but the surface of the pump could've been contaminated with (many people) and can possibly increase the risk of infection. Automatic pump are used to decrease the possiblity of those risks. This project shares the way of making 'DIY' auto-pumping hand sanitizer.  </u>
 



## 1. NEWS(20.03.19): DONT Push Dispenser ver 0.4

* In the same axis of  "DONT/WASH", we developed non-contact type of  liquid dispenser in the purpose of reducing the cross-contamination, which can occur when touching at the surface of pump-type hand sanitizers.



## 2. Circuit Construction

* Connect jumper wires  to the adequate port referring the image below.

  ![image](https://user-images.githubusercontent.com/55417425/77146927-8b88e300-6acf-11ea-9d17-d67da54c015c.png)

## 3. Quick Guide

* Setting
  1. Download the "Arduino IDE"([You can find and download it by searching from Google](https://www.arduino.cc/en/main/OldSoftwareReleases)). 
  2. Connect CH340 to PC with USB connector
  3. Connect the devices like the image above
  4. After finishing  the basic setting of Arduino IDE.
  5. Open "DONT_dispenser.ino" and upload the **file** to Arduino with "Ctrl +u"  
  6. Unconnect the USB line with PC and connect the 9V battery to the device.
* Run the device
  * If the hand approaches within 12cm from the ultrasould 센서?, the device will automatically pump the sanitizer.
  * [How to wash hand properly?](https://www.youtube.com/watch?v=4O0zkBQTgvI)


## 4. Project Contributers
 * Juyoung Park
 * Junmyeong Choi
 * NamKug Kim
 
