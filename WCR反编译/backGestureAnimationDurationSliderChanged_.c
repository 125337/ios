// backGestureAnimationDurationSliderChanged: @ 01a50660

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::backGestureAnimationDurationSliderChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  double local_70;
  double local_68;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  fVar4 = 100.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  local_68 = (double)(long)(fVar4 / 10.0) * 10.0;
  if (local_68 <= 100.0) {
    local_68 = 100.0;
  }
  if (local_68 <= 800.0) {
    local_70 = local_68;
  }
  else {
    local_70 = 800.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)((float)local_70,local_28,PTR_s_setValue__026a51b0);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70 / 1000.0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_18;
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,IVar1,PTR_s_updateBackGestureAnimationDurati_026bcba0);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

