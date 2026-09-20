// FUN_008dd6dc @ 008dd6dc

void FUN_008dd6dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*DAT_028ce2f0)(param_1,param_2);
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    _WCRVoiceProgressSeekHideOverlay(param_1);
  }
  else {
    _WCRVoiceProgressSeekSetupIfNeeded(param_1);
  }
  return;
}

