// openHistoryRecord: @ 01b29f18

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryViewController::openHistoryRecord_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  ID IVar7;
  ulong local_60;
  ID local_48;
  bool local_39;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_39 = false;
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    local_60 = 0;
  }
  else {
    local_60 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  IVar6 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resolvedRecord__026beb38,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar6;
  if (IVar6 != 0) {
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_locatingHistoryRecord_026bee30);
    if ((IVar6 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      IVar2 = local_18;
      IVar6 = local_48;
      IVar7 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_shouldAutoDeleteViewedHistoryRec_026beb90);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_locateHistoryRecord_autoRemoveOn_026beb98,IVar6,IVar7);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_Wl_MOzP);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

