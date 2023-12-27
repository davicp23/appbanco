#ifndef IPAGINA_HPP
#define IPAGINA_HPP

#include <SFML/Graphics.hpp>

class IPagina {
public:
    virtual ~IPagina() = default;

    virtual void inicializar() = 0;
    virtual void processarEventos(sf::RenderWindow& janela) = 0;
    virtual void atualizar() = 0;
    virtual void renderizar(sf::RenderWindow& janela) = 0;
};

#endif 