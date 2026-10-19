// setDelegate: @0x7c120

/* Function Stack Size: 0x18 bytes */

void WCMYBIBImageData::setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_storeWeak(local_18 + 0x58,local_28);
  if (local_28 == 0) {
    *(undefined1 *)(local_18 + 0x18) = 1;
    _objc_msgSend_imageCache(local_18,local_30);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_cacheKey(local_18,local_30);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeResidentForKey_(uVar1,local_30);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  else {
    _objc_msgSend_loadData(local_18,local_30);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

