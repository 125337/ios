// -[NSObject(WCMYBImageBrowser)_setWcm_ybib_originAlpha:] @0x8eb58

void __NSObject_WCMYBImageBrowser__setWcm_ybib_originAlpha__(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = _WCMYBIBOriginAlphaKey;
  _objc_msgSend_numberWithDouble_(param_1,&_OBJC_CLASS___NSNumber);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_2,puVar1,uVar2,1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

