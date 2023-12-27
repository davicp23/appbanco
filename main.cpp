#include "GerenciadorGeral.hpp"

enum class Estado {
    PaginaInicial,
};

// g++ -o app.exe main.cpp GerenciadorGeral.cpp IPagina.cpp PaginaInicial.cpp -lsfml-graphics -lsfml-window -lsfml-system

int main() {

    GerenciadorGeral app;
    app.executar();

    return 0;
}
