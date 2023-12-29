#include "reservoir.h"



Reservoir::Reservoir(const string& nm, double w, double l, double md)
    : name(nm), width(w), length(l), maxDepth(md) {}

Reservoir::Reservoir(const Reservoir& other)
    : name(other.name), width(other.width), length(other.length), maxDepth(other.maxDepth) {}

Reservoir::~Reservoir() {}



double Reservoir::getApproximateVolume() const {
    return width * length * maxDepth;
}

double Reservoir::getSurfaceArea() const {
    return width * length;
}

bool Reservoir::isSameType(const Reservoir& other) const {
    return getSurfaceArea() == other.getSurfaceArea();
}

bool Reservoir::compareSurfaceArea(const Reservoir& other) const {
    return getSurfaceArea() > other.getSurfaceArea();
}





void Reservoir::setName(const std::string& nm) {
    name = nm;
}

void Reservoir::setWidth(double w) {
    width = w;
}

void Reservoir::setLength(double l) {
    length = l;
}

void Reservoir::setMaxDepth(double md) {
    maxDepth = md;
}

std::string Reservoir::getName() const {
    return name;
}

double Reservoir::getWidth() const {
    return width;
}

double Reservoir::getLength() const {
    return length;
}

double Reservoir::getMaxDepth() const {
    return maxDepth;
}