#include "stdio.h"
#include <iostream>
#include <time.h>
#include <vector>
//#include <ros/ros.h>


int main(){
// time_t timep;
// time(&timep);
// //std::cout<<&timep<<std::endl;
// printf("%ld",&timep);
// //std<<cout<<ros::Time::now()<<std::endl;
std::vector<int> vc;
for (size_t i = 1; i < 6; i++)
{
    vc.push_back(i);
}
//vc.erase(vc.begin());
vc.erase(vc.begin(), vc.begin()+1+1);
for (size_t i = 0; i < vc.size(); i++)
{
    std::cout << vc[i] << std::endl;
}
return 1;
}
