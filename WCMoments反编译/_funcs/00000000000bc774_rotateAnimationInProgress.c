// rotateAnimationInProgress @0xbc774

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::rotateAnimationInProgress(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_rotateAnimationInProgress) & 1;
}

