// FUN_002e9768 @ 002e9768

ulong FUN_002e9768(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_002e9cc4();
  local_28 = uVar1;
  if (uVar1 == 2) {
    local_38 = 1;
    local_18 = uVar1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      uVar2 = local_20;
      _objc_getAssociatedObject(local_20,DAT_026dfd80);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_40;
    FUN_002ea098();
    if ((uVar1 & 1) == 0) {
      local_18 = local_28;
    }
    else {
      local_18 = 2;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

