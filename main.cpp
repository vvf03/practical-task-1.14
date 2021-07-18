#include <iostream>
#include <fstream>
#include <list>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    string ifs;
    string ofs;
    string str;
    list<string> lst;

    //запрос пути к считываемому файлу
    if (argc==2)
    {
        ifs=argv[1];
    }
    else
    {
        cout<<"Enter path to file"<<endl;
        cin>>ifs;
    }

    if (argc==3)
    {
        ofs=argv[2];
    }
    else
    {
        cout<<"Enter path from file"<<endl;
        cin>>ofs;
    }

        fstream in;
        in.open(ifs);
        while (getline(in, str))
        {
            lst.push_front(str);
        }
        for (auto const& str : lst)
        {
            cout<<str<<'\n';
        }
        in.close();

        cout<<" "<<endl;
        ofstream out;
        out.open(ofs);
        while (getline(in, str))
        {
            lst.push_front(str);
        }
        for (auto const& str : lst)
        {
            cout<<str<<'\n';
        }
        out.close();
    return 0;
}
