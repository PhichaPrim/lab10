#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

int main(){
    int count=0;
    double sum,mean,sumsd,sd;
    string textline;
    ifstream source;
    source.open("score.txt");
    while(getline(source,textline)){
        sum +=atof(textline.c_str());
        count++;
        mean=sum/count;
        sumsd+=pow(atof(textline.c_str()),2);
        sd = sqrt((sumsd/count)-pow(mean,2));
    }
    source.close();
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd << "\n";
}