// applyAnnotateShapeTool: @ 01661a68

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::applyAnnotateShapeTool_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  cfstringStruct *local_190;
  double local_158;
  long_long local_118;
  long_long local_110;
  undefined *local_f8;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  byte local_c9;
  long_long local_c8;
  long_long local_c0;
  long_long local_b8;
  undefined4 local_ac;
  long_long local_a8;
  undefined4 local_9c;
  long_long local_98;
  SEL local_90;
  ID local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_9c = 0;
  local_ac = 10;
  local_110 = param_3;
  if (10 < (long)param_3) {
    local_110 = 10;
  }
  local_c0 = local_110;
  local_a8 = local_110;
  if ((long)local_110 < 1) {
    local_118 = 0;
  }
  else {
    local_118 = local_110;
  }
  local_c8 = local_118;
  local_b8 = param_3;
  local_98 = param_3;
  local_90 = param_2;
  local_88 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setAnnotateShapeTool__026b1c48,local_118);
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateShapeTool_026b1e28);
  local_c9 = IVar4 == 8;
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_penSizeLabel_026b2328);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  uVar1 = 0;
  if ((local_c9 & 1) == 0) {
    uVar1 = 0x3fc00000;
  }
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_penSizeSlider_026b2330);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  uVar2 = 0x42200000;
  if ((local_c9 & 1) == 0) {
    uVar2 = 0x41900000;
  }
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_penSizeSlider_026b2330);
  _objc_retainAutoreleasedReturnValue();
  local_158 = (double)(ulong)uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if ((local_c9 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateLineWidth_026b2048);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateHighlightCornerRadius_026b2150);
  }
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_penSizeSlider_026b2330);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((float)local_158);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_refreshSpotlightOpacityUI_026b2348);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rebuildSpotlightLayer_026b1e70);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_refreshAnnotateShapeToolUI_026b2350);
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateMode_026b1e08);
  if (((IVar4 & 1) != 0) &&
     (IVar4 = local_88,
     (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateShapeTool_026b1e28), IVar4 != 9))
  {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateShapeTool_026b1e28);
  }
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_drawTap_026b1d50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  local_80 = &cf_1u_;
  local_78 = &cf__4Y;
  local_70 = &cf_v_;
  local_68 = &cf_wb_;
  local_60 = &cf__iW;
  local_58 = &::cf_N;
  local_50 = &cf_Nf;
  local_48 = &cf_Wwb_;
  local_40 = &::cf_N;
  local_38 = &cf_eW_;
  local_30 = &cf__S;
  pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80,0xb
            );
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_88;
  local_d8 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateShapeTool_026b1e28);
  bVar3 = false;
  if (-1 < (long)IVar4) {
    IVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateShapeTool_026b1e28);
    pcVar5 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    local_190 = local_d8;
    if ((long)IVar4 < (long)pcVar5) {
      IVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateShapeTool_026b1e28);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_objectAtIndexedSubscript__0269cc78,IVar4);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      local_e8 = local_190;
      goto LAB_01662020;
    }
  }
  local_190 = &cf_1u;
LAB_01662020:
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_190;
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hintBlur_026b1c90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hintLabel_026b1ca0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateShapeTool_026b1e28);
  if (IVar4 == 9) {
    IVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hintLabel_026b1ca0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  else {
    IVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateShapeTool_026b1e28);
    if (IVar4 == 10) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setAnnotationSerial__026b1b48,0);
      IVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hintLabel_026b1ca0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    else {
      IVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_annotateShapeTool_026b1e28);
      if (IVar4 != 8) {
        local_f8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_hl_);
        _objc_retainAutoreleasedReturnValue();
      }
      IVar6 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_hintLabel_026b1ca0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      if (IVar4 != 8) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_persistLastAnnotateTool_026b2358);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

