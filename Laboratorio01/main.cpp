#include <iostream>
#include <time.h>

int main(void)
{
    time_t mytime;
    mytime = time(NULL);
    std::cout<<(ctime(&mytime))<<std::endl;

    return 0;
}