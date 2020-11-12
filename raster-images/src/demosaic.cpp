#include "demosaic.h"

void demosaic(
  const std::vector<unsigned char> & bayer,
  const int & width,
  const int & height,
  std::vector<unsigned char> & rgb)
{
  rgb.resize(width*height*3);
  for(int i=0;i<height;i++){
    for(int j=0;j<width;j++){
      if(i%2==0){
        if(j%2==0){ //GREEN BLOCK - blue row
          rgb.at((3*(i*width+j))+1)=bayer.at(i*width+j);
          
          //corners
          
          if(i==0&&j==0){ //top right
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j+width);
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j+1);
          }
          else if(i==0&&j==width-1){ //top left
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j+width);
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j-1);
          }
          else if(i==height-1&&j==0){ //bottom right
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j-width);
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j+1);
          }
          else if(i==height-1&&j==width-1){ //bottom left
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j-width);
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j-1);
          }
          
          //edges
          
          else if(i==0){//top row
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j+width);
            rgb.at((3*(i*width+j))+2)=(bayer.at(i*width+j-1)
                                           +bayer.at(i*width+j+1))/2;
            }
          else if(i==height-1){//bottom row
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j-width);
            rgb.at((3*(i*width+j))+2)=(bayer.at(i*width+j-1)
                                           +bayer.at(i*width+j+1))/2;
            }
          else if(j==0){ //left column
            rgb.at((3*(i*width+j)))=(bayer.at(i*width+j+width)
                                       +bayer.at(i*width+j-width))/2;
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j+1);
          }
          else if(j==width-1){  //right column
            rgb.at((3*(i*width+j)))=(bayer.at(i*width+j+width)
                                       +bayer.at(i*width+j-width))/2;
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j-1);
          }
          
          //middle
          
          else{
            rgb.at((3*(i*width+j))+2)=(bayer.at(i*width+j-1)
                                         +bayer.at(i*width+j+1))/2;
            rgb.at((3*(i*width+j)))=(bayer.at(i*width+j-width)
                                         +bayer.at(i*width+j+width))/2;
          }
        }
        else{ //BLUE BLOCK
          rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j);
          
          //corners
          
          if(i==0&&j==width-1){
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j+width-1);
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-1)
                                         +bayer.at(i*width+j+width))/2;
          }
          else if(i==height-1&&j==width-1){
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j-width-1);
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-1)
                                         +bayer.at(i*width+j-width))/2;
          }
          
          //edges
          
          else if(i==0){
            rgb.at((3*(i*width+j)))=(bayer.at(i*width+j+width-1)
                                         +bayer.at(i*width+j+width+1))/2;
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-1)
                                         +bayer.at(i*width+j+1)
                                         +bayer.at(i*width+j+width))/3;
          }
          else if(i==height-1){
            rgb.at((3*(i*width+j)))=(bayer.at(i*width+j-width-1)
                                       +bayer.at(i*width+j-width+1))/2;
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-1)
                                       +bayer.at(i*width+j+1)
                                       +bayer.at(i*width+j-width))/3;
          }
          else if(j==width-1){
            rgb.at((3*(i*width+j)))=(bayer.at(i*width+j-width-1)
                                       +bayer.at(i*width+j+width-1))/2;
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-1)
                                       +bayer.at(i*width+j+width-1)
                                       +bayer.at(i*width+j-width-1))/3;
          }
          
          //middle
          
          else{
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-1)
                                         +bayer.at(i*width+j+1)
                                         +bayer.at(i*width+j+width)
                                         +bayer.at(i*width+j-width))/4;
            rgb.at((3*(i*width+j)))=(bayer.at(i*width+j-width-1)
                                         +bayer.at(i*width+j-width+1)
                                         +bayer.at(i*width+j+width-1)
                                         +bayer.at(i*width+j+width+1))/4;
          }
        }
      }
      else{
        if(j%2==0){//RED BLOCK
          rgb.at((3*(i*width+j)))=bayer.at(i*width+j);
          
          //corners
          
          if(i==height-1&&j==0){
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-width)
                                         +bayer.at(i*width+j+1))/2;
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j-width+1);
          }
          else if(i==height-1&&j==width-1){
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-width)
                                         +bayer.at(i*width+j-1))/2;
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j-width-1);
          }
          
          //edges
          
          else if(i==height-1){
            rgb.at((3*(i*width+j))+2)=(bayer.at(i*width+j-width-1)
                                       +bayer.at(i*width+j-width+1))/2;
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-1)
                                       +bayer.at(i*width+j+1)
                                       +bayer.at(i*width+j-width))/3;
          }
          else if(j==0){
            rgb.at((3*(i*width+j))+2)=(bayer.at(i*width+j+width+1)
                                         +bayer.at(i*width+j-width+1))/2;
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j+1)
                                         +bayer.at(i*width+j-width+1)
                                         +bayer.at(i*width+j+width+1))/3;
          }
          else if(j==width-1){
            rgb.at((3*(i*width+j))+2)=(bayer.at(i*width+j+width-1)
                                         +bayer.at(i*width+j-width-1))/2;
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-1)
                                         +bayer.at(i*width+j-width-1)
                                         +bayer.at(i*width+j+width-1))/3;
          }
          
          //middle
          
          else{
            rgb.at((3*(i*width+j))+1)=(bayer.at(i*width+j-1)
                                         +bayer.at(i*width+j+1)
                                         +bayer.at(i*width+j+width)
                                         +bayer.at(i*width+j-width))/4;
            rgb.at((3*(i*width+j))+2)=(bayer.at(i*width+j-width-1)
                                         +bayer.at(i*width+j-width+1)
                                         +bayer.at(i*width+j+width-1)
                                         +bayer.at(i*width+j+width+1))/4;
          }
        }
        else{//GREEN BLOCK - red row
          rgb.at((3*(i*width+j))+1)=bayer.at(i*width+j);
          
          //corners
          
          if(i==height-1&&j==width-1){
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j-width);
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j-1);
          }
          
          //edges
          
          else if(i==height-1){
            rgb.at((3*(i*width+j)))=(bayer.at(i*width+j-1)
                                       +bayer.at(i*width+j+1))/2;
            rgb.at((3*(i*width+j))+2)=bayer.at(i*width+j-width);
          }
          else if(j==width-1){
            rgb.at((3*(i*width+j)))=bayer.at(i*width+j-1);
            rgb.at((3*(i*width+j))+2)=(bayer.at(i*width+j+width)
                                         +bayer.at(i*width+j-width))/2;
          }
          
          //middle
          
          else{
            rgb.at((3*(i*width+j)))=(bayer.at(i*width+j-1)
                                       +bayer.at(i*width+j+1))/2;
            rgb.at((3*(i*width+j))+2)=(bayer.at(i*width+j-width)
                                       +bayer.at(i*width+j+width))/2;
          }
        }
      }
    }
  }
}
