#ifndef IBU_H
#define IBU_H // Prevent multiple inclusions of the header file

class ibu 
{
public :
    string nama ;
     vector <anak *> daftar_anak; // Store pointers to anak objects (children) in a vector

    ibu(string pNama) : nama(pNama)
    {
        cout << "Ibu \"" << nama << "\" ada \n";
    }

    ~ibu()
    {
         cout << "ibu  \" " << nama << "\"  tida ada \n";
    }

    void tambahAnak(anak *);
    void cetakAnak();
};

void ibu::tambahAnak(anak *pAnak)
{