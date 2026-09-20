// FUN_007626a4 @ 007626a4

void FUN_007626a4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong local_30;
  undefined4 local_28;
  byte local_21;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_21 = param_3;
  if ((local_18 == 0) || (local_20 == 0)) {
    local_28 = 1;
    goto LAB_007627e8;
  }
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026f4608);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if ((local_21 & 1) == 0) {
    if ((uVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqual__0269e9a8,local_20),
       (uVar1 & 1) == 0)) goto LAB_00762798;
    local_28 = 1;
  }
  else if (uVar1 == local_20) {
    local_28 = 1;
  }
  else {
LAB_00762798:
    _objc_setAssociatedObject(local_18,DAT_026f4608,local_20,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setTitleColor_forState__026caac0,local_20,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_30,0);
LAB_007627e8:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

