// FUN_005440ec @ 005440ec

void FUN_005440ec(undefined8 param_1)

{
  long lVar1;
  long local_90;
  bool local_59;
  long local_58;
  long local_30;
  uint local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_cacheDateItem);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
    }
    local_24 = (uint)(lVar1 != 0);
    _objc_storeStrong(&local_30,0);
    if (local_24 == 0) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      _class_getInstanceVariable(lVar1,"_cacheDateItem");
      if (lVar1 == 0) {
        local_90 = 0;
      }
      else {
        local_90 = local_20;
        _object_getIvar(local_20,lVar1);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_90;
      }
      local_59 = lVar1 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_90;
      if (local_59) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

