#include <iostream>
using namespace std;
main(){
///////////////////switch statement ma hm condition nhi likhta variable likhta ha ya expression likhta ha/////
    char grade;
    cout<<"Enter your grdade";
    cin>> grade;
    switch (grade)
    {
    case 'a':
    cout<<"EXCELLENT PERFOMANCE";
    break;
    case 'b':
    cout<<"bETTER PERFOMANCE";
    break;
    case 'c':
    cout<<"Poor Perfomance";
    break;
    default:
    cout<<"YOU NEED WORK HARD";
    
    }
    