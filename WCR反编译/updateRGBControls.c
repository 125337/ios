// updateRGBControls @ 01907a3c

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::updateRGBControls(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  double dVar3;
  ID local_a8;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ID local_60;
  byte local_51;
  ID local_50;
  byte local_41;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLightMode_026b8018);
  local_41 = 0;
  local_51 = 0;
  local_a8 = local_28;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentDarkHex_026b8570);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_a8;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentLightHex_026b8560);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a8;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_colorFromHexString__026b30d8,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_getRed_green_blue_alpha__026ca660,&local_68,&local_70,&local_78,&local_80);
  dVar3 = local_80 * 100.0;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redSlider_026b8780);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((float)(long)(local_68 * 255.0));
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_greenSlider_026b87b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((float)(long)(local_70 * 255.0));
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_blueSlider_026b87e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((float)(long)(local_78 * 255.0));
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alphaSlider_026b8818);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((float)(long)dVar3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redTextField_026b87a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_greenTextField_026b87d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_blueTextField_026b87f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alphaTextField_026b8838);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,local_28,PTR_s_setCurrentAlpha__026b85a8);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  return;
}

