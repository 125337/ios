// onAnnotateTextCancel @ 0165aef8

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::onAnnotateTextCancel(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotateMode_026b1e08);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditingTextOverlay__026b2188,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dismissAnnotateTextInputOverlay_026b2298);
  if ((IVar1 & 1) != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drawPan_026b1d38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotateShapeTool_026b1e28);
    if (IVar1 != 9) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotateShapeTool_026b1e28);
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drawTap_026b1d50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

