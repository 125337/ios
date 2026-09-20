// FUN_001b5758 @ 001b5758

void FUN_001b5758(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_80;
  ulong local_58 [3];
  ulong local_40;
  ulong local_38;
  long local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = param_1 + 0x20;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_80 = uVar1;
  if (uVar1 == 0) {
    local_80 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  FUN_001b53c8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_40 = uVar1;
  FUN_001b5998();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  FUN_001b5680(local_38);
  uVar1 = local_40;
  FUN_001b5ca4(local_40,local_58[0]);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

