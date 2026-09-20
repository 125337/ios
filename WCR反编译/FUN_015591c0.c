// FUN_015591c0 @ 015591c0

byte FUN_015591c0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_015592d4;
  }
  uVar1 = local_28;
  FUN_01570cf0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_onWCTimeLineCellViewShowProfile_jumpData_;
  local_38 = uVar1;
  _NSSelectorFromString();
  if (local_38 == 0) {
LAB_015592a8:
    local_11 = 0;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar1 & 1) == 0) goto LAB_015592a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar2,local_20,0);
    local_11 = 1;
  }
  local_2c = 1;
  _objc_storeStrong(&local_38,0);
LAB_015592d4:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

