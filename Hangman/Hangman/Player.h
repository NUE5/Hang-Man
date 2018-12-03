#pragma once
#include "Animation.h"
class Player :
	public Animation
{
public:
	int x=585, y=920;
	Animation letters[30];
	Player(float width, float height);
	~Player();
	void draw(sf::RenderWindow &window);
private:
	
	sf::Texture background;
	sf::Sprite backsprite;
	sf::Texture texture2;
	
};

