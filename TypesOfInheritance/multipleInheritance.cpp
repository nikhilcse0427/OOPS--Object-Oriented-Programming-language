// Teacher & Researcher → Professor
// Create a program using multiple inheritance where:
// Class Teacher stores subject and experience.
// Class Researcher stores research area and number of publications.
// Class Professor inherits from both and displays all details.

#include<iostream>
using namespace std;

class Teacher{
  protected:
    string subject;
    int experience;

  public:
    Teacher(string subject, int experience){
      this->subject = subject;
      this->experience = experience;
    }
};

class Researcher{
  protected:
    string researchArea;
    int numOfPublication;

  public:
    Researcher(string researchArea, int numOfPublication){
      this->researchArea = researchArea;
      this->numOfPublication = numOfPublication;
    }
};

class Professor: private Teacher, private Researcher{ //order matter whose constructor will run first
  public:
    Professor(string subject, int experience, string researchArea, int numOfPublication):Teacher(subject, experience), Researcher(researchArea, numOfPublication){
      
    }

    void display(){
      cout<<subject<<" "<< experience<<" "<<researchArea<<" "<<numOfPublication<<endl;
    }
};

int main(){
  Professor p1("CPP", 8, "OOPS", 18);
  p1.display();
  return 0;
}