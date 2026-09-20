// FUN_0009ebf4 @ 0009ebf4

void FUN_0009ebf4(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  ulong *puVar3;
  
  puVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  FUN_0009d25c();
  if ((uVar2 & 1) == 0) {
    local_28 = 1;
  }
  else {
    uVar4 = local_18;
    FUN_0009ed74();
    if ((uVar4 & 1) == 0) {
      local_28 = 1;
    }
    else {
      uVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar4 != 0;
      local_30 = uVar4;
      if (bVar1) {
        FUN_0009da20();
        _objc_retainAutoreleasedReturnValue();
        local_38 = uVar4;
        FUN_0009da9c(local_30,uVar4);
        _objc_storeStrong(&local_38,0);
      }
      local_28 = (uint)!bVar1;
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

