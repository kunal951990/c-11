#include<iostream>
#include<vector>
using namespace std;

class Mynumber{
private:
    std::vector<int> mvec;
public:
    Mynumber(const std::initializer_list<int> &v)
    {
        for(auto itm:v)
            mvec.push_back(itm);
    }
    void show()
    {
        for(auto itm:mvec)
            cout<<itm<<" ";
    }
};

int main()
{
    Mynumber m={9,12,15,18,21,14,27,30};
    m.show();
    return 0;
}
