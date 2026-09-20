// buildPill @ 00fd5110

/* Function Stack Size: 0x10 bytes */

void WCRIconNameCaptureFloatWindow::buildPill(ID param_1,SEL param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 56.0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  uVar9 = 0;
  uVar6 = 0;
  dVar8 = local_38;
  dVar10 = local_38;
  FUN_00fd5bd8();
  local_58 = uVar6;
  local_50 = uVar9;
  local_48 = dVar8;
  local_40 = dVar10;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar9,puVar2,PTR_s_initWithFrame__026ca6e8);
  uVar6 = *(undefined8 *)(local_28 + (long)_pill);
  *(undefined8 *)(local_28 + (long)_pill) = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar6);
  dVar7 = local_38 * 0.5;
  uVar6 = *(undefined8 *)(local_28 + (long)_pill);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar7);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  uVar6 = *(undefined8 *)(local_28 + (long)_pill);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  uVar6 = *(undefined8 *)(local_28 + (long)_pill);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar6 = *(undefined8 *)(local_28 + (long)_pill);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3e23d70a);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  uVar6 = *(undefined8 *)(local_28 + (long)_pill);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  uVar6 = 0;
  uVar9 = 0x4014000000000000;
  FUN_00fd5c24();
  uVar3 = *(undefined8 *)(local_28 + (long)_pill);
  local_68 = uVar6;
  uStack_60 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = uStack_60;
  local_80 = local_68;
  uVar6 = local_68;
  uVar9 = uStack_60;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithEffect__026ca6e0);
  local_88 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pill),PTR_s_bounds_026ca548);
  local_d0 = uVar6;
  uStack_c8 = uVar9;
  local_c0 = dVar8;
  dStack_b8 = dVar10;
  local_a8 = uVar6;
  uStack_a0 = uVar9;
  local_98 = dVar8;
  dStack_90 = dVar10;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar9,dVar8,dVar10,local_88,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setAutoresizingMask__026ca878,0x12);
  dVar8 = local_38 * 0.5;
  puVar2 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pill),PTR_s_addSubview__026ca4c0,local_88);
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  uVar6 = 0x4030000000000000;
  uVar9 = 0x4026000000000000;
  uVar11 = 0x4038000000000000;
  uVar3 = 0x4038000000000000;
  FUN_00fd5bd8();
  local_f8 = uVar6;
  local_f0 = uVar9;
  local_e8 = uVar3;
  local_e0 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar9,uVar3,uVar11,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setContentMode__026ca8e0,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setTintColor__026caab0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
             &cf_square_grid_2x2_fill);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 2;
  local_100 = puVar2;
  ___isPlatformVersionAtLeast(2,0xf,0);
  puVar2 = local_100;
  if (iVar1 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402e000000000000,PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640,
               PTR_s_configurationWithPointSize_weigh_026ca588,6);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageByApplyingSymbolConfigurati_026ca680);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_100;
    local_100 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setImage__026ca978,local_100);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pill),PTR_s_addSubview__026ca4c0,local_d8);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  uVar6 = 0x4024000000000000;
  uVar9 = 0x4041000000000000;
  uVar3 = 0x4042000000000000;
  uVar11 = 0x402c000000000000;
  FUN_00fd5bd8();
  local_120 = uVar6;
  local_118 = uVar9;
  local_110 = uVar3;
  local_108 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar9,uVar3,uVar11,puVar2,PTR_s_initWithFrame__026ca6e8);
  uVar6 = *(undefined8 *)(local_28 + (long)_pillCountLabel);
  *(undefined8 *)(local_28 + (long)_pillCountLabel) = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar6);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4022000000000000,DAT_02324020,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pillCountLabel),PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pillCountLabel),PTR_s_setTextAlignment__026caa90,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pillCountLabel),PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pillCountLabel),PTR_s_setText__026caa88,&cf_bS);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pill),PTR_s_addSubview__026ca4c0,
             *(undefined8 *)(local_28 + (long)_pillCountLabel));
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_128 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pill),PTR_s_addGestureRecognizer__026ca4a8,puVar2);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_130 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pill),PTR_s_addGestureRecognizer__026ca4a8,puVar2);
  puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_138 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c98,puVar2,PTR_s_setMinimumPressDuration__026ca9c8)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_pill),PTR_s_addGestureRecognizer__026ca4a8,local_138)
  ;
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_88,0);
  return;
}

