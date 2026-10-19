// setLossless: @0x9a274

/* Function Stack Size: 0x14 bytes */

void WCMYYImageEncoder::setLossless_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0x18) = (byte)param_3 & 1;
  return;
}

