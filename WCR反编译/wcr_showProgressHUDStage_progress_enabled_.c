// wcr_showProgressHUDStage:progress:enabled: @ 006fe294

/* Function Stack Size: 0x24 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_showProgressHUDStage_progress_enabled_
               (ID param_1,SEL param_2,ID param_3,double param_4,bool param_5)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((param_5 & 1) != 0) &&
     (IVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_isApplicationActive_026a6ed8),
     (IVar1 & 1) != 0)) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_progressHUD_026a7178);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == 0) {
      puVar2 = PTR_WCRefineScreenRecordingProgressHUD_026ce8b0;
      _objc_alloc_init();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setProgressHUD__026a72d8,puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_progressHUD_026a7178);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_4);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

