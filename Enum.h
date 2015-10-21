#pragma once

enum STATE {INIT,MAIN,PLAY,GAME,EXIT};

STATE mainMenu();

void splash();

void fareTheWell();

int getValidNum(int min, int max);