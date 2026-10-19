// setIsFullSize: @0x9363c

/* Function Stack Size: 0x14 bytes */

void _YYImageDecoderFrame::setIsFullSize_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0x51) = (byte)param_3 & 1;
  return;
}

