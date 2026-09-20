// alphaSliderChanged: @ 01908398

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineColorPickerController::alphaSliderChanged_
          (WCRefineColorPickerController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  float in_s0;
  float fVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  fVar3 = SUB84((double)in_s0,0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alphaTextField_026b8838);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  (*(code *)PTR__objc_msgSend_02578628)
            ((double)fVar3 / 100.0,local_18,PTR_s_setCurrentAlpha__026b85a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateColorFromRGBComponents_026b89a0);
  _objc_storeStrong(&local_28,0);
  return;
}

