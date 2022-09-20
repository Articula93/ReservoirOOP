#include"Reservoir.h"

double Reservoir::get_length() const
{
    return length;
}
double Reservoir::get_width() const
{
    return width;
}
double Reservoir::get_depth() const
{
    return depth;
}
bool Reservoir::get_isWaterMoving() const
{
    return isWaterMoving;
}
void Reservoir::set_lenght(double lenght)
{
    this->length = lenght;
}
void Reservoir::set_width(double width)
{
    this->width = width;
}
void Reservoir::set_depth(double depth)
{
    this->depth = depth;
}
void Reservoir::set_isWaterMobing(bool isWaterMoving)
{
    this->isWaterMoving = isWaterMoving;
}
Reservoir::Reservoir()
{
}
Reservoir::Reservoir(double len, double wid, double dep, bool iwm)
{
    length = len;
    width = wid;
    depth = dep;
    isWaterMoving = iwm;
}
Reservoir::Reservoir(const Reservoir& object)
{
    this->length = object.length;
    this->width = object.width;
    this->depth = object.depth;
    this->isWaterMoving = object.isWaterMoving;
}
double Reservoir::volume()
{
    double result;
    result = length * width * depth;
    return result;

}
double Reservoir:: square()
{
    return length * width;
}
string Reservoir::defineType() const
{
    if ((length < 12.0) && (width < 8.0) && (depth < 3.0) && (!isWaterMoving)) return "Пруд";
    if ((length > 12.0 && length < 25.0) && (width > 8.0 && width < 12.0) && (depth > 3.5 && depth < 10.0) &&
        (!isWaterMoving))return "Бассейн";
    if ((length > 50.0 && length < 550.0) && (width > 30.0 && width < 300.0) && (depth > 11.0 && depth < 25.0) &&
        (!isWaterMoving))return "Озеро";
    if ((length > 5000.0 && length < 60000.0) && (width > 300.0 && width < 2000.0) && (depth > 50.0 && depth < 90.0) &&
        (isWaterMoving == true))return "Река";
    if ((length > 60000.0 && length < 100000.0) && (width > 3000.0 && width < 60000.0) && (depth > 250.0 && depth < 1250.0) &&
        (isWaterMoving == true))return "Море";
    if ((length > 600000.0 && length < 170000000.0) && (width > 300000.0 && width < 15000000.0) && (depth > 1350.0 && depth < 11000.0) &&
        (isWaterMoving == true))return "Океан";
}
void Reservoir::print() const
{

}