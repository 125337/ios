// setOriginImage: @0x7c408

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageData::setOriginImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_imageCache(local_18,local_60);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  _objc_msgSend_cacheKey(local_18,local_60);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar4 = _objc_loadWeakRetained(local_18 + 0x58);
  _objc_msgSend_setImage_type_forKey_resident_(lVar4,uVar2,local_60,uVar1,0,uVar3,lVar4 != 0);
  (*(code *)PTR__objc_release_00110458)(lVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

