// refreshSettings @ 00eb75d4

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::refreshSettings(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_clampedInterval__026ab2c8,puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTimerInterval__026ab2e0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEnabled_026a0ef0);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_unregisterObserversIfNeeded_026ab2e8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stop_0269dd58);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_registerObserversIfNeeded_026ab2f0);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isInBackground_026ab300);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_startIfNeeded_026ab308);
    }
  }
  return;
}

