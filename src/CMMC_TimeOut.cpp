#include "CMMC_TimeOut.h"

void CMMC_TimeOut::timeout_ms(uint32_t t) {
    this->_next_tick = millis() + t; 
}


bool CMMC_TimeOut::is_timeout() {
    return (millis() > this->_next_tick);
}