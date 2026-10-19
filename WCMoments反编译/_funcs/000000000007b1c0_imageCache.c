// imageCache @0x7b1c0

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageData::imageCache(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_38;
  
  _objc_msgSend_wcm_yb_backView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_ybib_imageCache(uVar1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

