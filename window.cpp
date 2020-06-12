#include "window.h"
#include <iostream>

using namespace std;
Window :: Window() : GraphicElement()
{
    this -> header = "UNKNOWN";
}
Window :: Window(string const &owner, unsigned int const sizeGE, string const &header) : GraphicElement(owner, sizeGE)
{
    this -> header = header;
}
Window :: Window(Window const &window) : GraphicElement( window )
{
    this -> header = window.header;
}

void Window :: setHeader(string const &header)
{
    this -> header = header;
}
const string& Window :: getHeader() const
{
    return header;
}

void Window :: print()
{
    cout << "\nOwner: " << this -> owner << "\nSize: " << this -> sizeGE;
    cout << "\nHeader: " << this -> header;
}

Window& Window :: operator = (Window const &window)
{
    this -> owner = window.owner;
    this -> sizeGE = window.sizeGE;
    this -> header = window.header;
    return *this;
}
