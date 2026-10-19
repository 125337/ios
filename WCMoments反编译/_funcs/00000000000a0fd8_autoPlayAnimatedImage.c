// autoPlayAnimatedImage @0xa0fd8

/* Function Stack Size: 0x10 bytes */

bool WCMYYAnimatedImageView::autoPlayAnimatedImage(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_autoPlayAnimatedImage) & 1;
}

