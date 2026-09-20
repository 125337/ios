// clampedSessionStatsTimeRange: @ 0212bf9c

/* Function Stack Size: 0x18 bytes */

long_long WCRefineConfig::clampedSessionStatsTimeRange_(ID param_1,SEL param_2,long_long param_3)

{
  long_long local_8;
  
  if ((long)param_3 < 0) {
    local_8 = 0;
  }
  else {
    local_8 = param_3;
    if (5 < (long)param_3) {
      local_8 = 5;
    }
  }
  return local_8;
}

