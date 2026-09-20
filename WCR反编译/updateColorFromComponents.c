// updateColorFromComponents @ 01906fa4

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineColorPickerController::updateColorFromComponents
          (WCRefineColorPickerController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentHue_026b8948);
  uVar4 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentSaturation_026b8950);
  uVar5 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentBrightness_026b8958);
  uVar6 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlpha_026b8978);
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,uVar4,uVar5,uVar6,puVar1,PTR_s_colorWithHue_saturation_brightne_026b8910);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hexStringFromColor__026b30d0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isLightMode_026b8018);
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentDarkHex__026b8558,local_30);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentLightHex__026b8550,local_30);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateColorDisplay_026b85c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateInputFields_026b85c8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

