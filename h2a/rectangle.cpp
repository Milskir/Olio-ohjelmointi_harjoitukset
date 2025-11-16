#include "rectangle.h"

Rectangle::Rectangle()
    : width(0.0), height(0.0)
{
}

double Rectangle::getArea() const
{
    return width * height;
}

double Rectangle::getCircum() const
{
    return 2 * (width + height);
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}
