// CalculateRichterScale.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class Earthquake {
public:
    Earthquake(double value) { magnitude = value; }

    double magnitude{};
    double intensity{};
    double energy{};
    Earthquake* quake;
};

//Richter Scale Calculator
namespace rsc {
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
        if (quake1->magnitude > quake2->magnitude)
            std::cout << "Earthquake #1 Intensity:: " << quake1->magnitude << " was approximately " << diffIntensity << " times stronger than Earthquake #2 Intensity:: " << quake2->magnitude << std::endl;

        if (quake1->magnitude < quake2->magnitude)
            std::cout << "Earthquake #2 Intensity:: " << quake2->magnitude << " was approximately " << diffIntensity << " times stronger than Earthquake #1 Intensity:: " << quake1->magnitude << std::endl;

        return diffIntensity;
    }
};

int main()
{
    Earthquake* quake1 = new Earthquake(9.3);
    Earthquake* quake2 = new Earthquake(8.7);

    Earthquake* quake3 = new Earthquake(9);
    Earthquake* quake4 = new Earthquake(6.7);

    Earthquake* quakeEnergy = new Earthquake(9.3);

    rsc::CalculateIntensityDifference(quake1, quake2);
    rsc::CalculateIntensityDifference(quake3, quake4);

    std::cout << "Energy Output:: " << rsc::CalculateEnergy(quake3) << std::endl;

    std::cin.get();
    return 0;
}

