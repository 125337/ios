// handleAvatarBeautifySliderChanged: @ 0181d52c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineAvatarCornerBeautifyViewController::handleAvatarBeautifySliderChanged_
          (WCRefineAvatarCornerBeautifyViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  float in_s0;
  double dVar2;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6510);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_integerValue_026ca750);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    dVar2 = (double)in_s0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_dampedHalfStepValueFromRaw_slide_026b61c0,local_28,lVar1);
    if (0.001 < ABS((float)(dVar2 - (double)in_s0))) {
      (*(code *)PTR__objc_msgSend_02578628)((float)dVar2,local_28,PTR_s_setValue__026a51b0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_applyAvatarBeautifySlider__026b61c8,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshAvatarPreviewOnly_026b61d0);
    _objc_setAssociatedObject(local_28,DAT_028c64f8);
    _objc_setAssociatedObject(local_28,DAT_028c6500,0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

