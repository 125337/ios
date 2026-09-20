// toggleBrand: @ 0194f748

/* Function Stack Size: 0x18 bytes */

void WCRefineEnhancedAdBlockViewController::toggleBrand_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_ensureInternalAccessForToggle__026b9a70,local_28);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifySettingsChanged_026b9a80);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

