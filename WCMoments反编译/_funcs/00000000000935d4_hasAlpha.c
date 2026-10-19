// hasAlpha @0x935d4

/* Function Stack Size: 0x10 bytes */

bool _YYImageDecoderFrame::hasAlpha(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x50) & 1;
}

