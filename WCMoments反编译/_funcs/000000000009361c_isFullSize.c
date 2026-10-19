// isFullSize @0x9361c

/* Function Stack Size: 0x10 bytes */

bool _YYImageDecoderFrame::isFullSize(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x51) & 1;
}

