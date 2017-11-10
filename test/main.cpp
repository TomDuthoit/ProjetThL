#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>
#include "ParticleSystem.h"
#include "Repere.h"

void DrawRepere(auto window,auto videoMode){
    auto absColor = sf::Color(0, 0, 0, 255);

    sf::Vertex ordone[] =
    {
        sf::Vertex(sf::Vector2f(videoMode.width/2, 0),absColor),
        sf::Vertex(sf::Vector2f(videoMode.width/2, videoMode.height),absColor)
    };

    sf::Vertex absice[] =
    {
        sf::Vertex(sf::Vector2f(0, videoMode.height/2),absColor),
        sf::Vertex(sf::Vector2f(videoMode.width, videoMode.height/2),absColor)
    };


    window->draw(ordone, 2, sf::Lines);
    window->draw(absice, 2, sf::Lines);



}




int main()
{
   
    auto videoMode = sf::VideoMode(512, 256);
    // create the window
    sf::RenderWindow window(videoMode, "Plot");


    // run the main loop
    while (window.isOpen())
    {
        // handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        
        // draw it
        window.clear( sf::Color(255, 255, 255, 255));
        DrawRepere(&window,videoMode);
        window.display();
    }

    return 0;
}
