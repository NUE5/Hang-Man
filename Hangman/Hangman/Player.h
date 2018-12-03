#pragma once
#include "Animation.h"

class Player :
	public Animation
{
public:
	int x=585, y=920;
	Animation letters[30];
	Animation Wordtoguess[100];
	Animation t[20];
	std::string guessedletter, mustguessed;
	Player(float width, float height);
	~Player();
	void draw(sf::RenderWindow &window);
	std::string LoadWord(std::string category);
	void drawText(const std::string &s,sf::RenderWindow &window);
	std::string letterValue(int &n);

	
private:
	
	sf::Texture background;
	sf::Sprite backsprite;
	sf::Texture texture2;
	
};

