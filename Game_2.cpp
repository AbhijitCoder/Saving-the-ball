#include "Ball.cpp"
#include "Bat.cpp"
#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;

int main(){
#pragma region VM
    Vector2i resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;
    VideoMode    vm(resolution.x, resolution.y);
    RenderWindow window(vm, "Pong Game", Style::Fullscreen);
#pragma endregion
#pragma region Loading_Assets
    Font font;
    font.loadFromFile("fonts/Chicago.ttf");

    Text messageText;
    messageText.setCharacterSize(50);
    messageText.setFont(font);
    messageText.setFillColor(Color::Cyan);
    messageText.setString("Press Enter to start");
    messageText.setOrigin(messageText.getLocalBounds().width/2,messageText.getLocalBounds().height/2);
    messageText.setPosition(resolution.x/2,resolution.y/2);
#pragma endregion

    Ball ball(resolution.x/2,20,ballRadius);
    Bat bat((resolution.x-batWidth)/2,resolution.y-batheight-20,batWidth,batheight);
    


    

}