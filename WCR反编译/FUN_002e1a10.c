// FUN_002e1a10 @ 002e1a10

void FUN_002e1a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong local_b8;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  undefined4 local_3c;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  ulong *puVar3;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar3 = &local_30;
  local_30 = 0;
  local_28 = param_3;
  _objc_storeStrong(puVar3,param_4);
  uVar2 = (uint)puVar3;
  local_3c = param_5;
  local_38 = param_1;
  if (DAT_028c98c8 == (code *)0x0) {
    uVar4 = local_20;
    FUN_002e16bc(param_1,local_20,PTR_s_fontWithName_size__026a1cd0,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 1;
    local_18 = uVar4;
  }
  else {
    FUN_002e4780();
    if (((uVar2 & 1) == 0) || (local_b8 = local_30, FUN_002e5e10(), (local_b8 & 1) != 0)) {
      uVar4 = local_20;
      (*DAT_028c98c8)(local_38,local_20,local_28,local_30,local_3c);
      _objc_retainAutoreleasedReturnValue();
      local_50 = 1;
      local_18 = uVar4;
    }
    else {
      FUN_002e4604(local_38);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = local_b8 == 0;
      local_58 = local_b8;
      if (bVar1) {
        local_60 = local_20;
        (*DAT_028c98c8)(local_38,local_20,local_28,local_30,local_3c);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_b8;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      local_50 = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

