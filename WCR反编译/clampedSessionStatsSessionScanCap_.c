// clampedSessionStatsSessionScanCap: @ 0212e55c

/* Function Stack Size: 0x18 bytes */

long_long WCRefineConfig::clampedSessionStatsSessionScanCap_
                    (ID param_1,SEL param_2,long_long param_3)

{
  long_long local_8;
  
  if ((long)param_3 < 0) {
    local_8 = 0;
  }
  else {
    local_8 = param_3;
    if (500000 < (long)param_3) {
      local_8 = 500000;
    }
  }
  return local_8;
}

