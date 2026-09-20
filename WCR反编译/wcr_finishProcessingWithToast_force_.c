// wcr_finishProcessingWithToast:force: @ 00702f04

/* Function Stack Size: 0x1c bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_finishProcessingWithToast_force_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  undefined *local_58;
  byte local_4d;
  byte local_39;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_disarmProcessingWatchdog_026a7390);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_stopTrackingExportProgress_026a7170);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_4d = true;
  if (lVar1 != 0) {
    lVar1 = local_38;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf_1Y_);
    local_4d = false;
    local_60 = lVar1;
    local_58 = puVar3;
    if (lVar1 == 0x7fffffffffffffff) {
      lVar1 = local_38;
      puVar3 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf_eHe);
      local_4d = false;
      local_70 = lVar1;
      local_68 = puVar3;
      if (lVar1 == 0x7fffffffffffffff) {
        lVar1 = local_38;
        puVar3 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf_lg);
        local_4d = false;
        local_80 = lVar1;
        local_78 = puVar3;
        if (lVar1 == 0x7fffffffffffffff) {
          lVar1 = local_38;
          puVar3 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&::cf___);
          local_4d = lVar1 == 0x7fffffffffffffff;
          local_90 = lVar1;
          local_88 = puVar3;
        }
      }
    }
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressHUD_026a7178);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 == 0) {
    if (((local_39 & 1) != 0) &&
       (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       lVar1 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_showToast__026a6ef8,local_38);
    }
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressHUD_026a7178);
    _objc_retainAutoreleasedReturnValue();
    local_98 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProgressHUD__026a72d8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_finishWithText_success__026a73e0,local_38,local_4d & 1);
    _objc_storeStrong(&local_98,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProcessing__026a6ff0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProcessingLocalIdentifier__026a6ff8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSilentCatchupScan__026a6ee8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_refreshRecordingBaselineSnap_026a6e10);
  _objc_storeStrong(&local_38,0);
  return;
}

