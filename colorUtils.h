/**
 * A collection of utility functions to manipualte RGB
 * values of an image
 */

/**
 * Scales the given rgb integer component (on the
 * scale [0, 255]) to a floating point number on the
 * scale [0, 1].
 *
 * Note: this function is only included to demonstrate
 * how to unit test floating point values.  See the
 * colorUtilsTester.c for more.
 */
double rgbIntToFloat(int c);

/**
 * Returns the maximum value among the three
 * given integer values.
 */
int max(int x, int y, int z);

/**
 * Returns a gray-scaled RGB value of the three
 * given RGB values using the average technique.
 *
 */
int toGrayScaleAverage(int r, int g, int b);

// Defining  min(); function

int min(int a,int b ,int c);

/**
 "lightness" technique and its function prototyp.

 Defining toGrayScaleLuminosity(); function and its prototype.
*/
double toGrayScaleLightness(int red, int green, int blue);

// Defination of toSepiaRed(); function and its prototype.

float toSepiaRed(int red,int green,int blue);

// Defining toSepiaGreen(); function  and its function prototype.

float toSepiaGreen(int red,int green,int blue);


// Defining toSepiaBlue(); function and its prototype.

double toSepiaBlue(int red,int green,int blue);