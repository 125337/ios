// enterAnnotateModeWithTool: @ 01680a34

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::enterAnnotateModeWithTool_
               (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  long_long local_78;
  long_long local_70;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mosaicBrushMode_026b1e10);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitMosaicBrushMode_026b2128);
  }
  local_70 = param_3;
  if (10 < (long)param_3) {
    local_70 = 10;
  }
  if ((long)local_70 < 1) {
    local_78 = 0;
  }
  else {
    local_78 = local_70;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotateMode_026b1e08);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensurePenAttrBar_026b2860);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setAnnotateMode__026b2850,1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setAnnotationSerial__026b1b48,0);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drawCanvas_026b1bd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drawPan_026b1d38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drawTap_026b1d50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropPan_026b1d20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_penAttrBar_026b1de0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_penAttrBar_026b1de0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_toolbarScroll_026b1cb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hintBlur_026b1c90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hintLabel_026b1ca0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshPenColorSelectionUI_026b23d8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshPenUndoEnabled_026b21a8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyAnnotateShapeTool__026b2320,local_78);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyAnnotateShapeTool__026b2320,local_78);
  }
  return;
}

