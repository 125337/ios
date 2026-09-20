// alertConfirmIndent: @ 00ecdc2c

/* Function Stack Size: 0x18 bytes */

void WCRefineChatIndentOverrideHelper::alertConfirmIndent_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ulong local_68;
  undefined8 local_50;
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
      local_68 = DAT_028e2a20;
    }
    else {
      local_68 = local_28;
    }
    FUN_00ecde38();
    _objc_retainAutoreleasedReturnValue();
    local_48 = 0;
    local_50 = 0;
    local_40 = local_68;
    FUN_00ece22c(local_68,&local_48,&local_50,0x32);
    bVar1 = (local_68 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_saveIndentOverrideForSession_lef_026ab5a0,local_30,local_48,local_50
                );
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_USJ__);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_refreshActiveChatLayoutForSessio_026a0bd8,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clearEditingState_026ab590);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_<h_:yO);
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

