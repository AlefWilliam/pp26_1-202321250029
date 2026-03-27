#include "Livro.h"
#include "Revista.h"
#include "PublicacaoImplBD.h"
#include "PublicacaoImplXML.h"

int main() {

    Implementador* implBD = new PublicacaoImplBD();
    Implementador* implXML = new PublicacaoImplXML();

    Publicacao* livro = new Livro(implBD);
    Publicacao* revista = new Revista(implXML);

    livro->obterDados("Livro");
    livro->getTitulo();
    livro->getAutor();

    cout << "------------------" << endl;

    revista->obterDados("Revista");
    revista->getTitulo();
    revista->getAutor();

    return 0;
}
