#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    
    //creating file mynotes.txt or opening it if exists
    ofstream outputfile("MY_NOTES.txt" , std::ios::app);

    if (!outputfile.is_open())
    {
        cout<<"Error opening file";
        return 1;
    }

    char userinput;
    do
    {
        string s;
        cout<<"write your note here or press (0) to stop :-  "<<endl;
        getline(cin,s);

        if (s == "0")
        {
            break;
        }

        // text modification i am doing for better readibility
        s = "->"+s;
        s = '\n' + s;
        
        outputfile<<s;
        cout<<"file saved!!!"<<endl;

        
        cout<<"Do you want to stop adding note?(y/n)"<<endl;
        getline(cin,s);

        userinput = s.empty() ? 'y' : s[0];
        

        
    }while(userinput != 'y');

    outputfile.close();
    
    
}