#ifndef PAGINAINICIAL_HPP
#define PAGINAINICIAL_HPP

#include "IPagina.hpp"

class PaginaInicial : public IPagina {
public:
    PaginaInicial();
    
    void inicializar() override;
    void processarEventos(sf::RenderWindow& janela) override;
    void atualizar() override;
    void renderizar(sf::RenderWindow& janela) override;

private:
    sf::Font fonte;
    sf::Text texto;
};

#endif 
