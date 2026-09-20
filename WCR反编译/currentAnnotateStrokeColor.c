// currentAnnotateStrokeColor @ 0164d698

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatCropViewController::currentAnnotateStrokeColor(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID local_b0;
  ID local_88;
  ID local_78;
  ID local_58;
  ID local_48;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotatePaletteColors_026b2020);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateColorIndex_026b2028);
  IVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotatePickerColorIndex_026b2030);
  if (IVar3 == IVar4) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customAnnotateColor_026b2038);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    bVar1 = false;
    local_78 = IVar3;
    if (IVar3 == 0) {
      local_38 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateColor_026b2040);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar1 = local_38 == 0;
      local_88 = local_38;
      if (bVar1) {
        local_48 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_48;
      }
      local_78 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateColorIndex_026b2028);
    if (-1 < (long)IVar3) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateColorIndex_026b2028);
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      local_18 = local_30;
      if ((long)IVar3 < (long)IVar4) {
        IVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateColorIndex_026b2028);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,IVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_0164da1c;
      }
    }
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateColor_026b2040);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = IVar3;
    if (IVar3 == 0) {
      local_58 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b0;
    if (IVar3 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
LAB_0164da1c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

