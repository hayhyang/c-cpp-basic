// switch 
// if문을 완벽하게 대체할 수 있다.
// goto는 유용하지만 세개 이상 사용할 경우 코드가 꼬여 스파게티 코드가 된다.
// 대체할 수 있는 방법은 추후에 나오므로 그걸 사용하면 됨

#include <stdio.h>

int main() {
  int choice;

  makeChoice:

  printf("새 게임: 1 \n");
  printf("불러오기: 2 \n");
  printf("설정: 3 \n");
  printf("크레딧: 4 \n");

  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("새 게임\n");
    break; // 중괄호 밖으로 즉시 나간다. 없으면 다음 case로 넘어감
  case 2:
    printf("불러오기\n");
    break;
  case 3:
    printf("설정");
    break;
  case 4:
    printf("크레딧\n");
    break;
  default: // 나머지 경우를 처리
    printf("잘못 입력하셨습니다.\n");
    goto makeChoice;
    break;
  }

  if(choice == 1) {
    printf("새 게임\n");
  } else if (choice == 2) {
    printf("불러오기\n");
  } else if (choice == 3) {
    printf("설정");
  } else if(choice == 4){
    printf("크레딧\n");
  } else {

    printf("잘못 입력하셨습니다.\n");
  }
}