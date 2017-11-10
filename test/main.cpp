#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>
#include "Repere.h"


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
        Repere r(&window,&videoMode);
        r.drawPoint(10,10);
        window.display();
    }

    return 0;
}
