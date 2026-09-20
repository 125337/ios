// FUN_00607418 @ 00607418

void FUN_00607418(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_48;
  long local_40;
  uint local_38;
  undefined *local_28;
  undefined8 local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatAvatarProfileCardProfilePage_026a0a90);
  if (((ulong)puVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_chatRoomContact_0269e730);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    if (lVar2 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStyle__026ca710,1);
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_impactOccurred_026ca6a0);
      _objc_storeStrong(&local_48,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                 PTR_s_presentProfileCardForContact__0269e298,local_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_De);
    }
    local_38 = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

