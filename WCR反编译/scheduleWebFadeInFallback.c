// scheduleWebFadeInFallback @ 01e8e0e8

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::scheduleWebFadeInFallback(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             param_1,PTR_s_forceWebFadeIn_026c7300);
  uVar1 = DAT_028e47d8;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47d8,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWebFadeInFallbackSignature__026c7308);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4004000000000000,param_1,PTR_s_performSelector_withObject_after_026a4990,
             PTR_s_forceWebFadeIn_026c7300,0);
  return;
}

