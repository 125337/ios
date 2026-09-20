// setCanReEdit: @ 016910bc

/* Function Stack Size: 0x14 bytes */

void WCRQuickReusePayload::setCanReEdit_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 8) = (byte)param_3 & 1;
  return;
}

