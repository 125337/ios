// onPickAnnotateTextFill: @ 0166769c

/* WARNING: Removing unreachable block (ram,0x016679e8) */
/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRSuperFloatCropViewController::onPickAnnotateTextFill_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  double in_d0;
  ID local_70;
  ID local_58;
  undefined4 local_50;
  byte local_49;
  ID local_48;
  undefined *local_40;
  ID local_38;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_30 = lVar2 - 400;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateTextFillPickerIndex_026b2058);
  local_38 = IVar3;
  if (local_30 == IVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateTextFillIndex__026b1c38,IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotatePickingTextFill__026b1c40,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshAnnotateTextFillSelection_026b23e0);
    puVar4 = PTR__OBJC_CLASS___UIColorPickerViewController_026cee80;
    _objc_alloc_init();
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setDelegate__026ca910,local_18);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_customAnnotateTextFillColor_026b2068);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    local_70 = IVar3;
    if (IVar3 == 0) {
      local_70 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAnnotateTextFillColor_026b20c8);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_70;
    }
    local_49 = IVar3 == 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSelectedColor__026b2408,local_70);
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_selectedColor_026b2420);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
    _CGColorGetAlpha();
    dVar1 = DAT_02323d38;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (in_d0 < dVar1) {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_02323e88);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSelectedColor__026b2408);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSupportsAlpha__026b2410,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
    _objc_storeStrong(&local_40,0);
    local_50 = 1;
  }
  else {
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_annotateTextFillPresetColors_026b2050);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_30;
    local_58 = IVar6;
    if (((long)local_30 < 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_count_0269cfe0),
       (long)IVar6 <= (long)IVar3)) {
      local_50 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setAnnotateTextFillIndex__026b1c38,local_30);
      IVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotateTextFillColor__026b1c08);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAnnotatePickingTextFill__026b1c40,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_refreshAnnotateTextFillSelection_026b23e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyTextFillToActiveAnnotation_026b2428)
      ;
      local_50 = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

