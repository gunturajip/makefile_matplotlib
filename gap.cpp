#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example.py");
    myfile << "import matplotlib.pyplot as plt\n";
    myfile << "plt.plot([0,1,2,3,4])\n";
    myfile << "plt.show()\n";
    myfile.close();
    return 0;
}
