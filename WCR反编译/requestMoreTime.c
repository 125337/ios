// requestMoreTime @ 00eb81d4

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::requestMoreTime(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  double in_d0;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEnabled_026a0ef0);
  if (((IVar1 & 1) != 0) &&
     (IVar1 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isInBackground_026ab300),
     (IVar1 & 1) != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((in_d0 < 30.0) && ((0.0 < in_d0 && (in_d0 < 1000000.0)))) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureAudioPlaying_026ab3b8);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_endBackgroundTask_026ab350);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_beginBackgroundTaskIfNeeded_026ab3c0);
    }
  }
  return;
}

