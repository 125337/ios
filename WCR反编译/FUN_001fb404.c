// FUN_001fb404 @ 001fb404

void FUN_001fb404(undefined8 param_1)

{
  ulong uVar1;
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
  FUN_001fb590();
  if (((uVar2 & 1) == 0) || (local_18 == 0)) {
    local_28 = 1;
  }
  else {
    uVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setTextColor__026caa98);
    if ((uVar4 & 1) == 0) {
      local_28 = 1;
    }
    else {
      FUN_001fddac();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_18;
      local_30 = uVar4;
      if (uVar4 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTextColor__026caa98,local_30);
        _objc_storeStrong(&local_38,0);
      }
      local_28 = (uint)(uVar4 == 0);
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

