#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> listFromString(string input);

int main()
{
    string input;
    vector <string> inventory;

    cout<<"What's in the store (separate items by commas)? ";
    getline(cin,input);

    inventory = listFromString(input); //TODO: Write this function!

    cout<<inventory.size()<<" items in inventory.\n";
    for(int i=0; i<inventory.size(); i++)
    {
        cout<<inventory.at(i)<<endl;
    }

    return 0;
}
   vector<string> listFromString(string input)
{
        vector<string> list;
        
        string word;
    for( int i=0; i < input.size(); i++ )
    {
            if( input[i] != ',')
            {

                word.append(1, input[i]);
                
            }
            else
            {
                list.push_back(word);
                        word="";
            }
           
    }
   
    list.push_back(word);
    return list;
}
