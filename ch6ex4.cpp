//chapter 6 exercise 4
//Jenna Busch

#include <iostream>
#include <vector>
using namespace std;

class NameValue
{
  public:       //Access specifier
  int value;    //Attributes
  string name; 

  //constructor
  NameValue(int v, string n)
  {
    value = v;
    name = n;
  }
};

int main() {
  cout << "Enter a name followed by a number. \nTo end your list enter NoName and 0.\n";

  string name; 
  int value; 
  //create vector
  vector<NameValue> data; 

  //loop through their inputs until ended
  while(cin >> name >> value)
  {
    //end loop
   if(name == "NoName" && value == 0)
    {
      break; 
    }

    //check if the name is a duplicate before adding 
    for(int i = 0; i < data.size(); i++)
    {
      if(data[i].name == name)
      {
        cout << "Error: That name has already been entered.\n";
        return 0;
      }
    }

    //add the names and values to vector
    data.push_back(NameValue(value,name));

  }

  //now print out the vector
  cout <<"\nYour list:\n"; 
  for(int i =0; i < data.size(); i++)
  {
    cout << data[i].name << " " << data[i].value << "\n"; 
  }
} 