#include "GerenciadorGeral.hpp"
#include <iostream>

GerenciadorGeral::GerenciadorGeral() {
    inicializar();
}

void GerenciadorGeral::inicializar() {
    janela = std::make_shared<sf::RenderWindow>(sf::VideoMode(larguraTela, alturaTela), "App Banco");

    paginaInicial.inicializar();
}

void GerenciadorGeral::executar() {
    while (janela->isOpen()) {
        processarEventos();
        atualizar();
        renderizar();
    }
}

void GerenciadorGeral::processarEventos() {
    sf::Event evento;
    while (janela->pollEvent(evento)) {
        if (evento.type == sf::Event::Closed) {
            janela->close();
        }
    }

    paginaInicial.processarEventos(*janela);
}

void GerenciadorGeral::atualizar() {
    paginaInicial.atualizar();
}

void GerenciadorGeral::renderizar() {
    janela->clear();
    paginaInicial.renderizar(*janela);
    janela->display();
}
