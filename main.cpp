#include <iostream>
#include "graphicElement.h"
#include "window.h"
#include "button.h"
#include "buttonWithImage.h"
#include "inputField.h"
using namespace std;

int main()
{

    Button b;
    b.setTitle("Title");
    Button b2(b);
    cout << "\n b \n";
    b.print();
    cout << endl;
    b2.print();
    cout << endl;
    ButtonWithImage bwi( "Ownet", 100, "Title", "Picture" );
    cout << "\n bwi \n";
    bwi.print();
    cout << endl;
    InputField IF;
    cout << "\nInputField\n" << IF.getOwner() << "\n " << IF.getSizeGE() << "\n" << IF.getText() << endl;
    Window w;
    Window w2("owner", 2, "LoL");
    w = w2;
    cout << "\n w \n";
    w.print();

    return 0;
}
