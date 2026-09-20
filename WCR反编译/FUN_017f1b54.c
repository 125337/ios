// FUN_017f1b54 @ 017f1b54

void FUN_017f1b54(float param_1,long param_2)

{
  long lVar1;
  double dVar2;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  if ((local_20 != 0) &&
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatValue_026a5b48);
    dVar2 = (double)param_1;
    if ((dVar2 < DAT_02323da8) || (10.0 < dVar2)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eV0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar2,*(undefined8 *)(param_2 + 0x20),PTR_s_setScreenshotFrameDelay__026b58a0);
      param_2 = param_2 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_2);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

