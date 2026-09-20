// FUN_008b07d4 @ 008b07d4

void FUN_008b07d4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar1,param_4);
  FUN_008b4e10();
  if (((ulong)puVar1 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028cdf88)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_18 = uVar3;
  }
  else {
    FUN_008c0c98();
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = local_30;
      FUN_008c32a0();
      uVar3 = local_30;
      if (((uVar2 & 1) == 0) && ((DAT_028ce015 & 1) == 0)) {
        FUN_008b50d8();
        if (((uVar3 & 1) == 0) ||
           (uVar3 = local_30, FUN_008b69b4(), local_18 = local_30, (uVar3 & 1) == 0)) {
          uVar3 = local_20;
          (*DAT_028cdf88)(local_20,local_28,local_30,local_38);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_30;
          local_50 = uVar3;
          FUN_008b50d8();
          if ((uVar2 & 1) == 0) {
            FUN_008c32a0();
          }
          uVar3 = local_50;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar3;
          local_48 = 1;
          _objc_storeStrong(&local_50,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_48 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
        local_48 = 1;
      }
    }
    else {
      uVar3 = local_20;
      (*DAT_028cdf88)(local_20,local_28,local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = 1;
      local_18 = uVar3;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

