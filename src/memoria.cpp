#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a=5;
    //cout <<&a<< endl;
    /*cout<< sizeof(a) <<endl;
    cout << "Int: " <<sizeof(int) << endl;
    cout << "Long: " <<sizeof(long) << endl;
    cout << "Float: " <<sizeof(float) << endl;
    cout << "Char: " <<sizeof(char) << endl;
    cout << "Booleano: " <<sizeof(bool) << endl;
    cout << "Double: " <<sizeof(double) << endl;*/

   // cout << *(&a) << endl;
    /*cout<< sizeof(a) <<endl;
    cout << "Int: " <<sizeof(int) << endl;
    cout << "Long: " <<sizeof(long) << endl;
    cout << "Float: " <<sizeof(float) << endl;
    cout << "Char: " <<sizeof(char) << endl;
    cout << "Booleano: " <<sizeof(bool) << endl;
    cout << "Double: " <<sizeof(double) << endl;*/
    //offset no. de bytes

    int* direcccion;

    cout << direcccion <<endl;//
    cout << &direcccion <<endl;
    cout << *direcccion <<endl;
    return 0;
}
