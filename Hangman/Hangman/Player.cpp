#include "Player.h"



Player::Player(float width, float height)
{
	if (!font.loadFromFile("fonts/SNAP____.ttf"))
	{
		//error
	}
	if (!background.loadFromFile("images/background1.png"))
	{
		//error
	}
	backsprite.setTexture(background);
	
	for (int i=0; i < 27; i++)
	{
		letters[i].rect1.setSize(sf::Vector2f(45,45));
		letters[i].rect1.setFillColor(sf::Color::Transparent);
		//letters[i].rect1.setOutlineColor(sf::Color::Black);
		//letters[i].rect1.setOutlineThickness(2);
	}
	
	letters[0].rect1.setPosition(sf::Vector2f(x - 545,y - 300));
	letters[1].rect1.setPosition(sf::Vector2f(x - 490,y - 300));
	letters[2].rect1.setPosition(sf::Vector2f(x - 430, y - 300));
	letters[3].rect1.setPosition(sf::Vector2f(x - 370, y - 300));
	letters[4].rect1.setPosition(sf::Vector2f(x - 310, y - 300));
	letters[5].rect1.setPosition(sf::Vector2f(x - 250, y - 300));
	letters[6].rect1.setPosition(sf::Vector2f(x - 190, y - 300));
	letters[7].rect1.setPosition(sf::Vector2f(x - 130, y - 300));
	letters[8].rect1.setPosition(sf::Vector2f(x - 70, y - 300));

	letters[9].rect1.setPosition(sf::Vector2f(x - 550, y - 230));
	letters[10].rect1.setPosition(sf::Vector2f(x - 490, y - 230));
	letters[11].rect1.setPosition(sf::Vector2f(x - 430, y - 230));
	letters[12].rect1.setPosition(sf::Vector2f(x - 370, y - 230));
	letters[13].rect1.setPosition(sf::Vector2f(x - 310, y - 230));
	letters[14].rect1.setPosition(sf::Vector2f(x - 250, y - 230));
	letters[15].rect1.setPosition(sf::Vector2f(x - 190, y - 230));
	letters[16].rect1.setPosition(sf::Vector2f(x - 130, y - 230));
	letters[17].rect1.setPosition(sf::Vector2f(x - 70, y - 230));

	letters[18].rect1.setPosition(sf::Vector2f(x - 550, y - 160));
	letters[19].rect1.setPosition(sf::Vector2f(x - 490, y - 160));
	letters[20].rect1.setPosition(sf::Vector2f(x - 430, y - 160));
	letters[21].rect1.setPosition(sf::Vector2f(x - 370, y - 160));
	letters[22].rect1.setPosition(sf::Vector2f(x - 310, y - 160));
	letters[23].rect1.setPosition(sf::Vector2f(x - 250, y - 160));
	letters[24].rect1.setPosition(sf::Vector2f(x - 190, y - 160));
	letters[25].rect1.setPosition(sf::Vector2f(x - 130, y - 160));
	
	letters[0].text.setString("A");
	letters[0].text.setCharacterSize(40);
	letters[0].text.setPosition(sf::Vector2f(x - 545, y - 305));
//	letters[0].text.setFillColor(sf::Color::Blue);
	letters[0].text.setFont(font);

	letters[1].text.setString("B");
	letters[1].text.setCharacterSize(40);
	letters[1].text.setPosition(sf::Vector2f(x - 485, y - 305));
//	letters[1].text.setFillColor(sf::Color::Blue);
	letters[1].text.setFont(font);

	letters[2].text.setString("C");
	letters[2].text.setCharacterSize(40);
	letters[2].text.setPosition(sf::Vector2f(x - 425, y - 305));
//	letters[2].text.setFillColor(sf::Color::Blue);
	letters[2].text.setFont(font);

	letters[3].text.setString("D");
	letters[3].text.setCharacterSize(40);
	letters[3].text.setPosition(sf::Vector2f(x - 365, y - 305)); 
//	letters[3].text.setFillColor(sf::Color::Blue);
	letters[3].text.setFont(font);

	letters[4].text.setString("E");
	letters[4].text.setCharacterSize(40);
	letters[4].text.setPosition(sf::Vector2f(x - 305, y - 305));
//	letters[4].text.setFillColor(sf::Color::Blue);
	letters[4].text.setFont(font);

	letters[5].text.setString("F");
	letters[5].text.setCharacterSize(40);
	letters[5].text.setPosition(sf::Vector2f(x - 245, y - 305));
//	letters[5].text.setFillColor(sf::Color::Blue);
	letters[5].text.setFont(font);

	letters[6].text.setString("G");
	letters[6].text.setCharacterSize(40);
	letters[6].text.setPosition(sf::Vector2f(x - 185, y - 305));
//	letters[6].text.setFillColor(sf::Color::Blue);
	letters[6].text.setFont(font);

	letters[7].text.setString("H");
	letters[7].text.setCharacterSize(40);
	letters[7].text.setPosition(sf::Vector2f(x - 125, y - 305));
//	letters[7].text.setFillColor(sf::Color::Blue);
	letters[7].text.setFont(font);

	letters[8].text.setString("I");
	letters[8].text.setCharacterSize(40);
	letters[8].text.setPosition(sf::Vector2f(x - 65, y - 305));
//	letters[8].text.setFillColor(sf::Color::Blue);
	letters[8].text.setFont(font);

	letters[9].text.setString("J");
	letters[9].text.setCharacterSize(40);
	letters[9].text.setPosition(sf::Vector2f(x - 545, y -235));
//	letters[9].text.setFillColor(sf::Color::Blue);
	letters[9].text.setFont(font);

	letters[10].text.setString("K");
	letters[10].text.setCharacterSize(40);
	letters[10].text.setPosition(sf::Vector2f(x - 485, y - 235));
//	letters[10].text.setFillColor(sf::Color::Blue);
	letters[10].text.setFont(font);

	letters[11].text.setString("L");
	letters[11].text.setCharacterSize(40);
	letters[11].text.setPosition(sf::Vector2f(x - 425, y - 235));
//	letters[11].text.setFillColor(sf::Color::Blue);
	letters[11].text.setFont(font);

	letters[12].text.setString("M");
	letters[12].text.setCharacterSize(40);
	letters[12].text.setPosition(sf::Vector2f(x - 370, y - 235));
//	letters[12].text.setFillColor(sf::Color::Blue);
	letters[12].text.setFont(font);

	letters[13].text.setString("N");
	letters[13].text.setCharacterSize(40);
	letters[13].text.setPosition(sf::Vector2f(x - 310, y - 235));
//	letters[13].text.setFillColor(sf::Color::Blue);
	letters[13].text.setFont(font);

	letters[14].text.setString("O");
	letters[14].text.setCharacterSize(40);
	letters[14].text.setPosition(sf::Vector2f(x - 245, y - 235));
//	letters[14].text.setFillColor(sf::Color::Blue);
	letters[14].text.setFont(font);

	letters[15].text.setString("P");
	letters[15].text.setCharacterSize(40);
	letters[15].text.setPosition(sf::Vector2f(x - 185, y - 235));
//	letters[15].text.setFillColor(sf::Color::Blue);
	letters[15].text.setFont(font);

	letters[16].text.setString("Q");
	letters[16].text.setCharacterSize(40);
	letters[16].text.setPosition(sf::Vector2f(x - 125, y - 235));
//	letters[16].text.setFillColor(sf::Color::Blue);
	letters[16].text.setFont(font);

	letters[17].text.setString("R");
	letters[17].text.setCharacterSize(40);
	letters[17].text.setPosition(sf::Vector2f(x - 65, y - 235));
//	letters[17].text.setFillColor(sf::Color::Blue);
	letters[17].text.setFont(font);

	letters[18].text.setString("S");
	letters[18].text.setCharacterSize(40);
	letters[18].text.setPosition(sf::Vector2f(x - 545, y - 165));
//	letters[18].text.setFillColor(sf::Color::Blue);
	letters[18].text.setFont(font);

	letters[19].text.setString("T");
	letters[19].text.setCharacterSize(40);
	letters[19].text.setPosition(sf::Vector2f(x - 485, y - 165));
//	letters[19].text.setFillColor(sf::Color::Blue);
	letters[19].text.setFont(font);

	letters[20].text.setString("U");
	letters[20].text.setCharacterSize(40);
	letters[20].text.setPosition(sf::Vector2f(x - 425, y - 165));
//	letters[20].text.setFillColor(sf::Color::Blue);
	letters[20].text.setFont(font);

	letters[21].text.setString("V");
	letters[21].text.setCharacterSize(40);
	letters[21].text.setPosition(sf::Vector2f(x - 365, y - 165));
//	letters[21].text.setFillColor(sf::Color::Blue);
	letters[21].text.setFont(font);

	letters[22].text.setString("W");
	letters[22].text.setCharacterSize(40);
	letters[22].text.setPosition(sf::Vector2f(x - 310, y - 165));
//	letters[22].text.setFillColor(sf::Color::Blue);
	letters[22].text.setFont(font);

	letters[23].text.setString("X");
	letters[23].text.setCharacterSize(40);
	letters[23].text.setPosition(sf::Vector2f(x - 245, y - 165));
//	letters[23].text.setFillColor(sf::Color::Blue);
	letters[23].text.setFont(font);

	letters[24].text.setString("Y");
	letters[24].text.setCharacterSize(40);
	letters[24].text.setPosition(sf::Vector2f(x - 185, y - 165));
//	letters[24].text.setFillColor(sf::Color::Blue);
	letters[24].text.setFont(font);

	letters[25].text.setString("Z");
	letters[25].text.setCharacterSize(40);
	letters[25].text.setPosition(sf::Vector2f(x - 125, y - 165));
//	letters[25].text.setFillColor(sf::Color::Blue);
	letters[25].text.setFont(font);

	for (int i = 0; i < 26; i++)
	{

		letters[i].text.setFillColor(sf::Color::Black);
	}

}


Player::~Player()
{
}

void Player::draw(sf::RenderWindow & window)
{
	window.draw(backsprite);
	for (int i = 0; i < 26; i++)
	{
		window.draw(letters[i].rect1);
		window.draw(letters[i].text);
    }
	
}
