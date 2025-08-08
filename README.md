# Ricther-Scale-Calculator

_Purpose_
-----------------------------------------------------------------------------------------------------------------
I created this project to learn and have a better understanding of earthquakes. Learning to calculate the Richter Scale is a great way to not only know how to implement this calculation into a project, but also to be able to find the necessary data needed to measure the severity of an earthquake. This will also help me to improve my problem solving skills to incorporate real world equations and problems into C++.

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

_Calculate Intensity on Ricther Scale_
https://youtu.be/Axc8dS4P4iM

_MAGNITUDE EQUATION_

``` M = log10(I/Io) ```
```
M = Magnitude
I = base intensity
Io = arbitrary zero of the intensity
```

# Problem #1! How to calculate the difference in intensity between two earthquakes???

_INTENSITY BETWEEN 2 MAGNITUDES EQUATION_

```
log(I1/I2) = M1 - M2
```
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

```std::cout <<"Earthquake #1 Intensity:: " << quake1->magnitude << " was approximately " << diffIntensity << " times stronger than Earthquake #2 Intensity:: " << quake2->magnitude << std::endl;
``` 


