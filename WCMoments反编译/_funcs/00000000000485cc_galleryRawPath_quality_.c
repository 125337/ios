// galleryRawPath:quality: @0x485cc

/* Function Stack Size: 0x20 bytes */

ID WCMFeedController::galleryRawPath_quality_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_70;
  undefined8 local_60;
  cfstringStruct *local_50;
  undefined8 local_40;
  undefined8 local_38;
  long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (param_4 == 4) {
    local_50 = &cf_pathForUhdData;
  }
  else {
    local_50 = &cf_pathForHdData;
    if (param_4 != 3) {
      local_50 = &cf_pathForData;
    }
  }
  local_30 = param_4;
  local_38 = (*(code *)PTR__objc_retain_00110460)(local_50);
  _Call(local_28,local_38,PTR____NSArray0__struct_00110718);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _Text();
  local_40 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_galleryFileSignature_(local_18,local_60,local_40);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = local_40;
  }
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_70);
  (*(code *)PTR__objc_release_00110458)(lVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  IVar3 = _objc_autoreleaseReturnValue(uVar1);
  return IVar3;
}

