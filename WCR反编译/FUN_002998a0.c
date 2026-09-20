// FUN_002998a0 @ 002998a0

void FUN_002998a0(undefined8 param_1)

{
  uint uVar1;
  long lVar3;
  long lVar4;
  long local_30;
  uint local_28;
  long local_18;
  undefined *puVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = (uint)puVar2;
  FUN_0028364c();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
    local_28 = 1;
  }
  else {
    lVar3 = local_18;
    FUN_00299a70();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar3;
    if (lVar3 != 0) {
      lVar4 = local_18;
      FUN_00299d7c();
      _objc_retainAutoreleasedReturnValue();
      FUN_0028470c();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      FUN_00284980(DAT_02323cc0,local_30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0RSQ_);
    }
    local_28 = (uint)(lVar3 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

