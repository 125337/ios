// wcm_yb_foregroundView @0x6b938

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageCell::wcm_yb_foregroundView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_38;
  
  _objc_msgSend_imageScrollView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageView(uVar1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

