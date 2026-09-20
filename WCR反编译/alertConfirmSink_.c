// alertConfirmSink: @ 00ece7b8

/* Function Stack Size: 0x18 bytes */

void WCRefineChatIndentOverrideHelper::alertConfirmSink_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ulong local_60;
  undefined8 local_48;
  ulong local_40;
  uint local_34;
  long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = DAT_028e2a10;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clearEditingState_026ab590);
    local_34 = 1;
  }
  else {
    if (local_28 == 0) {
      local_60 = DAT_028e2a20;
    }
    else {
      local_60 = local_28;
    }
    FUN_00ecde38();
    _objc_retainAutoreleasedReturnValue();
    local_48 = 0;
    local_40 = local_60;
    FUN_00ece9b8(local_60,&local_48,500);
    bVar1 = (local_60 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_saveSinkOverrideForSession_value_026ab5a8,local_30,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_USJNl);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_refreshActiveChatLayoutForSessio_026a0bd8,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clearEditingState_026ab590);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resetSwitchToOff_026ab598);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clearEditingState_026ab590);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

