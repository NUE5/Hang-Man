#pragma once
#include "Animation.h"

class Player :
	public Animation
{
public:
	int x=565, y=600;
	Animation letters[30];
	Animation Wordtoguess[100];
	Animation t[20];
	Animation categ;
	Animation limit;
	Animation hang[10];
	sf::RectangleShape grect;

	Player();
	~Player();
	void draw(sf::RenderWindow &window);
	std::string LoadWord(std::string category);
	
	void drawLevel1(const std::string &s,sf::RenderWindow &window);
	void drawH(sf::RenderWindow &window, int x);
	std::string letterValue(int &n);
	
private:
	
	std::string guessedletter, categstr;
	sf::Texture background;
	sf::Sprite backsprite;
	sf::Texture texture;
	sf::Font font2;

	bool b[30] = { false }, bb[30] = { true };
	std::set<char> wordLength;
};

