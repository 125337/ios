// wcr_screenCapturedDidChange: @ 006e926c

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_screenCapturedDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcr_handleCapturedState_reason__026a6e58,(uint)puVar2 & 1,
             &cf_capturenotification);
  _objc_storeStrong(&local_28,0);
  return;
}

