// installPreviewPanelIfNeeded @ 019ec520

/* Function Stack Size: 0x10 bytes */

void WCRefineFontConvertViewController::installPreviewPanelIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  double in_d0;
  double dVar6;
  double dVar7;
  undefined8 in_d1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar10;
  double local_200;
  undefined *local_178;
  double local_170;
  undefined8 local_168;
  double local_160;
  undefined8 local_158;
  double local_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  undefined *local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  double local_e0;
  double local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined *local_80 [2];
  undefined8 local_70;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(in_d0,in_d1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar8 = 0x3ff0000000000000;
  local_38 = in_d0;
  if (in_d0 < 1.0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = uVar8;
    _CGRectGetWidth(in_d0,uVar8,in_d2,in_d3);
    local_38 = in_d0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewHeaderView_026bb190);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar9 = 0;
    uVar8 = 0;
    uVar10 = 0x4066000000000000;
    dVar6 = local_38;
    FUN_019e39e8();
    local_a0 = uVar8;
    local_98 = uVar9;
    local_88 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,uVar9,dVar6,uVar10,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_80[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setAutoresizingMask__026ca878,2);
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    local_cc = 0;
    local_d8 = local_38 - 32.0;
    local_200 = local_d8;
    if (local_d8 <= 0.0) {
      local_200 = 0.0;
    }
    local_e0 = local_200;
    uVar9 = 0x4030000000000000;
    uVar10 = 0x4024000000000000;
    uVar8 = 0x4063800000000000;
    FUN_019e39e8();
    local_c8 = uVar9;
    local_c0 = uVar10;
    local_b8 = local_200;
    local_b0 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setAutoresizingMask__026ca878);
    puVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    dVar6 = 12.0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_addSubview__026ca4c0,local_a8);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_bounds_026ca548);
    local_128 = dVar6;
    local_120 = uVar10;
    local_118 = local_200;
    local_110 = uVar8;
    _CGRectGetWidth(dVar6,uVar10,local_200,uVar8);
    dVar6 = dVar6 - 28.0;
    uVar8 = 0x402c000000000000;
    uVar9 = 0x4022000000000000;
    uVar10 = 0x4032000000000000;
    FUN_019e39e8();
    local_108 = uVar8;
    local_100 = uVar9;
    local_f8 = dVar6;
    local_f0 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setAutoresizingMask__026ca878,2);
    dVar7 = 12.0;
    uVar8 = *(undefined8 *)PTR__UIFontWeightMedium_02578150;
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar1 = local_e8;
    puVar3 = PTR_s_wcrFontPreviewExcluded_026bb240;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar1,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addSubview__026ca4c0,local_e8);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_bounds_026ca548);
    local_170 = dVar7;
    local_168 = uVar8;
    local_160 = dVar6;
    local_158 = uVar10;
    _CGRectGetWidth(dVar7,uVar8,dVar6,uVar10);
    dVar6 = 14.0;
    dVar7 = dVar7 - 28.0;
    uVar8 = 0x403f000000000000;
    uVar9 = 0x4056000000000000;
    FUN_019e39e8();
    local_150 = dVar6;
    local_148 = uVar8;
    local_140 = dVar7;
    local_138 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithFrame__026ca6e8);
    local_130 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setAutoresizingMask__026ca878,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setNumberOfLines__026ca9d8,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar1 = local_130;
    puVar3 = PTR_s_wcrFontPreviewExcluded_026bb240;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar1,puVar3,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addSubview__026ca4c0,local_130);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar6,uVar8,dVar7,uVar9);
    uVar10 = 0x4032000000000000;
    uVar9 = 0x402c000000000000;
    dVar6 = dVar6 - 28.0;
    uVar8 = 0x405f800000000000;
    FUN_019e39e8();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,uVar8,dVar6,uVar10,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_178 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setAutoresizingMask__026ca878,2);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4026000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setText__026caa88,&cf__e<O);
    puVar1 = local_178;
    puVar3 = PTR_s_wcrFontPreviewExcluded_026bb240;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar1,puVar3,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addSubview__026ca4c0,local_178);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviewHeaderView__026bb248,local_80[0])
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviewNameLabel__026bb250,local_e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviewLabel__026b2970,local_130);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviewHintLabel__026bb258,local_178);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(local_80,0);
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  return;
}

