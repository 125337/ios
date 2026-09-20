// FUN_0072fb80 @ 0072fb80

void FUN_0072fb80(ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong local_48;
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
    local_48 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
    if ((uVar1 & 1) != 0) {
      local_48 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCellCount_026a0b78);
    }
    if (local_48 == 0) goto LAB_0072fcb0;
  }
  (*DAT_028cc4d0)(local_18,local_20,local_28,param_4);
LAB_0072fcb0:
  _objc_storeStrong(&local_28,0);
  return;
}

