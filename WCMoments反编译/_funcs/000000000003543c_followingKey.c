// followingKey @0x3543c

/* Function Stack Size: 0x10 bytes */

ID WCMFeedController::followingKey(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 local_40;
  cfstringStruct *local_30;
  
  _objc_msgSend_account(param_1);
  pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_30 = &cf___;
  }
  _objc_msgSend_stringByAppendingString_(&cf_WCMomentsFollowing_,local_40,local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(pcVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

