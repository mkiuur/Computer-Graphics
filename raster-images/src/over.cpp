#include "over.h"

void over(
  const std::vector<unsigned char> & A,
  const std::vector<unsigned char> & B,
  const int & width,
  const int & height,
  std::vector<unsigned char> & C)
{
  C.resize(A.size());
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  
  //References:
  //https://en.wikipedia.org/wiki/Alpha_compositing
  //http://ssp.impulsetrain.com/porterduff.html
  
  for(int i=0;i<width*height;i++){

    double Aa = (double)A.at(4*i+3)/255;  //extract alphaA value
    double Ba = (double)B.at(4*i+3)/255;  //extract alphaB value
    
    //Co = (Ca*alphaA + Cb*alphaB(1-alphaA)) / (alphaA + alphaB*(1-alphaA))
    double pa = Aa+(1-Aa)*(Ba);             //calculate denominator
    
    //assign C values
    C.at(4*i)=((Aa*A.at(4*i))+(1-Aa)*Ba*B.at(4*i))/pa;  //Cr
    C.at(4*i+1)=((Aa*A.at(4*i+1))+(1-Aa)*Ba*B.at(4*i+1))/pa;  //Cg
    C.at(4*i+2)=((Aa*A.at(4*i+2))+(1-Aa)*Ba*B.at(4*i+2))/pa;  //Cb
    C.at(4*i+3)=pa*255;
    
  }
  
  ////////////////////////////////////////////////////////////////////////////
}
