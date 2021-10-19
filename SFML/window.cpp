#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "window");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		while()
		sf::Vertex vertices[] =
		{
    			sf::Vertex ( sf::Vector2f (0, 0), sf::Color::Red , sf::Vector2f (0, 0)),
    			sf::Vertex ( sf::Vector2f (0, 100), sf::Color::Red , sf::Vector2f (0, 10)),
    			sf::Vertex ( sf::Vector2f (100, 100), sf::Color::Red , sf::Vector2f (10, 10)),
    			sf::Vertex ( sf::Vector2f (100, 0), sf::Color::Red , sf::Vector2f (10, 0))
		};
		window.clear(sf::Color::Black);
		window.draw(vertices, 4, sf::Quads);
		window.display();
	}
	return 0;
}
