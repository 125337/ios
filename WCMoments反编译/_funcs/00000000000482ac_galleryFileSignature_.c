// galleryFileSignature: @0x482ac

/* Function Stack Size: 0x18 bytes */

ID WCMFeedController::galleryFileSignature_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  bVar1 = local_30 == 0;
  if (bVar1) {
    local_90 = 0;
  }
  else {
    _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_a0);
    local_40 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_attributesOfItemAtPath_error_(local_40,local_a0,local_30,0);
    local_90 = _objc_retainAutoreleasedReturnValue();
    local_50 = local_90;
  }
  local_38 = (*(code *)PTR__objc_retain_00110460)(local_90);
  if (!bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_50);
    (*(code *)PTR__objc_release_00110458)(local_40);
  }
  _objc_msgSend_objectForKeyedSubscript_(local_38,local_a0,*(undefined8 *)PTR__NSFileSize_00110178);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend_unsignedLongLongValue(uVar2,local_a0);
  if (lVar3 == 0) {
    local_b0 = 0;
  }
  else {
    _objc_msgSend_objectForKeyedSubscript_
              (local_38,local_a0,*(undefined8 *)PTR__NSFileSize_00110178);
    local_60 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKeyedSubscript_
              (local_38,local_a0,*(undefined8 *)PTR__NSFileModificationDate_00110158);
    local_70 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_timeIntervalSince1970(local_70,local_a0);
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_a0,&cf_________6f);
    local_b0 = _objc_retainAutoreleasedReturnValue();
    local_80 = local_b0;
  }
  local_18 = (*(code *)PTR__objc_retain_00110460)(local_b0);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_release_00110458)(local_80);
    (*(code *)PTR__objc_release_00110458)(local_70);
    (*(code *)PTR__objc_release_00110458)(local_60);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  IVar4 = _objc_autoreleaseReturnValue(local_18);
  return IVar4;
}

