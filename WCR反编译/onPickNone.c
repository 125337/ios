// onPickNone @ 01bfbaa8

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsTailPickerViewController::onPickNone(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postSessionMode_026c0b80);
  if ((IVar1 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onPick_026b9b08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 != 0) {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onPick_026b9b08);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(IVar1 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___Ne>__);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rebuildPresetList_026c0bc8);
  }
  else {
    _WCRMomentsTailSetPostSessionAppID(&::cf___);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onPick_026b9b08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 != 0) {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_onPick_026b9b08);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(IVar1 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gage>__);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rebuildPresetList_026c0bc8);
  }
  return;
}

