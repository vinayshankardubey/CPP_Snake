#include <iostream>

//Variables
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;

enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};

eDirection dir;

//Functions

void Setup(){

gameOver = false;
dir = STOP;
x = width / 2;
y = height / 2;
fruitX = rand() % width;
fruitY = rand() % height;
score = 0;

}

void Draw(){

system("cls");
for(int i = 0; i < width; i++)
 std::cout << "#";
 
}


void Input(){

}

void Login(){

}

int main() {
  std::cout << "Hello World!\n";
}