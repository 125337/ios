// animatedImageLoopCount @0x908b4

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYYImage::animatedImageLoopCount(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));
  return uVar1;
}

