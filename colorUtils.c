
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}



// Defining  min(); function

int min(int a,int b ,int c){

if(a<=b && a<=c){
  return a;
}

else if( b<=a && b<=c){
  return b;
}

return c;

}

// Defining toGrayScaleLuminosity(); function

double toGrayScaleLightness(int red, int green, int blue)
{

  
double greyscalevalue = ( max(red,green,blue) + min(red,green,blue) ) / 2;

return greyscalevalue;

}


// Defination of toSepiaRed(); function 

float toSepiaRed(int red,int green,int blue){

float sepiared =  (0.393 * red) + (0.769 * green) + (0.189 * blue);

return sepiared;
}

// Defining toSepiaGreen(); function 

float toSepiaGreen(int red,int green,int blue){

float sepiagreen =  (0.349 * red) + (0.686 * green) + (0.168 * blue);

return sepiagreen;

}




// Defining toSepiaBlue(); function 

double toSepiaBlue(int red,int green,int blue){

double sepiablue =  (0.272 * red) + (0.534 * green) + (0.131 * blue);

return sepiablue;

}