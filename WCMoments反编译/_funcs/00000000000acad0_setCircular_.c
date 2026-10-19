// setCircular: @0xacad0

/* Function Stack Size: 0x14 bytes */

void WCMTOActivityCroppedImageProvider::setCircular_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_circular) = (byte)param_3 & 1;
  return;
}

