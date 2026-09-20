// sizeSliderChanged: @ 01e1e2dc

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineSuperFloatSettingsViewController::sizeSliderChanged_
          (WCRefineSuperFloatSettingsViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  float in_s0;
  double dVar4;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  dVar4 = (double)in_s0;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_snappedSliderValueForTag_raw__026c5f10,puVar2);
  (*(code *)PTR__objc_msgSend_02578628)((float)dVar4,local_28,PTR_s_setValue_animated__026ba900,0);
  IVar1 = local_18;
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar4,IVar1,PTR_s_updateSliderValueButton_tag_valu_026c5f18,puVar2,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (puVar2 == (undefined *)0x11941) {
    _WCRSuperFloatPreviewBallSize(0,dVar4);
    _UIAccessibilityIsVoiceOverRunning();
    IVar1 = local_18;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,IVar1,PTR_s_applySliderValue_forTag__026c5f20,puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyRuntimeOnly_026c5d90);
    }
  }
  else {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    if (puVar2 == &DAT_00011950) {
      _WCRSuperFloatPreviewBallIconCorner(0,dVar4);
      _UIAccessibilityIsVoiceOverRunning();
      IVar1 = local_18;
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar4,IVar1,PTR_s_applySliderValue_forTag__026c5f20,puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyRuntimeOnly_026c5d90);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      IVar1 = local_18;
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar4,IVar1,PTR_s_applySliderValue_forTag__026c5f20,puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyRuntimeOnly_026c5d90);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

