#include "Final.h"



Final::Final()
{
	if (!wintexture.loadFromFile("images/win.png"))
	{
		//error
	}
	if (!losetexture.loadFromFile("images/lose.png"))
	{
		//error
	}
	if (!pAgain.loadFromFile("images/playagainbutton.png"))
	{
		//error
	}
	if (!font.loadFromFile("fonts/SF.ttf"))
	{
		std::cout << "Error\n";
	}
	if (!font2.loadFromFile("fonts/constanb.ttf"))
	{
		std::cout << "Error\n";
	}

	sf::IntRect pArect(0, 0, 200, 96);
	Again.sprite1.setTexture(pAgain);
	Again.sprite1.setTextureRect(pArect);
	Again.sprite1.setPosition(sf::Vector2f(190,750));
	Again.text.setPosition(sf::Vector2f(220, 780));
	Again.text.setString("PLAY AGAIN");
	Again.text.setFont(font);
	Again.text.setFillColor(sf::Color::Black);
	Again.text.setCharacterSize(25);
	

	win.sprite1.setTexture(wintexture);
	win.sprite1.scale(sf::Vector2f(1,0.85));
	win.sprite1.setPosition(sf::Vector2f(0, 0));

	lose.sprite1.setTexture(losetexture);
	lose.sprite1.scale(sf::Vector2f(1, 0.85));
	lose.sprite1.setPosition(sf::Vector2f(0, 0));


}	  


Final::~Final()
{
}

void Final::drawWin(sf::RenderWindow & window)
{

	window.draw(win.sprite1);
	window.draw(Again.sprite1);
	window.draw(Again.text);
}

void Final::drawLose(sf::RenderWindow & window)
{
	
	window.draw(lose.sprite1);
	window.draw(Again.sprite1);
	window.draw(Again.text);
}
