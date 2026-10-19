// clearCache @0x7a484

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::clearCache(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  _objc_msgSend_imageCache(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cacheKey(param_1,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeForKey_(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

