// CalculateRichterScale.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Earthquake {

private:
    int _id;
    int nextID = 0;
public:
    Earthquake(double value) 
    { 
        _id = ++nextID;
        magnitude = value; 
    }

    int returnID(){ return _id; }
    double magnitude{};
    double intensity{};
    double energy{};

};

class RichterCalculator {
public:

    /// <summary>
    /// Responsible for calculating the magnitude of earthquakes!
    /// </summary>
    double CalculateEnergy(Earthquake* quake) {

        quake->energy = (2.5 * pow(10, 4)) * pow(10, (1.5 * quake->magnitude));
        return quake->energy;
    }

    /// <summary>
    /// Responsible for calculating the difference in intensity between two earthquakes!
    /// </summary>

    double CalculateIntensityDifference(Earthquake* quake1, Earthquake* quake2) {

        double magnitude_Difference = (quake1->magnitude - quake2->magnitude);

        double diffIntensity = round(pow(10, magnitude_Difference));

        quake1->intensity = quake2->intensity = diffIntensity / 2;

        if(quake1->magnitude > quake2->magnitude)
            std::cout <<"Earthquake #1 Intensity:: " << quake1->magnitude << " was approximately " << diffIntensity << " times stronger than Earthquake #2 Intensity:: " << quake2->magnitude << std::endl;

        if (quake1->magnitude < quake2->magnitude)
            std::cout << "Earthquake #2 Intensity:: " << quake2->magnitude << " was approximately " << diffIntensity << " times stronger than Earthquake #1 Intensity:: " << quake1->magnitude << std::endl;
 
        return diffIntensity;
    }
};

int main()
{
    //Earthquake Class Instance Objects
    Earthquake* quake1 = new Earthquake(9.3);
    Earthquake* quake2 = new Earthquake(8.7);

    Earthquake* quake3 = new Earthquake(9);
    Earthquake* quake4 = new Earthquake(6.7);

    Earthquake* quakeEnergy = new Earthquake(9.3);

    //Ricther Class Instance Object
    RichterCalculator* scale = new RichterCalculator;

    //Calculate the intensity difference
    scale->CalculateIntensityDifference(quake1, quake2);
    scale->CalculateIntensityDifference(quake3, quake4);

    //String output of energy from earthquake 3
    std::cout <<  "Earthquake ID#" << quake3->returnID() << " Energy Output:: " << scale->CalculateEnergy(quake3) << std::endl;

    std::cin.get();
    return 0;
}
