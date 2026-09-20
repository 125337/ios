// applyMosaicSelection @ 0167e58c

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyMosaicSelection(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureCropSelection_026b24b8);
  if ((IVar1 & 1) != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mosaicBrushStyle_026b27a8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setMosaicBrushMode__026b2818,0);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mosaicPan_026b1d68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropPan_026b1d20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mosaicAttrBar_026b1de8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyProcessedCropWithStyle__026b2820,IVar1)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshCropChrome_026b1e98);
  }
  return;
}

