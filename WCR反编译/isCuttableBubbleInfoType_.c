// isCuttableBubbleInfoType: @ 00ebb308

/* Function Stack Size: 0x18 bytes */

bool WCRefineBubbleCut::isCuttableBubbleInfoType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  byte local_1;
  
  if (((param_3 < 2) || (param_3 == 6)) || (param_3 - 0xc < 3)) {
    local_1 = 1;
  }
  else {
    local_1 = 0;
  }
  return (uint)local_1;
}

