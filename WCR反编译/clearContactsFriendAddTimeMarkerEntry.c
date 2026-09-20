// clearContactsFriendAddTimeMarkerEntry @ 01a6974c

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::clearContactsFriendAddTimeMarkerEntry
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    pcVar3 = "WCUIAlertView";
    _objc_getClass();
    local_28 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_confirmClearContactsFriendAddTim_026bd238,0);
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_30 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nxnd,local_18,
                 PTR_s_confirmClearContactsFriendAddTim_026bd238);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

