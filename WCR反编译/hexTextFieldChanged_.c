// hexTextFieldChanged: @ 01908b08

/* Function Stack Size: 0x18 bytes */

void WCRefineColorPickerController::hexTextFieldChanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isValidHexString__026b89b0,uVar1);
  if ((IVar2 & 1) != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isLightMode_026b8018);
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentDarkHex__026b8558,local_30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentLightHex__026b8550,local_30);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateCurrentColorFromHex_026b85b8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateColorDisplay_026b85c0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

