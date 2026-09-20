// applyCropShapeUI: @ 0166eb88

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::applyCropShapeUI_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  double in_d0;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  double dVar8;
  undefined8 in_d2;
  double dVar9;
  double dVar10;
  uint local_1d4;
  long_long local_198;
  long_long local_190;
  undefined *local_188;
  undefined8 local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double local_110;
  double local_e0;
  double local_d8;
  double local_b0;
  byte local_a1;
  ID local_a0;
  ID local_98;
  long_long local_90;
  long_long local_88;
  long_long local_80;
  undefined4 local_74;
  long_long local_70;
  undefined4 local_64;
  long_long local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_64 = 0;
  local_74 = 3;
  local_190 = param_3;
  if (3 < (long)param_3) {
    local_190 = 3;
  }
  local_88 = local_190;
  local_70 = local_190;
  if ((long)local_190 < 1) {
    local_198 = 0;
  }
  else {
    local_198 = local_190;
  }
  local_90 = local_198;
  local_60 = local_198;
  local_80 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShapeUI_026b1ea8);
  local_98 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCropShapeUI__026b2588,local_60);
  if (local_60 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCropShape__026b1f98,0);
  }
  else if (local_60 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCropShape__026b1f98,0);
  }
  else if (local_60 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCropShape__026b1f98,1);
  }
  else if (local_60 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCropShape__026b1f98,2);
  }
  if (local_60 == 3) {
    if ((local_98 != 3) &&
       (IVar1 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasActiveCropSelection_026b1f60),
       (IVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_clearCropSelectionAllowingRecrea_026b1f88);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFreeformPath__026b1f38);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFreeformClosed__026b1f48,0);
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_freeformPoints_026b1f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_freeformPreviewLayer_026b1bc8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_freeformPreviewLayer_026b1bc8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_persistCropShapePreferences_026b24e8);
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_shapeAttrBar_026b1df0);
  _objc_retainAutoreleasedReturnValue();
  local_a1 = 0;
  local_1d4 = 0;
  if (IVar1 != 0) {
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_shapeAttrBar_026b1df0);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1d4 = (uint)IVar2 ^ 1;
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_1d4 & 1) != 0) {
    IVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_b0 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_shapeAttrBarHeight_026b1e88);
    IVar1 = local_50;
    local_d8 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toolbarScroll_026b1cb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetMinY(in_d0,in_d1,in_d2);
    dVar5 = (in_d0 - local_d8) - 10.0;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    dVar9 = 8.0;
    dVar8 = local_b0 + 8.0;
    local_e0 = dVar5;
    if (dVar5 < dVar8) {
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_toolbarScroll_026b1cb0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_120 = dVar5;
      local_118 = dVar8;
      local_110 = dVar9;
      _CGRectGetMaxY(dVar5,dVar8);
      dVar8 = 10.0;
      local_e0 = dVar5 + 10.0;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    dVar5 = local_e0;
    IVar1 = local_50;
    dVar6 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar10 = dVar9 - 24.0;
    uVar7 = 0x4028000000000000;
    local_160 = dVar6;
    local_158 = dVar8;
    local_150 = dVar9;
    FUN_0163f5dc();
    IVar2 = local_50;
    local_140 = uVar7;
    dStack_138 = dVar5;
    local_130 = dVar10;
    dStack_128 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_shapeAttrBar_026b1df0);
    _objc_retainAutoreleasedReturnValue();
    dStack_178 = dStack_138;
    local_180 = local_140;
    dStack_168 = dStack_128;
    local_170 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,dStack_138,local_130,dStack_128);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_refreshShapeAttrBarUI_026b25c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_refreshCropChrome_026b1e98);
  local_48 = &::cf_W;
  local_40 = &cf_wb_;
  local_38 = &cf_Wb_;
  local_30 = &cf_1uS;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_50;
  local_188 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hintBlur_026b1c90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hintLabel_026b1ca0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar4 = local_188;
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_objectAtIndexedSubscript__0269cc78,local_60)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__Rbc_N_);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hintLabel_026b1ca0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_188,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

