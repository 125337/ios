// setHasAlpha: @0x935f4

/* Function Stack Size: 0x14 bytes */

void _YYImageDecoderFrame::setHasAlpha_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0x50) = (byte)param_3 & 1;
  return;
}

