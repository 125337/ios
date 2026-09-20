// FUN_0045c0b8 @ 0045c0b8

void FUN_0045c0b8(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    if (param_2 != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,param_2);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar1;
        goto LAB_0045c26c;
      }
    }
    if (param_3 == 0) {
      local_18 = 0;
    }
    else {
      local_50 = local_20;
      _object_getClass();
      while (local_50 != 0) {
        uVar1 = local_50;
        _class_getInstanceVariable(local_50,param_3);
        if (uVar1 != 0) {
          uVar2 = local_20;
          _object_getIvar(local_20,uVar1);
          _objc_retainAutoreleasedReturnValue();
          local_18 = uVar2;
          goto LAB_0045c26c;
        }
        _class_getSuperclass();
      }
      local_18 = 0;
    }
  }
LAB_0045c26c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

