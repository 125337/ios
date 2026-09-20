// updateColorFromRGBComponents @ 019084f8

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineColorPickerController::updateColorFromRGBComponents
          (WCRefineColorPickerController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  float fVar4;
  double in_d0;
  undefined *local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_redSlider_026b8780);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  fVar4 = SUB84(in_d0,0);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_18;
  local_28 = (long)fVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_greenSlider_026b87b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  fVar4 = SUB84(in_d0,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  local_30 = (long)fVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_blueSlider_026b87e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  fVar4 = SUB84(in_d0,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_38 = (long)fVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlpha_026b8978);
  in_d0 = in_d0 * 255.0;
  local_40 = (long)in_d0;
  local_48 = (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlpha_026b8978);
  if (1.0 <= in_d0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf___02lX_02lX_02lX);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf___02lX_02lX_02lX_02lX);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isLightMode_026b8018);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentDarkHex__026b8558,local_48);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentLightHex__026b8550,local_48);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateCurrentColorFromHex_026b85b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateColorDisplay_026b85c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateHexTextField_026b8990);
  _objc_storeStrong(&local_48,0);
  return;
}

