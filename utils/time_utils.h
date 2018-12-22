#ifndef UTILS_TIME_UTILS_H
#define UTILS_TIME_UTILS_H

#include <sys/time.h>
#include <time.h>
#include <cstdint>

namespace libcpp {

 class TimeUtils {
     public:
         static uint64_t NowMicros() {
             struct timeval tv;
             gettimeofday(&tv, NULL);
             return static_cast<uint64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
         }
    }; 
} //libcpp

#endif //UTILS_TIME_UTILS_H
