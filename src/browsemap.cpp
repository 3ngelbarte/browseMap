#include	"browsemap.hpp"

int		main()
{
  sf::RenderWindow window(sf::VideoMode(900, 900), "browseMap");
  sf::RectangleShape grass(sf::Vector2f(100, 100));
  sf::RectangleShape water(sf::Vector2f(100, 100));

  grass.setFillColor(sf::Color(0,200,0));
  water.setFillColor(sf::Color(0,0,200));
  while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
        {
	  if (event.type == sf::Event::Closed)
	    window.close();
        }
      window.clear();
      window.display();
    }
  return 0;
}
