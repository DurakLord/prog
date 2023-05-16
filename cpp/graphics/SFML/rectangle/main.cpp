#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>



int main(void){
    float c = 0.0, b = 0.5;
    long int a = 0;
    sf::RenderWindow window;
    sf::Texture image;
    image.loadFromFile("/home/farid/Downloads/rem.png");
    sf::RectangleShape rectangle(sf::Vector2f(400.f, 700.f));
    rectangle.setTexture(&image);
    window.create(sf::VideoMode(700, 800, 64), "Hello", sf::Style::Default);
    window.setFramerateLimit(60);
    sf::CircleShape triangle(100.f, 3);
    triangle.setOutlineThickness(8);
    triangle.setOutlineColor(sf::Color::Yellow);
    triangle.setFillColor(sf::Color::Red);
    triangle.setPosition(100.f, 100.f);
    sf::Event event;
    while(window.isOpen()){
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed)
            window.close();
        }
        window.clear(sf::Color::Blue);
        window.draw(triangle);
        window.draw(rectangle);
        window.display();
    }
}