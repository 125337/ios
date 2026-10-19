// delegate @0xab9a8

/* Function Stack Size: 0x10 bytes */

ID WCMTOCropViewController::delegate(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_delegate);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}

