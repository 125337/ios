// clampedVideoDurationSeconds: @ 009baabc

/* Function Stack Size: 0x18 bytes */

long_long WCRefineAIStore::clampedVideoDurationSeconds_(ID param_1,SEL param_2,long_long param_3)

{
  long_long local_8;
  
  if ((long)param_3 < 2) {
    local_8 = 2;
  }
  else {
    local_8 = param_3;
    if (0x1e < (long)param_3) {
      local_8 = 0x1e;
    }
  }
  return local_8;
}

