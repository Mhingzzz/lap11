
#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    ifstream score("score.txt");
    string te;
    double sum,sum2;
    int i = 0;
    while (getline(score,te))
    {

        sum += stod(te);
        sum2 += pow(stod(te),2);
        i++;
    }
    
    double mean,divi;
    mean = sum / i;
    divi = sqrt((sum2/i)-(pow(mean,2)));   

    cout << "Number of data = "<<i <<endl;
    cout << setprecision(3);
    cout << "Mean = "<<mean <<endl;
    cout << "Standard deviation = "<<divi;
}