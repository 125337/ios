// FUN_0023a2ac @ 0023a2ac

void FUN_0023a2ac(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_40 [2];
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_28 = 1;
  }
  else {
    local_30 = 0;
    uVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_m_contact_026a0b68);
    if ((uVar4 & 1) != 0) {
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_contact_026a0b68);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_30;
      local_30 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    if (local_30 == 0) {
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_30;
      local_30 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    bVar1 = local_30 != 0;
    if (bVar1) {
      puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithStyle__026ca710,1);
      local_40[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_prepare_026ca7d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_impactOccurred_026ca6a0);
      _objc_storeStrong(local_40,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                 PTR_s_presentProfileCardForContact__0269e298,local_30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elST_N);
    }
    local_28 = (uint)!bVar1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

