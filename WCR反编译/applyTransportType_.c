// applyTransportType: @ 019586c0

/* Function Stack Size: 0x18 bytes */

void WCRefineFakeLocationSettingsViewController::applyTransportType_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setFakeLocationMoveTransportType_026b9c20,local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_speedMpsForTransportType__026ac640,
             local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setFakeLocationMoveSpeedMps__026ac748);
  puVar1 = PTR_WCRefineFakeLocationEngine_026ceb80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setFakeLocationMoveRunning__026ac6d0,0);
    puVar1 = PTR_WCRefineFakeLocationEngine_026ceb80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Rbce);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  _objc_storeStrong(&local_30,0);
  return;
}

