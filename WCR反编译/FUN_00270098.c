// FUN_00270098 @ 00270098

void FUN_00270098(undefined8 param_1,undefined8 param_2)

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
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  FUN_0026ef1c();
  uVar1 = local_28;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    FUN_00270578(local_20,"_msgWrap");
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    FUN_0026ef1c();
    uVar1 = local_40;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      FUN_00270578(local_20,"_messageWrap");
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar2 = local_40;
      FUN_0026ef1c();
      local_18 = local_28;
      uVar1 = local_40;
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_38 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

