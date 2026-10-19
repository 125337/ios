// animatedImageLoopCount @0x69f84

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYBImage::animatedImageLoopCount(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));
  return uVar1;
}

