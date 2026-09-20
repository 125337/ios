// dismissShapeAttrBar @ 016720fc

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::dismissShapeAttrBar(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined4 local_30;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shapeAttrBar_026b1df0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = 1;
  if (IVar1 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shapeAttrBar_026b1df0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = (uint)IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_30 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_persistCropShapePreferences_026b24e8);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shapeAttrBar_026b1df0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasActiveCropSelection_026b1f60);
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
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_defaultHintText_026b1ed8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hintLabel_026b1ca0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  return;
}

