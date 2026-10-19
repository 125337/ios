// animatedImageFrameCount @0x8f170

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYYSpriteSheetImage::animatedImageFrameCount(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));
  return uVar1;
}

