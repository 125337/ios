// FUN_001b514c @ 001b514c

void FUN_001b514c(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  ulong uVar3;
  ulong local_78;
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
  uVar3 = param_1 + 0x20;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_78 = uVar3;
  if (uVar3 == 0) {
    local_78 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_78;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_38;
  FUN_001b53c8();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar3;
  FUN_001b4a3c(uVar3,PTR_s_isFavour_0269ff28);
  bVar2 = ((byte)uVar3 ^ 1) & 1;
  uVar3 = local_40;
  FUN_001b54dc(local_40,bVar2);
  if ((uVar3 & 1) == 0) {
    pcVar1 = &cf__Nfh_YS1Y_;
    if (bVar2 == 0) {
      pcVar1 = &cf_Sf1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    FUN_001b5680(local_38);
    pcVar1 = &cf___Nfh_YS;
    if (bVar2 == 0) {
      pcVar1 = &cf__Sf;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

