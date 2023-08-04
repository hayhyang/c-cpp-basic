// struct
// class
// 차이점
// c++에서 객체지향 프로그램 패러다임을 추구, c 언어에서의 struct와 가장 큰 차이점이 class
// 클래스 = 자료 저장 + 자료 처리 = 변수 + 함수,
// 클래스(타입): 특정한 용도를 수행하기 위한 변수와 함수를 모아놓은 틀(자료형)
// 객체(오브젝트): 그 틀을 이용하여 찍어낸 개체(변수, 메모리 상의 공간)

#include <iostream>

using namespace std;

// 접근제어 지시자: private, public, protected

struct TV {
private: 
  bool powerOn;
  int channel;
  int volume;

public:
  void on() {
    powerOn = true;
    cout << "TV를 켰습니다." << endl;
  }

  void off() {
    powerOn = false;
    cout << "TV를 껐습니다." << endl;
  }

  void setChannel(int chn) {
    if(chn >= 1 && chn <= 999) {
      channel = chn;
      cout << "채널을" << chn << "로 바꿨습니다." << endl;
    }
  }

  void setVolume(int vol) {
    if(vol >= 0 && vol <= 100) {
      volume = vol;
      cout << "볼륨을" << vol << "로 바꿨습니다." << endl;
    }
  }
};

// 내부 속성을 보호하면서 외부에서 속성들에 접근할 수 있는 인터페이스를 만들어주는 것 : 캡슐화

int main() {
  TV lg;
  lg.on();
  lg.setChannel(10);
  lg.setVolume(50);
  lg.off();
}

// struct에서는 접근제어지시자 표시가 없으면 default로 public속성이된다.
// class에서는 반대