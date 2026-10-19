// imageForKey:type: @0x6b2bc

/* Function Stack Size: 0x20 bytes */

ID WCMYBIBImageCache::imageForKey_type_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long lVar1;
  ID IVar2;
  long local_70;
  undefined8 local_60;
  long local_48;
  undefined8 local_40;
  long_long local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_4;
  _objc_msgSend_objectForKey_(*(undefined8 *)(local_20 + 8),local_60,local_30);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  local_70 = lVar1;
  if (lVar1 == 0) {
    _objc_msgSend_objectForKey_(*(undefined8 *)(local_20 + 0x10),local_60,local_30);
    local_48 = _objc_retainAutoreleasedReturnValue();
    local_70 = local_48;
  }
  local_40 = (*(code *)PTR__objc_retain_00110460)(local_70);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_00110458)(local_48);
  }
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if (local_38 == 0) {
    _objc_msgSend_originImage(local_40,local_60);
    local_18 = _objc_retainAutoreleasedReturnValue();
  }
  else if (local_38 == 1) {
    _objc_msgSend_compressedImage(0,local_40,local_60);
    local_18 = _objc_retainAutoreleasedReturnValue();
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  IVar2 = _objc_autoreleaseReturnValue(local_18);
  return IVar2;
}

