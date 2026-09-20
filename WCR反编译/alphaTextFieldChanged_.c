// alphaTextFieldChanged: @ 01908fb4

/* Function Stack Size: 0x18 bytes */

void WCRefineColorPickerController::alphaTextFieldChanged_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  if (local_38 < 0) {
    local_38 = 0;
  }
  if (100 < local_38) {
    local_38 = 100;
  }
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if (local_38 != lVar1) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setText__026caa88);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alphaSlider_026b8818);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((float)local_38);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            ((double)local_38 / 100.0,local_18,PTR_s_setCurrentAlpha__026b85a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateColorFromRGBComponents_026b89a0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

