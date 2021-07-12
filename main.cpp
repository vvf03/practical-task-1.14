#include <iostream>
#include <fstream>
#include <list>
#include <string>

int main()
{
    std::fstream ifs("C:/Users/Vlad/Documents/untitled2/text", std::ios::in), ofs("C:/Users/Vlad/Documents/untitled2/text2", std::ios::out);

        std::string str;
        std::list<std::string> lst;
        while (std::getline(ifs, str))
        {
            lst.push_front(str);
        }
        for (auto const& str : lst)
        {
            ofs << str << '\n';
        }

    return 0;
}
