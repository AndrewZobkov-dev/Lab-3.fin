#pragma once
#include "graphicElement.h"
#include <string>

using namespace std;
class InputField : public GraphicElement
{
protected:
    string text;
public:
    InputField();
    InputField(string const &owner, unsigned int const sizeGE, string const &text);
    InputField(InputField const &inputField);

    void setText(string const &text);
    const string& getText() const;

    void print();

    InputField& operator = (InputField const &inputField);
};
