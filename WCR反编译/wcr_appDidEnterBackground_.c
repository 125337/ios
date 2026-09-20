// wcr_appDidEnterBackground: @ 006e9c98

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_appDidEnterBackground_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_shouldObserveRecordingPostPr_026a6db8);
  if ((IVar1 & 1) != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_appEnteredBackgroundDate_026a6ea0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAppEnteredBackgroundDate__026a6eb0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_refreshRecordingBaselineSnap_026a6e10);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

