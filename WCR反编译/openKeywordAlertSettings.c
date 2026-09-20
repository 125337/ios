// openKeywordAlertSettings @ 01a4b5b0

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::openKeywordAlertSettings(ID param_1,SEL param_2)

{
  int iVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  iVar1 = 0x25a7340;
  FUN_01a19cf0(&cf_keyword_alert,1,0x3c9e17a4,0);
  if (iVar1 + -2 != 0) {
    pcVar2 = "WCRefineKeywordAlertViewController";
    _objc_getClass(iVar1 + -2);
    local_28 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_sQ_cub_gR_e_TQ);
    }
    else {
      _objc_alloc_init();
      IVar3 = local_18;
      local_30 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if ((IVar4 & 1) == 0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      else {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

