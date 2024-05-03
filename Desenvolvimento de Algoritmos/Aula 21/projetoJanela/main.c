#include <stdlib.h>
#include <iup.h>
#include <stdio.h>

int teste(Ihandle* x){
    Ihandle* nova = IupDialog(IupText(NULL));
    IupShow(nova);
    return 0;
}

int main(int argc, char **argv)
{
    IupOpen(&argc, &argv);

    Ihandle* cxTexto1 = IupText(NULL);
    Ihandle* cxTexto2 = IupText(NULL);
    Ihandle* btnOk = IupButton("Clique Aqui", NULL);
    IupSetCallback(btnOk, "ACTION", teste);

    Ihandle* grupo = IupVbox(cxTexto1, cxTexto2,btnOk, NULL);
    IupSetAttribute(cxTexto1, "EXPAND", "YES");
    IupSetAttribute(cxTexto2, "EXPAND", "YES");
    IupSetAttribute(cxTexto2, "MULTILINE", "YES");
    Ihandle* janela = IupDialog(grupo);
    IupShow(janela);

    IupMainLoop();

    IupClose();
    return EXIT_SUCCESS;
}