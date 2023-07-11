// enum

#include <stdio.h>

enum EGameState {
  GAMESTATE_MAINMENU,
  GAMESTATE_PLAYING,
  GAMESTATE_PAUSED,
  GAMESTATE_GAMEOVER
};

int main() {
  int currState = GAMESTATE_MAINMENU;

  while (true) { // c에서는 while (true) 에러나고 cpp에서는 왜 에러가 안남?
    switch (currState)
    {
    case GAMESTATE_MAINMENU:
      break;
    case GAMESTATE_PLAYING:
      break;
    case GAMESTATE_PAUSED:
      break;
    case GAMESTATE_GAMEOVER:
      break;
    default:
      break;
    }
  }
  
}