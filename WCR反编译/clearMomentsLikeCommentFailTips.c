// clearMomentsLikeCommentFailTips @ 01c21748

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::clearMomentsLikeCommentFailTips(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  FUN_01c21838();
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgp__);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__nzz);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showWeToastDoneWithText__0269cee0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

