// FUN_008e333c @ 008e333c

void FUN_008e333c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_008e429c();
  if ((uVar1 & 1) == 0) {
    FUN_008fc05c(local_18);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    FUN_008fbdec(local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

