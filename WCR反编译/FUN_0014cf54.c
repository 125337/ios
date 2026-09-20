// FUN_0014cf54 @ 0014cf54

void FUN_0014cf54(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50 [3];
  uint local_34;
  long local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = param_3;
  local_28 = param_2;
  if (local_20 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    if ((param_2 != 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2),
       (uVar1 & 1) != 0)) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
      }
      local_34 = (uint)(uVar1 != 0);
      _objc_storeStrong(local_50,0);
      if (local_34 != 0) goto LAB_0014d110;
    }
    if (local_30 != 0) {
      uVar1 = local_20;
      _object_getClass();
      _class_getInstanceVariable(uVar1,local_30);
      if (uVar1 != 0) {
        uVar2 = local_20;
        _object_getIvar(local_20,uVar1);
        _objc_retainAutoreleasedReturnValue();
        local_34 = 1;
        local_18 = uVar2;
        goto LAB_0014d110;
      }
    }
    local_18 = 0;
    local_34 = 1;
  }
LAB_0014d110:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

