// fillTypeByOrientation: @0x67ec8

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCMYBIBImageLayout::fillTypeByOrientation_(ID param_1,SEL param_2,long_long param_3)

{
  ulong uVar1;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = _UIDeviceOrientationIsLandscape(param_3);
  if ((uVar1 & 1) == 0) {
    local_30 = _objc_msgSend_verticalFillType(param_1,local_38);
  }
  else {
    local_30 = _objc_msgSend_horizontalFillType(param_1,local_38);
  }
  return local_30;
}

