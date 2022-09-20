#pragma once
#include<iostream>
#include<string>

using namespace std;

class Reservoir
{
    char* name = new char[30];
    double length;
    double width;
    double depth;
    bool isWaterMoving;
public:
    double get_length() const;
    double get_width() const;
    double get_depth() const;
    bool get_isWaterMoving() const;
    void set_lenght(double lenght);
    void set_width(double width);
    void set_depth(double depth);
    Reservoir();
    void set_isWaterMobing(bool isWaterMoving);
    Reservoir(double len, double wid, double dep, bool iwm);
    Reservoir(const Reservoir& object);
    double volume();
    double square();
    string defineType() const;
    void print() const;
};

