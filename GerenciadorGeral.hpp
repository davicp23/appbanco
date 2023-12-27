#ifndef GERENCIADORGERAL_HPP
#define GERENCIADORGERAL_HPP

#include <SFML/Graphics.hpp>
#include <memory>

#include "PaginaInicial.hpp"

class GerenciadorGeral {
public:
    GerenciadorGeral();
    void executar();

private:
    std::shared_ptr<sf::RenderWindow> janela;
    sf::Font fonte;
    std::unique_ptr<sf::Text> texto;

    PaginaInicial paginaInicial;

    const int alturaTela = 800;
    const int larguraTela = 480;

    void inicializar();
    void processarEventos();
    void atualizar();
    void renderizar();
};

#endif 
