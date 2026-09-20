// FUN_00607690 @ 00607690

void FUN_00607690(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48 [3];
  undefined *local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStyle__026ca710,1);
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_30,0);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_chatRoomContact_0269e730);
  _objc_retainAutoreleasedReturnValue();
  local_50 = 0;
  local_48[0] = uVar2;
  if ((uVar2 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
     (uVar2 & 1) != 0)) {
    uVar3 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_50;
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatIndentOverrideHelper_026ce408,
                 PTR_s_removeIndentOverrideForSession__026a0bd0,local_50);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatIndentOverrideHelper_026ce408,
                 PTR_s_refreshActiveChatLayoutForSessio_026a0bd8,local_50);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__b_Y__);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineChatIndentOverrideHelper_026ce408,
                 PTR_s_presentIndentEditorForSession_is_026a0bc8,local_50,1,local_18,local_28);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_28,0);
  return;
}

