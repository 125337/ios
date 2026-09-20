// FUN_00561df8 @ 00561df8

void FUN_00561df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_f0;
  bool local_99;
  ulong local_98;
  ulong local_90;
  undefined1 local_82;
  byte local_81;
  ulong local_80 [3];
  ulong local_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_58 = 0;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  uVar1 = local_58;
  FUN_00565ddc(local_58,local_60);
  _objc_retainAutoreleasedReturnValue();
  local_80[0] = 0;
  local_81 = 0;
  local_68 = uVar1;
  FUN_0056db84();
  uVar2 = local_48;
  local_82 = (undefined1)uVar1;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
    local_99 = (uVar2 & 1) == 0;
    if (local_99) {
      local_f0 = 0;
    }
    else {
      local_f0 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_dataItem_026a13c8);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_f0;
    }
    local_99 = !local_99;
    _objc_storeStrong(local_80,local_f0);
    if (local_99) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if (local_80[0] == 0) {
      uVar1 = local_90;
      FUN_00565494();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_80[0];
      local_80[0] = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    local_81 = uVar2 != 0 && local_80[0] != 0;
    if ((bool)local_81) {
      FUN_00566210(local_80[0],local_60,local_68,local_90);
      DAT_028cb54c = 1;
    }
    _objc_storeStrong(&local_90,0);
  }
  (*DAT_028cb498)(local_40,uStack_38,local_30,uStack_28,local_48,local_50,local_58,local_60);
  if ((local_81 & 1) != 0) {
    FUN_0056e5bc();
    DAT_028cb54c = 0;
  }
  _objc_storeStrong(local_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  return;
}

