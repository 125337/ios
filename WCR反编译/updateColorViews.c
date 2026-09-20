// updateColorViews @ 019e69e8

/* Function Stack Size: 0x10 bytes */

void WCRefineGlyphDrawingEditorViewController::updateColorViews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 local_a0;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentColor_026bb0b8);
  _objc_retainAutoreleasedReturnValue();
  if (IVar1 == 0) {
    local_28 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
  }
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_canvasView_026bb0c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentColor_026bb0b8);
  _objc_retainAutoreleasedReturnValue();
  if (IVar1 == 0) {
    local_38 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
  }
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_colorPreviewButton_026bb090);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentColor_026bb0b8);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_48 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_48;
  }
  FUN_019e6d9c();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hexField_026bb0a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(local_a0);
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_canvasView_026bb0c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

