// cancelButtonColor @0xaa2f4

/* Function Stack Size: 0x10 bytes */

ID WCMTOCropViewController::cancelButtonColor(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_38;
  
  _objc_msgSend_toolbar(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cancelButtonColor(uVar1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

