// copyDownloadPassword @ 017043e8

/* Function Stack Size: 0x10 bytes */

void SuanGuoRedeemViewController::copyDownloadPassword(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentDownloadPassword_026b3728);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentDownloadPassword_026b3728);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cS_x_Y6R);
  }
  return;
}

