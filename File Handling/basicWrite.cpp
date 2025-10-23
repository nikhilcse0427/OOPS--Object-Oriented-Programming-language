#include<iostream>
#include<fstream>
using namespace std;

int main(){
  //To write into file need to use ofstream class object
  ofstream fout; 
  //If there is file with same name fout.open() will create file then open file, if already there is file it will open file
  fout.open("tempFile.txt");
  // Write into file
  fout<<"Hello World";
  //It will close file and resouce will be released
  fout.close();
  

  return 0;
}
