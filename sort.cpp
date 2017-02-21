#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/

void InsertionSort(auto &data);


int main()
{
  vector<string> inputs;
  string search_key, input;
 

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit programs
  }
 
  
	InsertionSort(inputs);    
for(size_t i=0; i < inputs.size(); i++){
cout << inputs[i] << endl ;  
}	

}



void InsertionSort(auto &data){
int c = 0;
for(size_t i=0;i < data.size()-1;i++){

int j = i +1; // inserting element

while(j > 0 && data[j-1] > data[j]){
swap(data[j],data[j-1]);
j=j-1;
		}
	
c++;
if(c == 20000){
cout << i + 1 << " passes completed"<< endl;
c = 0;
i-1;
}
}

}

