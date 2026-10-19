// galleryPath:quality: @0x49ba8

/* Function Stack Size: 0x20 bytes */

ID WCMFeedController::galleryPath_quality_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  ID IVar2;
  long local_68;
  undefined8 local_58;
  long local_48;
  long local_40;
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
  _objc_msgSend_galleryRawPath_quality_(local_20,local_58,local_30,param_4);
  local_40 = _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (local_40 != 0) {
    _objc_msgSend_galleryImageData_(local_20,local_58,local_40);
    local_48 = _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    if (local_48 != 0) {
      local_68 = local_40;
      goto LAB_00049c64;
    }
  }
  local_68 = 0;
LAB_00049c64:
  local_18 = (*(code *)PTR__objc_retain_00110460)(local_68);
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_48);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  IVar2 = _objc_autoreleaseReturnValue(local_18);
  return IVar2;
}

