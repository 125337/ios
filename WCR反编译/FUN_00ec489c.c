// FUN_00ec489c @ 00ec489c

void FUN_00ec489c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_78;
  ulong local_58;
  bool local_49;
  ulong local_48;
  ulong local_40;
  ulong local_38;
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
    uVar1 = local_20;
    _object_getClass();
    local_38 = 0;
    local_30 = uVar1;
    while (local_30 != 0 && local_38 == 0) {
      uVar1 = local_30;
      _class_getInstanceVariable(local_30,"_arrAttachementObjectItems");
      local_38 = uVar1;
      if (uVar1 == 0) {
        uVar1 = local_30;
        _class_getInstanceVariable(local_30,"arrAttachementObjectItems");
        local_38 = uVar1;
      }
      _class_getSuperclass();
    }
    local_49 = local_38 == 0;
    if (local_49) {
      local_58 = 0;
    }
    else {
      local_58 = local_20;
      _object_getIvar(local_20,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_58;
    }
    local_49 = !local_49;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_58;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    uVar1 = local_40;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      uVar3 = local_20;
      FUN_00ec4b28(local_20,&cf_arrAttachementObjectItems);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_40;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_78 = 0;
    }
    else {
      local_78 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    local_24 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

