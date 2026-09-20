// wcr_removeScreenshotObservers @ 015e52d8

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::wcr_removeScreenshotObservers(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_willShotObserver_026b1210);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = local_28;
  if (IVar2 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_willShotObserver_026b1210);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeObserver__0269f128);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWillShotObserver__026b11f0,0);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_didShotObserver_026b1218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = local_28;
  if (IVar2 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_didShotObserver_026b1218);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeObserver__0269f128);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDidShotObserver__026b11f8,0);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_systemShotObserver_026b1220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar1 = local_28;
  if (IVar2 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_systemShotObserver_026b1220);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeObserver__0269f128);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSystemShotObserver__026b1208,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setScreenshotObsInstalled__026b11d8,0);
  _objc_storeStrong(&local_28,0);
  return;
}

