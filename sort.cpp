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
void BubbleSort(auto& data)
{//function
   bool swapped = true;
   int passes = 0;
   string temp;
   int remainderofpasses;
   
   while (swapped) 
   {//while
   
	   swapped = false;
	   passes++;

	   for(int i = 0; i < data.size() - passes; i++)
       {//for
	     if(data[i] > data[i+1])
	     {//if
		   //swap values
		   temp = data[i];
		   data[i] = data[i+1];
		   data[i+1] = temp;
		   
		   swapped = true;
          }//end if
       }//end for
       
       remainderofpasses = passes%20000;
       
       if(remainderofpasses == 0)
        {//if
	      cout << passes << " passes have been completed, please wait patiently." << endl << endl;
        }//if
        
    }//end while 
}//end function




int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
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
       exit(1);//nothing to do but quit program
  }
 
  cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  
  BubbleSort(inputs);
  cout << "The Sorted Array is: " << endl;
  for (int x = 0; x < inputs.size(); ++x)
  {
	  cout << inputs[x] << " " << endl;
  }
   cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;
    return 0;
}
