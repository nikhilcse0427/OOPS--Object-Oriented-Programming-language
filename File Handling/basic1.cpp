#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of an arr: ";
  cin>>n;
  vector<int> v(n);
  cout<<"Enter elements of v: \n";
  int i = 0;
  int t = n;
  while(t){
    cin>>v[i++];
    t--;
  }
  cout<<"Elements of v are: \n";
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }

  ofstream fout;
  fout.open("temp2.txt");
  for(int i=0;i<n;i++){
    fout<<v[i]<<" ";
  }
  fout.close();

  return 0;
}