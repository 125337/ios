// FUN_00eed170 @ 00eed170

void FUN_00eed170(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = param_2;
  if (DAT_028e2aa0 != (code *)0x0) {
    (*DAT_028e2aa0)(local_18,param_2);
  }
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_0280e058);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasReturned_026ab858);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshRightButton_026ab828);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

