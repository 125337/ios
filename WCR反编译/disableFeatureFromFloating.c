// disableFeatureFromFloating @ 00fe803c

/* Function Stack Size: 0x10 bytes */

void WCRefineIconNameCaptureSupport::disableFeatureFromFloating(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLiveCaptureArmed__026ad358,0);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  DAT_028e3098 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_syncFloatingControl_026ad4f8);
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__sQOSVhbS);
  return;
}

