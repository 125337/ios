// FUN_0029aeb8 @ 0029aeb8

void FUN_0029aeb8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
    local_28 = 1;
  }
  else {
    uVar4 = local_18;
    FUN_00298e7c();
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRSN_f);
      local_28 = 1;
    }
    else {
      uVar4 = local_18;
      FUN_00299a70();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_18;
      local_30 = uVar4;
      FUN_00299d7c();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = local_30 != 0;
      local_38 = uVar5;
      if (bVar1) {
        FUN_0029b13c(local_30,uVar5);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0RSQ_);
      }
      local_28 = (uint)!bVar1;
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

