// FUN_00516fb4 @ 00516fb4

void FUN_00516fb4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_e0;
  ulong local_58;
  ulong local_50;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_valueForKey__0269d128,&cf_m_failedLikeQueue);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_30;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_30;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_20;
      _object_getClass();
      _class_getInstanceVariable(uVar3,"m_failedLikeQueue");
      local_50 = uVar3;
      if (uVar3 == 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
        _class_getInstanceVariable(uVar3,"m_failedLikeQueue");
        local_50 = uVar3;
      }
      if (local_50 == 0) {
        local_18 = 0;
        local_24 = 1;
      }
      else {
        uVar3 = local_20;
        _object_getIvar(local_20,local_50);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_58 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar3 & 1) == 0) {
          local_e0 = 0;
        }
        else {
          local_e0 = local_58;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_e0;
        local_24 = 1;
        _objc_storeStrong(&local_58,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

