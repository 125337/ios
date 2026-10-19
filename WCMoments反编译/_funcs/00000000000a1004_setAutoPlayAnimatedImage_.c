// setAutoPlayAnimatedImage: @0xa1004

/* Function Stack Size: 0x14 bytes */

void WCMYYAnimatedImageView::setAutoPlayAnimatedImage_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_autoPlayAnimatedImage) = (byte)param_3 & 1;
  return;
}

