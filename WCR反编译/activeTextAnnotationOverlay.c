// activeTextAnnotationOverlay @ 0164f32c

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatCropViewController::activeTextAnnotationOverlay(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined4 local_38;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedTextOverlay_026b20a8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = 0;
  if (IVar1 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedTextOverlay_026b20a8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_0164f268();
    local_38 = (uint)IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_38 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotateShapeTool_026b1e28);
    if (IVar1 == 9) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lastTextAnnotationOverlay_026b20b0);
      _objc_retainAutoreleasedReturnValue();
      local_18 = param_1;
    }
    else {
      local_18 = 0;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedTextOverlay_026b20a8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

