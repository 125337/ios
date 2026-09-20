// FUN_002ea5e0 @ 002ea5e0

undefined8 FUN_002ea5e0(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_28 = param_1;
  local_20 = param_1;
  while( true ) {
    if (local_28 == 0) {
      return 0;
    }
    uVar2 = local_28;
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    FUN_002ea6f0();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      FUN_002eaa40();
      if ((uVar2 & 1) == 0) {
        bVar1 = false;
      }
      else {
        local_18 = 1;
        bVar1 = true;
      }
    }
    else {
      local_18 = 2;
      bVar1 = true;
    }
    _objc_storeStrong(&local_30,0);
    if (bVar1) break;
    _class_getSuperclass();
  }
  return local_18;
}

