// FUN_010e8de4 @ 010e8de4

void FUN_010e8de4(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong local_70;
  bool local_49;
  ulong local_48;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else if ((param_2 == 0) ||
          (uVar1 = local_20,
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2)
          , (uVar1 & 1) == 0)) {
    if (param_3 == 0) {
      local_18 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      _class_getInstanceVariable();
      if (uVar1 == 0) {
        local_70 = 0;
      }
      else {
        local_70 = local_20;
        _object_getIvar(local_20,uVar1);
        _objc_retainAutoreleasedReturnValue();
        local_48 = local_70;
      }
      local_49 = uVar1 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_70;
      if (local_49) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
    }
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

