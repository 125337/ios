// onCropCornerChanged: @ 01671d80

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::onCropCornerChanged_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCropCornerRadius__026b2590);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropCornerRadius_026b1eb0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_shapeCornerValueLab_026b2648);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistCropShapePreferences_026b24e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshCropChrome_026b1e98);
  _objc_storeStrong(&local_28,0);
  return;
}

