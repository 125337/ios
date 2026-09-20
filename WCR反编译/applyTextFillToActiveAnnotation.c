// applyTextFillToActiveAnnotation @ 016510e0

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyTextFillToActiveAnnotation(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_58;
  ID local_48;
  uint local_40;
  byte local_39;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentAnnotateTextFillColor_026b20c8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateTextFillColor__026b1c08,param_1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  local_58 = IVar1;
  if (IVar1 == 0) {
    local_58 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastTextAnnotationOverlay_026b20b0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  local_39 = IVar1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_30 == 0) {
    local_40 = 1;
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTextOverlay_026b20a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectTextOverlay__026b20f8,local_30);
    }
    IVar1 = local_30;
    FUN_0164fd1c();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar1;
    if (IVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setBackgroundColor__026ca888,local_28);
      _objc_setAssociatedObject(local_30,DAT_028c6010,local_28,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_resyncTextAnnotationSnapshot__026b20e8,local_30);
    }
    local_40 = (uint)(IVar1 == 0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

