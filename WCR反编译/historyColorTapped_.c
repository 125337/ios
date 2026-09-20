// historyColorTapped: @ 0190b4f8

/* Function Stack Size: 0x18 bytes */

void WCRefineColorPickerController::historyColorTapped_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_40;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_historyColors_026b88d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_objectAtIndexedSubscript__0269cc78,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hexStringFromColor__026b30d0,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isLightMode_026b8018);
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentDarkHex__026b8558,local_38);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentLightHex__026b8550,local_38);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateCurrentColorFromHex_026b85b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateColorDisplay_026b85c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateInputFields_026b85c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateIndicatorPositions_026b88e8);
  puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

