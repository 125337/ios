// clampedReplyMaxChars: @ 009bd6ec

/* Function Stack Size: 0x18 bytes */

long_long WCRefineAIStore::clampedReplyMaxChars_(ID param_1,SEL param_2,long_long param_3)

{
  long_long local_8;
  
  if ((long)param_3 < 0x14) {
    local_8 = 0x14;
  }
  else {
    local_8 = param_3;
    if (800 < (long)param_3) {
      local_8 = 800;
    }
  }
  return local_8;
}

