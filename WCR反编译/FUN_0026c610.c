// FUN_0026c610 @ 0026c610

void FUN_0026c610(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *local_98;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  int local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0026a464();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_28 = uVar1;
  FUN_0026bbe0();
  local_18 = local_28;
  local_38 = (int)uVar2;
  if (local_38 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_3c = 1;
  }
  else {
    FUN_0026bec0();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    if ((uVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,
                   PTR_s_getFavoritesItemByLocalId__026a1470), (uVar2 & 1) == 0)) {
      uVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_3c = 1;
    }
    else {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_getFavoritesItemByLocalId__026a1470,local_38);
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        local_98 = &local_28;
      }
      else {
        local_98 = &local_50;
      }
      uVar2 = *local_98;
      local_50 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_3c = 1;
      local_18 = uVar2;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

