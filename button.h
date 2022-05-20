//
// Created by rrivas on 18/05/2022.
//

#ifndef PATRONES_BUTTON_H
#define PATRONES_BUTTON_H

#include "componente.h"
#include "render.h"
#include "SFML/Graphics.hpp"

class button_t: public componente_t {
public:
    using componente_t::componente_t;
    void draw() {
        auto& canvas = render<sf::RenderWindow>::get_instance()->get();
        sf::RectangleShape shape({width, height});
        shape.setPosition(x, y);
        shape.setFillColor(sf::Color::Red);
        canvas->draw(shape);
    }

};


#endif //PATRONES_BUTTON_H
