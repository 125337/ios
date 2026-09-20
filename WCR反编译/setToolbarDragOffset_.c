// setToolbarDragOffset: @ 01682a20

/* Function Stack Size: 0x20 bytes */

void WCRSuperFloatCropViewController::setToolbarDragOffset_(ID param_1,SEL param_2,CGPoint param_3)

{
  long lVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  
  lVar1 = (long)_toolbarDragOffset;
  ((undefined8 *)(param_1 + lVar1))[1] = in_d1;
  *(undefined8 *)(param_1 + lVar1) = in_d0;
  return;
}

