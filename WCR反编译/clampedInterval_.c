// clampedInterval: @ 00eb741c

/* Function Stack Size: 0x18 bytes */

double WCRefineBackgroundKeepAlive::clampedInterval_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 local_18;
  
  local_18 = param_3;
  if ((long)param_3 < 10) {
    local_18 = 10;
  }
  if (0x1e < (long)local_18) {
    local_18 = 0x1e;
  }
  return (double)(long)local_18;
}

