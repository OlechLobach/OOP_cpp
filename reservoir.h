#ifndef RESERVOIR_H
#define RESERVOIR_H
#include<iostream>
#include <string>
using namespace std;

class Reservoir {
private:
    string name;
    double width;
    double length;
    double maxDepth;

public:
    explicit Reservoir(const string& nm = "", double w = 0.0, double l = 0.0, double md = 0.0);
    Reservoir(const Reservoir& other);
    ~Reservoir();
    

    double getApproximateVolume() const;
    double getSurfaceArea() const;
    bool isSameType(const Reservoir& other) const;
    bool compareSurfaceArea(const Reservoir& other) const;
    

    
    void setName(const string& nm);
    void setWidth(double w);
    void setLength(double l);
    void setMaxDepth(double md);

    string getName() const;
    double getWidth() const;
    double getLength() const;
    double getMaxDepth() const;
};

#endif 