<img width="871" alt="MI2RL_logo" src="https://user-images.githubusercontent.com/55417425/77146652-e4a44700-6ace-11ea-9e69-3d38b3f35392.png">
<br>

# DONT_dispenser

### 손 세정제 손으로 누르지 마세요!

---

* 이 프로그램은 세계적으로 대유행인 코로나-19(SARS-CoV-2)를 극복하기 위해 서울아산병원의 MI2RL 연구실에서 개발하였습니다.
* 이 장치는 아두이노 나노의 호환보드인 CH340과 초음파 센서, sg90 서보모터 두개를 이용하여 제작하였습니다.
* [데모동영상 링크](https://youtu.be/2AqtVSnK7Oo)


## 1. NEWS(20.03.19): DONT_dispenser ver 0.4

   * 이 장치는 [DONT/WASH](https://github.com/mi2rl/DONT)에 이어서, 사람들이 손세정제를 사용할때 누르는 부분에서 생길수 있는 교차감염을 줄일수 있도록 비접촉으로 손세정제를 사용할수 있도록 개발되었습니다.
   * TODO:(향후할일)

     * 밧데리 하우징을 통한 선 최소화
     * 밧데리, 손세정제 교체 가능
     * Agile 손세정제 작동 최적화
     * LED 인디케이트 부착
     * 양산 고려 최적화
     * 따라 만들기 쉽게 설계도 및 제작기법, 제작과정 공개

## 2. 회로 구성하기

   * 아래의 이미지를 참조하여 해당되는 포트에 점프선을 연결합니다.
<img width="900" alt="Circuit" src="https://user-images.githubusercontent.com/55417425/77146927-8b88e300-6acf-11ea-9d17-d67da54c015c.png">

## 3. 사용 방법


   * 보드 세팅하기
     * Arduino IDE를 다운받고, CH340을 본인의 컴퓨터와 연결합니다.
     * 사진 첨부 예정.
     * 위의 사진과 같이 장치들을 연결합니다.
     * Arduino IDE 설정을 한 후, DONT_dispenser.ino 파일을 열고 Ctrl + u로 업로드합니다.
     * 컴퓨터와의 연결을 제거하고, 9V 건전지를 연결합니다. 
     * 위의 내용은 배포방식에 따라 변경가능. //하우징에 따라서 좀더 구체적으로 작성 예정
   * 장치 사용하기 
     * 초음파 센서로부터 12cm이내에 손을 가져다 대시면 손 소독제를 펌핑합니다.

   

## 4. 세부사항


   * 보드 환경
     * 14개 디지털 입력/출력 핀 TX,RX,D2~D13
     * 8개 아날로그 입력 핀 A0~A7
     * TTL 레벨 시리얼 발수신 RX / TX
     * 6개 PWM핀 D3, D5, D6, D9, D10, D11
     * Atmel Atmega328P-AU 칩 사용
     * USB 다운로드 및 전원공급 지원
     * 외부 5V~12V DC전원공급장치 지원
     * 9V 배터리 전원 지원
     * ISP 다운로드 지원
     * 세가지 전원공급방식: USB, VIN, 외부5V 입력
     * 외부전원이 3.3V~5.5V시 5V핀에서 입력,외부전원이 6V~12V시 VIN핀에서 입력하세요.
     * 5V핀으로 출력하여 외부모듈에 전기를 공급하실 때 100mA보다 작은 전류를 권장합니다.
     * USB로 전원공급을 하실 때 전류가 100mA를 넘으시면 다이오드가 탈수가 있습니다.
   * 타당성/합리성
     * 손 소독시 생기는 문제점 
     
     ![image](https://user-images.githubusercontent.com/42925197/77137204-4903de00-6ab0-11ea-937e-0cba5ad5ad16.png)
       * 누군가 어떤 손으로 만졌을지 모르는 손 세정제의 펌프를 눌러야..
      
       
## 5. 세부 부품 구성 및 가격(구매 시 링크를 누르세요)
    * [[OEM] 초음파 거리센서 모듈 HC-SR04 [SZH-EK004] 1,300원 x 1개](http://www.devicemart.co.kr/goods/view?no=1076851)

   * [[SMG] 아두이노 나노 호환보드 CH340 [SZH-EK025] 4,000원 x 1개](http://www.devicemart.co.kr/goods/view?no=1342039)

   * [[SMG] TowerPro 호환 9g 미니 서보모터 SG-90 1,300원 x  2개](http://www.devicemart.co.kr/goods/view?no=1128421)

   * [[SMG] Snap - 단자 9V DC플러그 타입 [SZH-BH010] 500원 x 1개](http://www.devicemart.co.kr/goods/view?no=1323045)

   * [[OEM] 컬러 미니 브레드보드 170핀 600원 x 1개](http://www.devicemart.co.kr/goods/view?no=1329504)

   * [[KEYES] 4종 점퍼와이어 키트 65PCS/SET [OR0012] 2,000원 x 1개](http://www.devicemart.co.kr/goods/view?no=1329628)

* **총 부품 가격 11,000원으로 장치를 구성할 수 있습니다.**


## 6. Contributer

   
   * 회로 구성 및 프로그램 작성
     * 최준명([jm5901@gmail.com](mailto:jm5901@gmail.com)), 박주영(godoctorsam@gmail.com)   
   * 하우징 제작
     * 홍다영(dyhong.89@gmail.com)
   * 기획 및 총괄
     * 김남국([namkugkim@gmail.com](mailto:namkugkim@gmail.com))
