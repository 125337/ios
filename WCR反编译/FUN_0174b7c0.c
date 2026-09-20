// FUN_0174b7c0 @ 0174b7c0

void FUN_0174b7c0(long param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_integerValue_026ca750);
    if ((lVar1 < 1) || (10 < lVar1)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_pe___W1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setThemeBoxConsecutiveErrorCount_026b4178,
                 lVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_saveConfig_0269e5d0);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

