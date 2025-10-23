#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream fout;
  fout.open("temp2.txt");
  fout<<"Hello World 1\n";
  fout<<"Hello World 2\n";
  fout<<"Hello World 3\n";
  fout.close();

  ifstream fin;
  fin.open("temp2.txt");
  string line;
  while(getline(fin, line)){
    cout<<line<<endl;
  }
  fin.close();

  return 0;
}