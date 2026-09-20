// clampedSessionStatsCustomHours: @ 0212bff4

/* Function Stack Size: 0x18 bytes */

long_long WCRefineConfig::clampedSessionStatsCustomHours_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *local_8;
  
  if ((long)param_3 < 1) {
    local_8 = (undefined *)0x1;
  }
  else {
    local_8 = (undefined *)param_3;
    if (0x2238 < (long)param_3) {
      local_8 = &DAT_00002238;
    }
  }
  return (long_long)local_8;
}

