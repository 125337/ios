// FUN_00675d68 @ 00675d68

void FUN_00675d68(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_18;
  local_28 = param_3;
  FUN_0064d8b4();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_00655814();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (((uVar1 == 0) || (FUN_0065c1d8(uVar1,local_20), (uVar1 & 1) != 0)) ||
       (uVar1 = local_40, FUN_0065c0c8(local_40,local_20,local_18), (uVar1 & 1) == 0)) {
      local_38 = 1;
    }
    else {
      uVar1 = local_40;
      FUN_00661db0();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if ((uVar1 == 0) || (uVar1 = local_48, FUN_00665aa0(), (uVar1 & 1) != 0)) {
        local_38 = 1;
      }
      else {
        FUN_00675fd8(local_48);
        FUN_0065e928(local_18,local_48);
        FUN_00651de8(local_18,local_48,local_40);
        uVar1 = local_18;
        FUN_0065e928(local_18,local_48);
        uVar2 = local_18;
        FUN_006527b0();
        if ((uVar2 & 1) != 0) {
          FUN_006527fc(local_18,local_48,uVar1);
        }
        local_38 = 0;
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

