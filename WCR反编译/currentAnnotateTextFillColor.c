// currentAnnotateTextFillColor @ 0164ddf0

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatCropViewController::currentAnnotateTextFillColor(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_b0;
  undefined *local_88;
  undefined *local_78;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotateTextFillPresetColors_026b2050);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_20;
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateTextFillPickerIndex_026b2058);
  puVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateTextFillIndex_026b2060);
  if (puVar4 == puVar3) {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customAnnotateTextFillColor_026b2068);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    bVar1 = false;
    local_78 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_40 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateTextFillColor_026b2070);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar1 = local_40 == (undefined *)0x0;
      local_88 = local_40;
      if (bVar1) {
        local_50 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_50;
      }
      local_78 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateTextFillIndex_026b2060);
    if (-1 < (long)puVar3) {
      puVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateTextFillIndex_026b2060);
      puVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      local_18 = local_30;
      if ((long)puVar3 < (long)puVar4) {
        puVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateTextFillIndex_026b2060);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,puVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_0164e178;
      }
    }
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_annotateTextFillColor_026b2070);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_60 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b0;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
LAB_0164e178:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

