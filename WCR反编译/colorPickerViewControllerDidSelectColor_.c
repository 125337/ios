// colorPickerViewControllerDidSelectColor: @ 01667b78

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::colorPickerViewControllerDidSelectColor_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotatePickingTextFill_026b2430);
  if ((IVar1 & 1) == 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedColor_026b2420);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomAnnotateColor__026b1c00);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedColor_026b2420);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateColor__026b1bf8);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotatePickerColorIndex_026b2030);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateColorIndex__026b1c30,IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshPenColorSelectionUI_026b23d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyStrokeColorToActiveAnnotati_026b2418);
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedColor_026b2420);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomAnnotateTextFillColor__026b1c10);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedColor_026b2420);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateTextFillColor__026b1c08);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateTextFillPickerIndex_026b2058);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateTextFillIndex__026b1c38,IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshAnnotateTextFillSelection_026b23e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyTextFillToActiveAnnotation_026b2428);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

