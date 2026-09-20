// ensureShapeAttrBar @ 0166f4e0

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::ensureShapeAttrBar(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  ID local_80;
  SEL local_78;
  ID local_70;
  undefined8 local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = param_2;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shapeAttrBar_026b1df0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    IVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4068800000000000,local_70,PTR_s_wcrMakeGlassBarWithHeight__026b2360);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_80 = IVar1;
    _objc_alloc();
    uVar5 = 0x4028000000000000;
    uVar7 = 0x4024000000000000;
    uVar8 = 0x405e000000000000;
    uVar9 = 0x403c000000000000;
    FUN_0163f5dc();
    local_a8 = uVar5;
    local_a0 = uVar7;
    local_98 = uVar8;
    local_90 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,0x199);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setText__026caa88,&cf__Sb_r);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__UIFontWeightSemibold_02578160;
    uVar5 = *(undefined8 *)PTR__UIFontWeightSemibold_02578160;
    dVar6 = 13.0;
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_88);
    puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,0x198);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
    local_f0 = dVar6;
    local_e8 = uVar5;
    local_e0 = uVar8;
    local_d8 = uVar9;
    _CGRectGetWidth(dVar6,uVar5,uVar8,uVar9);
    uVar5 = 0x4024000000000000;
    uVar8 = 0x403c000000000000;
    dVar6 = dVar6 - 56.0;
    uVar7 = 0x4048000000000000;
    FUN_0163f5dc();
    local_110 = dVar6;
    uStack_108 = uVar5;
    local_100 = uVar7;
    uStack_f8 = uVar8;
    local_d0 = dVar6;
    uStack_c8 = uVar5;
    local_c0 = uVar7;
    uStack_b8 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(dVar6,uVar5,uVar7,uVar8,local_b0,PTR_s_setFrame__026ca960)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTitle_forState__026caab8,&cf__b);
    puVar3 = local_b0;
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitleColor_forState__026caac0,puVar4,0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,*(undefined8 *)puVar2,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_70,
               PTR_s_dismissShapeAttrBar_026b2130,0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_b0);
    local_48 = &::cf_W;
    local_40 = &cf_wb_;
    local_38 = &cf_Wb_;
    local_30 = &cf_1u;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar2;
    for (local_120 = 0; local_120 < 4; local_120 = local_120 + 1) {
      puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,local_120 + 0x19a);
      puVar2 = local_128;
      puVar3 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_objectAtIndexedSubscript__0269cc78,local_120);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle_forState__026caab8,puVar3,0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_128;
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar3,0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_70,
                 PTR_s_onPickCropShapeUI__026b25d0,0x40);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_128);
      _objc_storeStrong(&local_128,0);
    }
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    puVar3 = PTR__CGRectZero_025782f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    local_130 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,0x1a4);
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10),
               *(undefined8 *)(puVar3 + 0x18));
    local_138 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,0x1a6);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setText__026caa88,&::cf_W);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__UIFontWeightMedium_02578150;
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addSubview__026ca4c0,local_138);
    puVar4 = PTR__OBJC_CLASS___UISlider_026ce248;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10),
               *(undefined8 *)(puVar3 + 0x18));
    local_140 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_023397c8,local_140,PTR_s_setMaximumValue__026b2340);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setMinimumTrackTintColor__026b2398);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_70,
               PTR_s_onCropCornerChanged__026b25d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addSubview__026ca4c0,local_140);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setShapeCornerSlider__026b25e0,local_140);
    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10),
               *(undefined8 *)(puVar3 + 0x18));
    local_148 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTag__026caa80,0x1a7);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setTextAlignment__026caa90);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,*(undefined8 *)puVar2,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addSubview__026ca4c0,local_148);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setShapeCornerValueLab__026b25e8,local_148)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setShapeCornerRow__026b25f0,local_130);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_130);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10),
               *(undefined8 *)(puVar3 + 0x18));
    local_150 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTag__026caa80,0x1a5);
    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10),
               *(undefined8 *)(puVar3 + 0x18));
    local_158 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTag__026caa80,0x1a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setText__026caa88,&cf_4q_);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3fe8000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,*(undefined8 *)puVar2,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addSubview__026ca4c0,local_158);
    puVar4 = PTR__OBJC_CLASS___UISlider_026ce248;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10),
               *(undefined8 *)(puVar3 + 0x18));
    local_160 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(0,puVar4,PTR_s_setMinimumValue__026b2338);
    (*(code *)PTR__objc_msgSend_02578628)
              ((float)DAT_023397d0,local_160,PTR_s_setMaximumValue__026b2340);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setMinimumTrackTintColor__026b2398);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_70,
               PTR_s_onCropShadowChanged__026b25f8,0x1000);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addSubview__026ca4c0,local_160);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setShapeShadowSlider__026b2600,local_160);
    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar3,*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10),
               *(undefined8 *)(puVar3 + 0x18));
    local_168 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTag__026caa80,0x1a9);
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setTextAlignment__026caa90,2);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3feb333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,*(undefined8 *)puVar2,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addSubview__026ca4c0,local_168);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setShapeShadowValueLab__026b2608,local_168)
    ;
    puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_58 = &cf_Y;
    local_50 = &::cf_Q;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithItems__0269e9d8);
    local_170 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323e88,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setSelectedSegmentTintColor__026aa658);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_170;
    local_68 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_68,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setTitleTextAttributes_forState__0269e9f0,puVar4,0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_170,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_70,
               PTR_s_onCropShadowSideChanged__026b2610,0x1000);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addSubview__026ca4c0,local_170);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setShapeShadowSideSeg__026b2618,local_170);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_150);
    IVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setShapeAttrBar__026b2620,local_80);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layoutShapeAttrBarContents_026b1e90);
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

