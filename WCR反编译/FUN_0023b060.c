// FUN_0023b060 @ 0023b060

void FUN_0023b060(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long local_a0;
  long local_60;
  long local_50;
  long local_48 [3];
  undefined *local_30;
  byte local_21;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  local_21 = param_3;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithStyle__026ca710,1);
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_prepare_026ca7d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_30,0);
  bVar1 = (local_21 & 1) == 0;
  local_a0 = local_18;
  if (bVar1) {
    FUN_00236094();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_a0;
  }
  else {
    FUN_0023aa0c();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_a0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  lVar3 = local_48[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
  }
  else {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatIndentOverrideHelper_026ce408,
                 PTR_s_removeLiftOverrideForSession__026a0bf8,local_48[0]);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatIndentOverrideHelper_026ce408,
                 PTR_s_refreshActiveChatLayoutForSessio_026a0bd8,local_48[0]);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__b_YNnm);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatIndentOverrideHelper_026ce408,
                 PTR_s_presentLiftEditorForSession_isGr_026a0bf0,local_48[0],local_21 & 1,local_18,
                 local_20);
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

