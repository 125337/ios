// FUN_003e1378 @ 003e1378

void FUN_003e1378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  local_48 = param_6;
  local_40 = param_5;
  FUN_003e6038();
  if ((uVar1 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028ca398)(local_20,local_28,local_30,local_38,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = 1;
    local_18 = uVar3;
  }
  else {
    uVar3 = local_20;
    (*DAT_028ca398)(local_20,local_28,local_30,local_38,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_30;
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_003e60a8();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((uVar5 & 1) != 0) {
      uVar6 = local_60;
      FUN_003e639c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_60;
      local_60 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      FUN_003e3274(0x4014000000000000);
      if (local_48 != (undefined8 *)0x0) {
        *local_48 = 0;
      }
    }
    FUN_003e6744();
    uVar3 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_58 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

