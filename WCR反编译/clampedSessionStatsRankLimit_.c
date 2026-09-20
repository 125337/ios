// clampedSessionStatsRankLimit: @ 0212e4fc

/* Function Stack Size: 0x18 bytes */

long_long WCRefineConfig::clampedSessionStatsRankLimit_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 local_8;
  
  if ((long)param_3 < 6) {
    local_8 = 5;
  }
  else if ((long)param_3 < 0xb) {
    local_8 = 10;
  }
  else {
    local_8 = 0xf;
  }
  return local_8;
}

