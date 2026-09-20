// teardown @ 015e5d60

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::teardown(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dismissCellActionMenu_026b1298);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelIdleSnap_026b12a0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelAvatarRestore_026b12a8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_cancelCaptureVisualRestore_026b1288);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_cancelPassThroughRestore_026b1260);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setScreenshotPassThrough__026b1258,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCaptureHidden__026b1280,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_removeScreenshotObservers_026b12b0);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_secureCanvas_026b1180);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSecureCanvas__026b1190);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSecureField__026b1188,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSecureShieldOn__026b11c0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHidden__026ca970,1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWindowScene__026caaf0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setRootViewController__026caa20,0);
  return;
}

