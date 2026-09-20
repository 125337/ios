// openEnhancedAdBlockSettings @ 01a4bb34

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::openEnhancedAdBlockSettings(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _WCRefineEnhancedAdBlockFeatureAllowed();
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__nc_y
               ,&cf_X__S__JTN_Q__u7b,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    pcVar2 = "WCRefineEnhancedAdBlockViewController";
    _objc_getClass();
    local_28 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_X__S__JTub_gR_e_TQ)
      ;
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

