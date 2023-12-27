#include "PaginaInicial.hpp"
#include <iostream>

PaginaInicial::PaginaInicial() {
    // Inicialize membros da classe, se necessário
    inicializar();
}


void PaginaInicial::inicializar() {
    if (!fonte.loadFromFile("arial.ttf")) {
        std::cerr << "Erro ao carregar a fonte\n";
    }

    texto.setFont(fonte);
    texto.setString("Página Inicial");
    texto.setPosition(200, 200);
}


void PaginaInicial::processarEventos(sf::RenderWindow& janela) {
    sf::Event evento;
    while (janela.pollEvent(evento)) {
        if (evento.type == sf::Event::Closed) {
            janela.close();
        } else if (evento.type == sf::Event::MouseButtonPressed && evento.mouseButton.button == sf::Mouse::Left) {
            // Lógica para lidar com clique na página inicial
        }
    }
}

void PaginaInicial::atualizar()
{
}

void PaginaInicial::renderizar(sf::RenderWindow& janela) {
    janela.draw(texto);
}
