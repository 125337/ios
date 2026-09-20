// FUN_0072fa40 @ 0072fa40

void FUN_0072fa40(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_40;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_007300e4(local_28,local_18);
  uVar1 = local_18;
  FUN_007301c0();
  if ((uVar1 & 1) != 0) {
    FUN_00730570(local_28);
    local_40 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
    if ((uVar1 & 1) != 0) {
      local_40 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCellCount_026a0b78);
    }
    if (local_40 == 0) goto LAB_0072fb60;
  }
  (*DAT_028cc4c8)(local_18,local_20,local_28);
LAB_0072fb60:
  _objc_storeStrong(&local_28,0);
  return;
}

