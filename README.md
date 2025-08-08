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

_Calculate Intensity_
https://youtu.be/Axc8dS4P4iM

_MAGNITUDE EQUATION_

``` M = log10(I/Io) ```
```
M = Magnitude
I = base intensity
Io = arbitrary zero of the intensity
```

# Problem #1! How to calculate the intensity between two earthquakes???

_INTENSITY BETWEEN 2 MAGNITUDES EQUATION_

```
log(I1/I2) = M1 - M2
```
```
M1 = Magnitude #1 , M2 = Magnitude #2
I1 = Intensity #1 , I2 = Intensity #2
```
```
- First create a function dedicated to calculating the difference in intensity between the two earthquakes

```double CalculateIntensityDifference(Earthquake* quake1, Earthquake* quake2);```

Second create a variable that stores the difference between M1 and M2

```double magnitude_Difference = (quake1->magnitude - quake2->magnitude);```

```

