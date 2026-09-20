// createPointMarkerAtLocation:index:isSecondSet: @ 01d490f4

/* Function Stack Size: 0x2c bytes */

void __thiscall
WCRefineScreenshotFrameEditorViewController::createPointMarkerAtLocation_index_isSecondSet_
          (WCRefineScreenshotFrameEditorViewController *this,ID param_1,SEL param_2,CGPoint param_3,
          long_long param_4,bool param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined8 in_d0;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 in_d1;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined *local_258;
  double local_1f0;
  undefined *local_180;
  byte local_171;
  undefined *local_170;
  byte local_161;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  undefined *local_138;
  double local_130;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  undefined *local_e0;
  double local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  byte local_b1;
  double local_b0;
  SEL local_a8;
  ID local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar9 = DAT_02324020;
  local_b0 = param_3.field0_0x0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b1 = param_3.field1_0x8._0_1_;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_a8 = param_2;
  local_a0 = param_1;
  local_98 = in_d0;
  uStack_90 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02324020,DAT_02339db0,DAT_02323e70,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02332e58,DAT_02339af0,DAT_02332e18,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323d48,DAT_02323e10,DAT_02323e40,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023243c0,DAT_02339dc8,DAT_02323ec0,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_68 = &cf_1;
  local_60 = &cf_2;
  local_58 = &cf_3;
  local_50 = &cf_4;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,4);
  _objc_retainAutoreleasedReturnValue();
  local_88 = &cf_5;
  local_80 = &cf_6;
  local_78 = &cf_7;
  local_70 = &cf_8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88,4);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = 24.0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_d0 = puVar2;
  _objc_alloc();
  uVar10 = 0;
  uVar7 = 0;
  dVar11 = local_d8;
  dVar12 = local_d8;
  FUN_01d42a30();
  local_100 = uVar7;
  local_f8 = uVar10;
  local_f0 = dVar11;
  local_e8 = dVar12;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar10,puVar1,PTR_s_initWithFrame__026ca6e8);
  uStack_108 = uStack_90;
  local_110 = local_98;
  uStack_118 = uStack_90;
  local_120 = local_98;
  local_e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,uStack_90,puVar1,PTR_s_setCenter__026ca8c0);
  local_128 = (long)local_b0 % 4;
  if ((local_b1 & 1) == 0) {
    local_1f0 = local_b0;
  }
  else {
    local_1f0 = (double)((long)local_b0 + 4);
  }
  local_130 = local_1f0;
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_128)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar7 = 0x4000000000000000;
  dVar8 = local_d8 / 2.0;
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff8000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  uVar9 = DAT_02323d00;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setTag__026caa80,(long)local_130 + 1000);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
  local_158 = uVar9;
  local_150 = uVar7;
  local_148 = dVar11;
  local_140 = dVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,uVar7,dVar11,dVar12,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_161 = 0;
  local_171 = 0;
  local_138 = puVar1;
  if ((local_b1 & 1) == 0) {
    local_258 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_171 = 1;
    local_170 = local_258;
  }
  else {
    local_258 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_161 = 1;
    local_160 = local_258;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setText__026caa88,local_258);
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addSubview__026ca4c0,local_138);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_180 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addGestureRecognizer__026ca4a8,local_180);
  IVar6 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  if ((local_b1 & 1) == 0) {
    IVar6 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_pointViews_026c4800);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
  }
  else {
    IVar6 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_pointViews2_026c4818);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
  }
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

