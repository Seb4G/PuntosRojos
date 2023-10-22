#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

Texture textura;
Texture textura2;
Texture textura3;
Texture textura4;
Sprite sprite;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;

int main() {

    textura.loadFromFile("rcircle.png");
    sprite.setTexture(textura);
    sprite.setPosition(675, 475);

    textura2.loadFromFile("rcircle.png");
    sprite2.setTexture(textura2);
    sprite2.setPosition(0, 0);

    textura3.loadFromFile("rcircle.png");
    sprite3.setTexture(textura3);
    sprite3.setPosition(675, 0);

    textura4.loadFromFile("rcircle.png");
    sprite4.setTexture(textura4);
    sprite4.setPosition(0, 475);

    RenderWindow Ventana(VideoMode(800, 600), "Puntos rojos");

    while (Ventana.isOpen()) {

        Ventana.clear();

        Ventana.draw(sprite);
        Ventana.draw(sprite2);
        Ventana.draw(sprite3);
        Ventana.draw(sprite4);

        Ventana.display();
    }
    return 0;
}
