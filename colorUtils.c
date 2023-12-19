
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