#pragma once
#include "graphicElement.h"
#include <string>

using namespace std;
class Window : public GraphicElement
{
protected:
    string header;
public:
    Window();
    Window(string const &owner, unsigned int const sizeGE, string const &header);
    Window(Window const &window);

    void setHeader(string const &header);
    const string& getHeader() const;

    void print();

    Window& operator = (Window const &window);
};
