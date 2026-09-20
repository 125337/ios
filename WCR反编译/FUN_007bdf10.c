// FUN_007bdf10 @ 007bdf10

void FUN_007bdf10(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_007ac894();
  if ((uVar1 & 1) == 0) {
    FUN_007bde54(local_18);
    local_28 = 1;
  }
  else {
    FUN_007b5980(local_18);
    FUN_007b4dec(local_18);
    FUN_007bd2a8(local_18);
    uVar3 = local_18;
    FUN_007b8ad4();
    if ((uVar3 & 1) == 0) {
      uVar3 = local_18;
      FUN_007ae408();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_reloadData_0269e400);
      _objc_storeStrong(&local_30,0);
    }
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

