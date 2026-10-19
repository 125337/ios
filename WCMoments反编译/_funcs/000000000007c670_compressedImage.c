// compressedImage @0x7c670

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageData::compressedImage(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 local_40;
  
  _objc_msgSend_imageCache(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cacheKey(param_1,local_40);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_imageForKey_type_(uVar1,local_40,uVar2,1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}

