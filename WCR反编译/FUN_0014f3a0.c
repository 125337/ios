// FUN_0014f3a0 @ 0014f3a0

ulong FUN_0014f3a0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_c8;
  ulong local_98;
  bool local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
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
    local_48 = 0;
    local_30 = uVar1;
    while (local_30 != 0 && local_48 == 0) {
      uVar1 = local_30;
      _class_getInstanceVariable(local_30,"_arrAttachementObjectItems");
      local_48 = uVar1;
      if (uVar1 == 0) {
        uVar1 = local_30;
        _class_getInstanceVariable(local_30,"arrAttachementObjectItems");
        local_48 = uVar1;
      }
      _class_getSuperclass();
    }
    local_59 = local_48 == 0;
    if (local_59) {
      local_98 = 0;
    }
    else {
      local_98 = local_20;
      _object_getIvar(local_20,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_98;
    }
    local_59 = !local_59;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    uVar1 = local_50;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    }
    local_18 = local_c8;
    local_24 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

