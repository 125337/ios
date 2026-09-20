// showAutoDownloadUsageActions @ 01a59290

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::showAutoDownloadUsageActions(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    puVar2 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_usedBytesDisplayText_026bce40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_limitDisplayText_026bb8f8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S_MR_U_);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_40 = puVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nd_X_,local_18,
               PTR_s_clearAutoDownloadCacheConfirmed_026bce48);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

