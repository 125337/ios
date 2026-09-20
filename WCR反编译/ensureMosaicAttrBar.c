// ensureMosaicAttrBar @ 0167ccc0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::ensureMosaicAttrBar(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 in_d1;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 uVar7;
  double dVar8;
  undefined8 in_d3;
  undefined8 uVar9;
  undefined8 uVar10;
  double local_420;
  double local_3d0;
  undefined *local_238;
  double local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  double local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  undefined8 uStack_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_98;
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  ID local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mosaicAttrBar_026b1de8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    dVar5 = 168.0;
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcrMakeGlassBarWithHeight__026b2360);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    local_98 = dVar5;
    _CGRectGetWidth(dVar5,in_d1,in_d2,in_d3);
    dVar5 = dVar5 - 56.0;
    uVar6 = 0x4020000000000000;
    uVar7 = 0x4048000000000000;
    uVar9 = 0x403c000000000000;
    FUN_0163f5dc();
    local_c0 = dVar5;
    uStack_b8 = uVar6;
    local_b0 = uVar7;
    uStack_a8 = uVar9;
    local_78 = dVar5;
    uStack_70 = uVar6;
    local_68 = uVar7;
    uStack_60 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(dVar5,uVar6,uVar7,uVar9,local_58,PTR_s_setFrame__026ca960)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAutoresizingMask__026ca878,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTitle_forState__026caab8,&cf__b);
    puVar2 = local_58;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar3,0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = PTR__UIFontWeightSemibold_02578160;
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_exitMosaicBrushMode_026b2128,0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_58);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar7 = 0x4020000000000000;
    uVar10 = 0x403c000000000000;
    uVar6 = 0x4028000000000000;
    uVar9 = 0x404d000000000000;
    FUN_0163f5dc();
    local_e8 = uVar6;
    local_e0 = uVar7;
    local_d8 = uVar9;
    local_d0 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,0x760);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setText__026caa88,&cf_Sbxe_);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    dVar5 = 13.0;
    uVar6 = *(undefined8 *)puVar2;
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_c8);
    puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_38 = &cf_l_KQ;
    local_30 = &cf__j_;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithItems__0269e9d8);
    local_f0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    local_130 = dVar5;
    local_128 = uVar6;
    local_120 = uVar9;
    local_118 = uVar10;
    _CGRectGetWidth(dVar5,uVar6,uVar9,uVar10);
    dVar5 = dVar5 - 136.0;
    uVar6 = 0x4052000000000000;
    uVar7 = 0x401c000000000000;
    uVar9 = 0x403e000000000000;
    FUN_0163f5dc();
    local_150 = uVar6;
    uStack_148 = uVar7;
    local_140 = dVar5;
    uStack_138 = uVar9;
    local_110 = uVar6;
    uStack_108 = uVar7;
    local_100 = dVar5;
    uStack_f8 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,dVar5,uVar9,local_f0,PTR_s_setFrame__026ca960)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setAutoresizingMask__026ca878,2);
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mosaicBrushStyle_026b27a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setSelectedSegmentIndex__0269e9e0,IVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_onMosaicStyleChanged__026b27b0,0x1000);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMosaicStyleSegment__026b27b8,local_f0);
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar6 = 0x4028000000000000;
    uVar7 = 0x4048000000000000;
    uVar9 = 0x4042000000000000;
    uVar10 = 0x4038000000000000;
    FUN_0163f5dc();
    local_178 = uVar6;
    local_170 = uVar7;
    local_168 = uVar9;
    local_160 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setText__026caa88,&cf__Y_);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3fe8000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    dVar5 = 12.0;
    uVar6 = *(undefined8 *)PTR__UIFontWeightMedium_02578150;
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_158);
    puVar2 = PTR__OBJC_CLASS___UISlider_026ce248;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    local_1c0 = dVar5;
    local_1b8 = uVar6;
    local_1b0 = uVar9;
    local_1a8 = uVar10;
    _CGRectGetWidth(dVar5,uVar6,uVar9,uVar10);
    uVar9 = 0x403c000000000000;
    uVar6 = 0x4048000000000000;
    dVar5 = dVar5 - 60.0;
    uVar7 = 0x4047000000000000;
    FUN_0163f5dc();
    local_1a0 = uVar6;
    local_198 = uVar7;
    local_190 = dVar5;
    local_188 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,dVar5,uVar9,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_180 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAutoresizingMask__026ca878,2);
    (*(code *)PTR__objc_msgSend_02578628)(0x41600000,local_180,PTR_s_setMinimumValue__026b2338);
    local_3d0 = 5.51739628266117e-315;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setMaximumValue__026b2340);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mosaicBrushSize_026b2780);
    if (local_3d0 <= 0.0) {
      local_3d0 = 32.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mosaicBrushSize_026b2780);
    }
    (*(code *)PTR__objc_msgSend_02578628)((float)local_3d0,local_180,PTR_s_setValue__026a51b0);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setMinimumTrackTintColor__026b2398);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_180,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_onMosaicSizeChanged__026b27c0,0x1000);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_180);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMosaicSizeSlider__026b27c8,local_180);
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar6 = 0x4028000000000000;
    uVar7 = 0x4055000000000000;
    uVar9 = 0x4042000000000000;
    uVar10 = 0x4038000000000000;
    FUN_0163f5dc();
    local_1e8 = uVar6;
    local_1e0 = uVar7;
    local_1d8 = uVar9;
    local_1d0 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_1c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setText__026caa88,&cf_f_);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3fe8000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    dVar5 = 12.0;
    uVar6 = *(undefined8 *)PTR__UIFontWeightMedium_02578150;
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_1c8);
    puVar2 = PTR__OBJC_CLASS___UISlider_026ce248;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    local_230 = dVar5;
    local_228 = uVar6;
    local_220 = uVar9;
    local_218 = uVar10;
    _CGRectGetWidth(dVar5,uVar6,uVar9,uVar10);
    dVar5 = dVar5 - 60.0;
    uVar7 = 0x4048000000000000;
    uVar6 = 0x4054800000000000;
    uVar9 = 0x403c000000000000;
    FUN_0163f5dc();
    local_210 = uVar7;
    local_208 = uVar6;
    local_200 = dVar5;
    local_1f8 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_1f0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAutoresizingMask__026ca878,2);
    (*(code *)PTR__objc_msgSend_02578628)(0x3dcccccd,local_1f0,PTR_s_setMinimumValue__026b2338);
    local_420 = 5.26354424712089e-315;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setMaximumValue__026b2340);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mosaicBrushOpacity_026b2798);
    if (local_420 <= 0.0) {
      local_420 = 1.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mosaicBrushOpacity_026b2798);
    }
    dVar8 = (double)(ulong)(uint)(float)local_420;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setValue__026a51b0);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setMinimumTrackTintColor__026b2398);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1f0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_onMosaicOpacityChanged__026b27d0,0x1000);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_1f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMosaicOpacitySlider__026b27d8,local_1f0)
    ;
    puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
    _objc_retainAutoreleasedReturnValue();
    local_238 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar8,uVar6,dVar5,uVar9);
    dVar8 = dVar8 - 24.0;
    uVar7 = 0x4028000000000000;
    uVar6 = 0x405e800000000000;
    uVar9 = 0x4041000000000000;
    FUN_0163f5dc();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar6,dVar8,uVar9,local_238,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setAutoresizingMask__026ca878,2);
    puVar2 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323ec8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_238;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitleColor_forState__026caac0,puVar3,0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_238,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_applyMosaicSelection_026b27e0,0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_238);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setMosaicSelectionButton__026b27e8,local_238);
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMosaicAttrBar__026b27f0,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_refreshMosaicAttrBarUI_026b1e80);
    _objc_storeStrong(&local_238);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

