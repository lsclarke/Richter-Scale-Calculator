# Richter-Scale-Calculator

_Purpose_
-----------------------------------------------------------------------------------------------------------------
I created this project to learn and have a better understanding of earthquakes. Personally I really love programming! Also I like learning new concepts that can help to better my skills as a developer. Learning to calculate the Richter Scale is a great way to not only know how to implement this calculation into a project, but also to be able to find the necessary data needed to measure the severity of an earthquake. This will also help me to improve my problem solving skills to incorporate real world equations and problems into the **_C++ programming language_**.

_Study Resources_
-----------------------------------------------------------------------------------------------------------------
_USGS.GOV_:
[https://www.usgs.gov/programs/earthquake-hazards/earthquake-magnitude-energy-release-and-shaking-intensity](https://www.usgs.gov/programs/earthquake-hazards/earthquake-magnitude-energy-release-and-shaking-intensity)

_Calculate Richter Scale_:
https://www.youtube.com/watch?v=P7cDoqAspQk

_Richter scale | Logarithms | Algebra II | Khan Academy_:
https://youtu.be/RFn-IGlayAg

_Common Logarithms_
https://www.colonialsd.org/uploaded/Forms_and_Documents/Curriculum/Math/Integrated_Math/Blue_Unit_3/Common_Logarithms.pdf

_Calculate Intensity on Richter Scale_
https://youtu.be/Axc8dS4P4iM

_MAGNITUDE EQUATION_

``` M = log10(I/Io) ```
```
M = Magnitude
I = base intensity
Io = arbitrary zero of the intensity
```

-----------------------------------------------------------------------------------------------------------------
How to calculate the energy of an earthquakes???
-----------------------------------------------------------------------------------------------------------------
_ENERGY EQUATION_

``` logE = 10^.4* 10^4 + 1*5M ```
```
E = Energy
M = Magnitude 
```

- First create a function dedicated to calculating the energy of earthquakes.
- make sure it returns a double or float value!

```double CalculateEnergy(Earthquake* quake);```

- Then set your intensity variable to equal the energy equation above and return the output!

```energy = 10^.4* 10^4 + 1*5M```

-----------------------------------------------------------------------------------------------------------------
How to calculate the difference in intensity between two earthquakes???
-----------------------------------------------------------------------------------------------------------------
_INTENSITY BETWEEN 2 MAGNITUDES EQUATION_

``` log(I1/I2) = M1 - M2 ```
```
M1 = Magnitude #1 , M2 = Magnitude #2
I1 = Intensity #1 , I2 = Intensity #2
```

- First create a function dedicated to calculating the difference in intensity between the two earthquakes.

```double CalculateIntensityDifference(Earthquake* quake1, Earthquake* quake2);```

- Second create a variable that stores the difference between M1 and M2.

```double magnitude_Difference = (quake1->magnitude - quake2->magnitude);```

- Create a variable that stores the difference in intensity, the equation for this is: ```log0.6 = (I1/I2) or 10^0.6 = (I1/I2)```
- this will equal = ```3.98```, so make sure to also round up the value to finalize it.

```double diffIntensity = round(pow(10, magnitude_Difference));```

- Then set the intensity for both earthquakes to equal to output of 

```(diffIntensity / 2)```

- Lastly you’ll return the ```diffIntensity``` and check if the magnitude of earthquake 1 is greater than earthquake 2. If that is the case your output will look like this:

```std::cout <<"Earthquake #1 Intensity:: " << quake1->magnitude << " was approximately " << diffIntensity << " times stronger than Earthquake #2 Intensity:: " << quake2->magnitude << std::endl;``` 

-----------------------------------------------------------------------------------------------------------------
Program Overview
-----------------------------------------------------------------------------------------------------------------

_MAIN METHOD:_
```
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
```

_OUTPUT:_

<img width="1108" height="148" alt="image" src="https://github.com/user-attachments/assets/0f942a0e-6eb1-4f59-bcde-82697ef1c811" />
