#ifndef ANAK_H
#define ANAK_H // Prevent multiple inclusions of the header file

class anak 
{
public :
    string nama ; // Declare public member variable to store the child's name

    anak(string pNama) : nama(pNama) // Constructor initializes 'nama' using initialization list
    {
        cout << "Anak\"" << nama << "\" ada \n"; // Print message when anak object is created
    }

    ~anak()
     {
         cout << "Anak \" " << nama << "\"  tida ada \n"; // Print message when anak object is destroyed
    }
};

#endif