// sfml_actions_test.cpp : Defines the entry point for the application.
//

#include <SFML/Graphics.hpp>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    sf::CircleShape circle(100);
    circle.setPosition(200, 150);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Clear screen
        window.clear();
        // Draw the sprite
        window.draw(circle);
        // Update the window
        window.display();
        window.close();
    }
    return EXIT_SUCCESS;
}