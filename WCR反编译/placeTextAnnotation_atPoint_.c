// placeTextAnnotation:atPoint: @ 0165b868

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void __thiscall
WCRSuperFloatCropViewController::placeTextAnnotation_atPoint_
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2,ID param_3,CGPoint param_4)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  uint local_324;
  double local_2a8;
  double local_278;
  undefined *local_238 [3];
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  undefined *local_200;
  undefined *local_1f8 [5];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  double local_1c0;
  double dStack_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  double dStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  int local_a4;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined *local_68;
  ID local_60;
  undefined4 local_54;
  long local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  lVar2 = local_48;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__geQeW_);
    local_54 = 1;
  }
  else {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentAnnotateTextFillColor_026b20c8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_60 = IVar3;
    _objc_alloc();
    dVar10 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
              );
    local_68 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,local_50);
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentAnnotateStrokeColor_026b20d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    dVar7 = 14.0;
    local_70 = 14.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentAnnotateLineWidth_026b20d8);
    local_78 = dVar7 * 4.0;
    local_278 = local_78;
    if (local_78 <= local_70) {
      local_278 = local_70;
    }
    local_80 = local_278;
    uVar9 = *(undefined8 *)PTR__UIFontWeightSemibold_02578160;
    (*(code *)PTR__objc_msgSend_02578628)(local_278,puVar1,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setNumberOfLines__026ca9d8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setBackgroundColor__026ca888,local_60);
    puVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0x4018000000000000;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setClipsToBounds__026ca8c8,1);
    puVar1 = local_68;
    local_a4 = 0x78;
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar7 = dVar10 * DAT_02323c98;
    local_d0 = uVar8;
    local_c8 = uVar9;
    local_c0 = dVar10;
    local_b8 = uVar12;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_2a8 = dVar7;
    if (dVar7 <= (double)(long)local_a4) {
      local_2a8 = (double)(long)local_a4;
    }
    local_d8 = local_2a8;
    dVar10 = 1.7976931348623157e+308;
    local_b0 = dVar7;
    FUN_0163f628();
    local_a0 = local_2a8;
    local_98 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_sizeThatFits__0269ec10);
    dVar11 = local_2a8 + 16.0;
    dVar13 = dVar10 + 10.0;
    uVar9 = 0;
    uVar12 = 0;
    local_90 = local_2a8;
    local_88 = dVar10;
    FUN_0163f5dc();
    local_120 = uVar12;
    uStack_118 = uVar9;
    local_110 = dVar11;
    dStack_108 = dVar13;
    local_f8 = uVar12;
    uStack_f0 = uVar9;
    local_e8 = dVar11;
    dStack_e0 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setBounds__026ca8a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextAlignment__026caa90);
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_bounds_026ca548);
    dVar7 = dVar11;
    dVar10 = dVar11;
    local_168 = uVar12;
    local_160 = uVar9;
    local_158 = dVar11;
    local_150 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_bounds_026ca548);
    uVar8 = 0;
    uVar12 = uVar8;
    local_188 = dVar7;
    local_180 = uVar9;
    local_178 = dVar10;
    local_170 = dVar13;
    FUN_0163f5dc();
    local_148 = uVar8;
    local_140 = uVar12;
    local_138 = dVar11;
    local_130 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithFrame__026ca6e8);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_128 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_bounds_026ca548);
    local_1d0 = uVar8;
    uStack_1c8 = uVar12;
    local_1c0 = dVar11;
    dStack_1b8 = dVar13;
    local_1a8 = uVar8;
    uStack_1a0 = uVar12;
    local_198 = dVar11;
    dStack_190 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar12,local_68,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setCenter__026ca8c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setUserInteractionEnabled__026caad8,1);
    puVar1 = local_128;
    uVar12 = DAT_028c6020;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar1,uVar12,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_setAssociatedObject(local_128,DAT_028c6028,local_68,1);
    _objc_setAssociatedObject(local_128,DAT_028c6010,local_60,1);
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1f8[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addGestureRecognizer__026ca4a8,puVar1);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_200 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setNumberOfTapsRequired__026ca9e0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addGestureRecognizer__026ca4a8,local_200);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_bounds_026ca548);
    local_220 = dVar11;
    dStack_218 = dVar13;
    local_210 = dVar11;
    dStack_208 = dVar13;
    _UIGraphicsBeginImageContextWithOptions(dVar11,dVar13,0,0);
    puVar1 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    _UIGraphicsGetCurrentContext();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_renderInContext__0269e300,puVar4);
    (*(code *)PTR__objc_release_02578630)();
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_238[0] = puVar1;
    _UIGraphicsEndImageContext();
    FUN_0164fe20(local_128,local_238[0]);
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingOverlays_026b1e00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFloatingOverlays__026b1be8);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingOverlays_026b1e00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toolbarScroll_026b1cb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_penAttrBar_026b1de0);
    _objc_retainAutoreleasedReturnValue();
    local_324 = 0;
    if (IVar3 != 0) {
      IVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_penAttrBar_026b1de0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_324 = (uint)IVar6 ^ 1;
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((local_324 & 1) != 0) {
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_penAttrBar_026b1de0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_bringSubviewToFront__026ca550);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selectTextOverlay__026b20f8,local_128);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_refreshPenUndoEnabled_026b21a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__mReW_);
    _objc_storeStrong(local_238);
    _objc_storeStrong(&local_200,0);
    _objc_storeStrong(local_1f8,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return;
}

