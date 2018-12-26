#include "Final.h"



Final::Final()
{
	wintexture.loadFromFile("images/background3.png");
	wintexture2.loadFromFile("images/happy.png");
	losetexture.loadFromFile("images/background3.png");
	losetexture2.loadFromFile("images/HangMan (9).png");
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
	Again.sprite1.setPosition(sf::Vector2f(190,450));
	Again.text.setPosition(sf::Vector2f(220, 480));
	Again.text.setString("PLAY AGAIN");
	Again.text.setFont(font);
	Again.text.setFillColor(sf::Color::Black);
	Again.text.setCharacterSize(25);
	

	win.sprite1.setTexture(wintexture);
	win.sprite2.setTexture(wintexture2);
	win.sprite2.setScale(0.35, 0.35);
//	win.sprite1.scale(sf::Vector2f(1,0.85));
	win.sprite1.setPosition(sf::Vector2f(0, 0));
	win.sprite2.setPosition(sf::Vector2f(420,90));
	lose.sprite1.setTexture(losetexture);
	lose.sprite2.setTexture(losetexture2);
	lose.sprite2.setPosition(sf::Vector2f(320,0));
	//lose.sprite1.scale(sf::Vector2f(1, 0.85));
	lose.sprite1.setPosition(sf::Vector2f(0, 0));


}	  


Final::~Final()
{
}

void Final::drawWin(sf::RenderWindow & window)
{

	window.draw(win.sprite1);
	window.draw(win.sprite2);
	window.draw(Again.sprite1);
	window.draw(Again.text);
}

void Final::drawLose(sf::RenderWindow & window)
{
	
	window.draw(lose.sprite1);
	window.draw(lose.sprite2);
	window.draw(Again.sprite1);
	window.draw(Again.text);
}
