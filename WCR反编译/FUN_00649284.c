// FUN_00649284 @ 00649284

void FUN_00649284(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_a0;
  ulong local_60;
  undefined4 local_54;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cbc22);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  local_30 = uVar2;
  _objc_getAssociatedObject(local_18,&DAT_028cbc21);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = local_18;
  local_48[0] = uVar3;
  _objc_getAssociatedObject(local_18,&DAT_028cbc08);
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_a0;
  if (((local_28 == 0) || (local_30 == 0)) || (local_28 != local_30)) {
    if (((local_28 == 0) || (local_48[0] == 0)) || (local_28 != local_48[0])) {
      if (((local_28 == 0) || (local_a0 == 0)) || (local_28 != local_a0)) {
        uVar2 = local_18;
        (*DAT_028cbb48)(local_18,local_20,local_28);
        uVar1 = (uint)uVar2;
        FUN_0064cd38();
        if ((uVar1 & 1) != 0) {
          FUN_00660e04(DAT_02323c88,local_18);
        }
        local_54 = 0;
      }
      else {
        _objc_getAssociatedObject(0,local_a0,&DAT_028cbc09);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_a0;
        if (local_a0 == 0) {
          local_a0 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_integerValue_026ca750);
        }
        uVar2 = local_a0;
        FUN_0064d8b4();
        if ((uVar2 & 1) != 0) {
          FUN_0064cd58(local_18,local_a0);
        }
        local_54 = 1;
        _objc_storeStrong(&local_60,0);
      }
    }
    else {
      FUN_00650518(0);
      if ((local_a0 & 1) != 0) {
        FUN_0064cd58(local_18,1);
      }
      local_54 = 1;
    }
  }
  else {
    FUN_00650534(0);
    if ((local_a0 & 1) != 0) {
      FUN_0064cd58(local_18,0);
    }
    local_54 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

