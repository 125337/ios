// onAnnotateTextConfirm @ 0165b074

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::onAnnotateTextConfirm(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  cfstringStruct *local_60;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textInputField_026b2228);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingTextPoint_026b22a0);
  IVar2 = local_18;
  local_38 = in_d0;
  local_30 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingTextOverlay_026b2258);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateMode_026b1e08);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissAnnotateTextInputOverlay_026b2298);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingTextOverlay__026b2188,0);
  if ((IVar3 & 1) != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_drawPan_026b1d38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateShapeTool_026b1e28);
    if (IVar2 != 9) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateShapeTool_026b1e28);
    }
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_drawTap_026b1d50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (local_40 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,local_30,local_18,PTR_s_placeTextAnnotation_atPoint__026b22b0,local_28);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_updateTextAnnotation_withText__026b22a8,local_40,local_28);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

