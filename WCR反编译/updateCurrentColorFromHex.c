// updateCurrentColorFromHex @ 01907144

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::updateCurrentColorFromHex(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ID local_50;
  byte local_41;
  ID local_40;
  byte local_31;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLightMode_026b8018);
  local_31 = 0;
  local_41 = 0;
  local_78 = local_18;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentDarkHex_026b8570);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_78;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentLightHex_026b8560);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_78;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_colorFromHexString__026b30d8,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_getHue_saturation_brightness_alp_026ca658,&local_58,&local_60,&local_68,
             auStack_70);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,local_18,PTR_s_setCurrentHue__026b8590);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,local_18,PTR_s_setCurrentSaturation__026b8598);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,local_18,PTR_s_setCurrentBrightness__026b85a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateSaturationBrightnessBackgr_026b8938);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateIndicatorPositionsAnimated_026b8940,1);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_28,0);
  return;
}

