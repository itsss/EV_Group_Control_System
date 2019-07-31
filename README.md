# E/V Group Control System(E/V 군관리 시스템)
> **E/V 군관리 시스템**<br>
> Taewon Kang<br>
> 2013.12. - 2014.07.15.<br>

Contact: Taewon Kang (itschool@itsc.kr)

## Description (Korean)
### 내부 조작반 기능: 내부에서 층을 클릭 시 목적 층으로 가는 기능
1. 운행 중에는 버튼이 활성화되지 않음.
2. 엘리베이터를 서버 프로그램으로 원격 조종 가능
3. 서버 프로그램은 옵션임.
4. 그룹으로 선택할 수 있어 동시에 엘리베이터를 제어할 수 있음.
5. 엘리베이터를 서버 DB에 저장해서 운행기록을 확인할 수 있음. (서버 프로그램은 옵션임)
6. 빌딩의 전기료를 차등관리하여 더 효율적으로 전기를 이용하도록 할 수 있음.

### 군관리 기능
1. 중도에 서비스 엘리베이터가 변경되지 않음.
2. 에너지 절약을 위해 홀 버튼을 클릭한 층보다 위에 있는 엘리베이터가 우선적으로 선택됨. (아래 층에 있는 엘리베이터가 더 가까운 경우에는 예외임)
3. 에너지 감소와 더불어 실생활에 적용시 전기회생장치 (ex : O사의 ReGen 드라이브)를 적용하면 전기를 더 많이 생산할 수 있음.

### 장애인용 군관리
1. 일반 엘리베이터와 분리된 버튼이 있어 장애인이 편하게 이용할 수 있도록 만든 부분임. (원활한 서비스를 위해 군관리에서는 장애인용 엘리베이터도 군관리 그룹에 추가됨)
2. 주차권 발행기와 이 시스템이 연동되어, 차량이 주차장에 진입 후 일정 시간이 지나면 자동으로 엘리베이터가 호출됨.

## Usage
### Client
Execute `EV 군관리 시스템.exe`.

### Server
Execute `EV 군관리 시스템.exe` in `EV 군관리 시스템 서버`.
