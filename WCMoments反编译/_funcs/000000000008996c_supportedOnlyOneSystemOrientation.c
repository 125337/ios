// supportedOnlyOneSystemOrientation @0x8996c

/* Function Stack Size: 0x10 bytes */

bool WCMYBIBScreenRotationHandler::supportedOnlyOneSystemOrientation(ID param_1,SEL param_2)

{
  ulong uVar1;
  
  uVar1 = _objc_msgSend_supportSystemOrientationMask(param_1);
  return (bool)(uVar1 == (uVar1 & -uVar1));
}

