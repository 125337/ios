// FUN_00eed338 @ 00eed338

void FUN_00eed338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (DAT_028e2ab0 != (code *)0x0) {
    (*DAT_028e2ab0)(local_18,local_20,local_28,local_30);
  }
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_0280e058);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasReturned_026ab858);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_refreshSelectAllButton_026ab830);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_refreshRightButton_026ab828);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

