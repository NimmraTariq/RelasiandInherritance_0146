#include <iostream> // Include standard input/output stream
#include <vector>
using namespace std;

#include "Anak.h" // Include child class definition
#include "ibu.h"   // Include parent (mother) class definition

int main()
{

    ibu  *varIbu = new ibu ("dini"); // Create ibu object 'dini' dynamically
    ibu  *varIbu2 = new ibu ("novi");
    anak *varAnak1 = new anak ("tono");
    anak *varAnak2 = new anak ("rini");
    anak *varAnak3 = new anak ("Dewi");

    varIbu->tambahAnak (varAnak1);
     varIbu->tambahAnak (varAnak2); // Add anak objects to ibu 'dini'
    varIbu2->tambahAnak (varAnak3);
     varIbu2->tambahAnak (varAnak1); // Demonstrate one child can have multiple mothers

    varIbu->cetakAnak();
     varIbu2->cetakAnak(); // Print list of children for each ibu

    delete varIbu;
    delete varIbu2;
    delete varAnak1; // Clean up dynamically allocated memory to avoid memory leaks
    delete varAnak2;
    delete varAnak3;

    system ("pause");
     
    return 0;
}