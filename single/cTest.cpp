#include "stdio.h"
#include <iostream>
#include <time.h>
//#include <ros/ros.h>


int main(){
time_t timep;
time(&timep);
//std::cout<<&timep<<std::endl;
printf("%ld",&timep);
//std<<cout<<ros::Time::now()<<std::endl;

return 1;

}
