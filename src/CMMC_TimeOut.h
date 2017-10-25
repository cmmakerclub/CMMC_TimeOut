#ifndef CMMC_TimeOut_H
#define CMMC_TimeOut_H

#include <Arduino.h>

class CMMC_TimeOut
{
    public:
      // constructor
      CMMC_TimeOut() { }
      ~CMMC_TimeOut() {} 
      bool is_timeout(); 
      void timeout_ms(uint32_t t); 
    private:
      uint32_t _current_tick;
      uint32_t _next_tick;
};

#endif //CMMC_TimeOut_H
