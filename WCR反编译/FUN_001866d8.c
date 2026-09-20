// FUN_001866d8 @ 001866d8

void FUN_001866d8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_54;
  ulong local_50 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_20;
  FUN_0018ad9c();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    FUN_00192a00(local_20,local_38);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    local_60 = uVar1;
    (*DAT_028c8938)(local_20,local_28,local_30,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqual__0269e9a8,local_38);
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_section_0269e988);
    if ((long)uVar1 < 9) {
      uVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_row_0269e210);
      if (uVar1 - 10 == 0 || (long)uVar1 < 10) {
        uVar2 = local_68;
        FUN_00192f68(uVar1 - 10);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
        _objc_storeStrong(uVar2,&local_70,0);
      }
    }
    FUN_0019422c(local_20,local_60,local_68);
    uVar1 = local_20;
    FUN_00194768(local_20,local_30,local_60,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_54 = 1;
    local_18 = uVar1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  else {
    uVar1 = local_20;
    (*DAT_028c8938)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar1;
    FUN_00192440(local_20,local_38,uVar1);
    uVar1 = local_50[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_54 = 1;
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

