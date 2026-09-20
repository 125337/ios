// wcr_applyIPadLoginMode:tip: @ 01a47a04

/* Function Stack Size: 0x20 bytes */

void WCRefineGeneralFunctionViewController::wcr_applyIPadLoginMode_tip_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = (undefined *)param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar3 = local_28;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == puVar3) {
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_flushConfigWriteSync_026a2e38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    local_40 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_WCRefine,local_30,&cf_wSN,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      local_34 = 0;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zT_T,local_18);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zsS_T,local_18,
                 PTR_s_handleImmediateRestart__026bc4b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}

