// FUN_00115e04 @0x115e04


void FUN_00115e04(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5

                 ,undefined8 param_6)



{

  int iVar1;

  int iVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  dispatch_time_t dVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  float fVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined1 auVar17 [16];

  undefined *local_280;

  undefined8 local_278;

  code *local_270;

  undefined *puStack_268;

  undefined8 local_260;

  undefined8 local_258;

  undefined *local_250;

  undefined8 local_248;

  code *local_240;

  undefined *puStack_238;

  undefined8 local_230;

  undefined8 local_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 uStack_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  undefined8 uStack_1b8;

  undefined8 uStack_1b0;

  undefined8 uStack_1a8;

  undefined8 local_1a0;

  undefined8 uStack_198;

  undefined8 uStack_190;

  undefined8 uStack_188;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 uStack_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  undefined8 uStack_f0;

  undefined8 uStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  undefined8 uStack_d0;

  undefined8 uStack_c8;

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined8 uStack_b0;

  undefined8 uStack_a8;

  

  uVar11 = param_2;

  _objc_retain();

  _objc_retain(param_4);

  if (((param_3 == 0) || (param_4 == 0)) || (uVar3 = FUN_00293860(param_4), uVar3 < 2))

  goto LAB_0011666c;

  FUN_00297e40(param_3);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_00291880(auVar17._0_8_,auVar17._8_8_,&cf_xzy_bubble_pet_segment);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(auVar17._0_8_);

  if (lVar4 != 0) goto LAB_0011666c;

  _objc_getAssociatedObject(param_3,"xzy_anim_delegate");

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

LAB_00115f68:

    FUN_00297e40(param_3);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b260(auVar17._0_8_,auVar17._8_8_,&cf_xzy_bubble_pet_walk);

    _objc_release(auVar17._0_8_);

    FUN_00297e40(param_3);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b260(auVar17._0_8_,auVar17._8_8_,&cf_xzy_bubble_pet_path);

    _objc_release(auVar17._0_8_);

    _objc_setAssociatedObject(param_3,"xzy_bubble_pet_path_data",param_4,1);

    _objc_setAssociatedObject

              (param_3,"xzy_bubble_pet_segment_index",

               &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc20,1);

    FUN_002993a0(param_1,&_OBJC_CLASS___NSNumber);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_3,"xzy_bubble_pet_segment_duration",uVar8,1);

    _objc_release(uVar8);

    FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1,param_5);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_3,"xzy_bubble_pet_should_loop",uVar8,1);

    _objc_release(uVar8);

    FUN_002993a0(param_2,&_OBJC_CLASS___NSNumber);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_3,"xzy_bubble_pet_delloc_ms",uVar8,1);

    _objc_release(uVar8);

    FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_00,param_6);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_3,"xzy_bubble_pet_loop_count",uVar8,1);

    _objc_release(uVar8);

    _objc_setAssociatedObject

              (param_3,"xzy_bubble_pet_current_loop",

               &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfc20,1);

    FUN_00299500(param_4,extraout_x1_01,0);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    lVar6 = auVar17._0_8_;

    FUN_00299500(param_4,auVar17._8_8_,1);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar17._0_8_;

    FUN_00299540(lVar6,auVar17._8_8_,&cf_pos);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    uVar15 = FUN_00290a80();

    uVar8 = uVar11;

    _objc_release(uVar10);

    FUN_00299540(uVar9,extraout_x1_02,&cf_pos);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    uVar16 = FUN_00290a80();

    _objc_release(uVar10);

    FUN_00299540(uVar9,extraout_x1_03,&cf_jump);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_002924e0();

    _objc_release(uVar10);

    FUN_00299540(uVar9,extraout_x1_04,&cf_sleep);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    lVar5 = auVar17._0_8_;

    uStack_198 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

    local_1a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

    uStack_188 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

    uStack_190 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

    uStack_178 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

    local_180 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

    FUN_002a21c0(param_3,auVar17._8_8_,&local_1a0);

    FUN_00299540(uVar9,extraout_x1_05,&cf_rotation);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    fVar14 = (float)FUN_00295480();

    _objc_release(uVar10);

    FUN_00299540(uVar9,extraout_x1_06,&cf_mirror);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924e0();

    _objc_release(uVar10);

    uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x48);

    local_e0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x40);

    uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x58);

    uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x50);

    uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x68);

    local_c0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x60);

    uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x78);

    uStack_b0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x70);

    uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 8);

    local_120 = *(undefined8 *)PTR__CATransform3DIdentity_00388580;

    uStack_108 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x18);

    uStack_110 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x10);

    uStack_f8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x28);

    local_100 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x20);

    uStack_e8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x38);

    uStack_f0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x30);

    if (iVar2 != 0) {

      uStack_1d8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x48);

      local_1e0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x40);

      uStack_1c8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x58);

      uStack_1d0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x50);

      uStack_1b8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x68);

      local_1c0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x60);

      uStack_1a8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x78);

      uStack_1b0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x70);

      uStack_218 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 8);

      local_220 = *(undefined8 *)PTR__CATransform3DIdentity_00388580;

      uStack_208 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x18);

      uStack_210 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x10);

      uStack_1f8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x28);

      local_200 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x20);

      uStack_1e8 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x38);

      uStack_1f0 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x30);

      _CATransform3DScale(&local_1a0,0xbff0000000000000,0x3ff0000000000000,0x3ff0000000000000,

                          &local_220);

      uStack_d8 = uStack_158;

      local_e0 = local_160;

      uStack_c8 = uStack_148;

      uStack_d0 = uStack_150;

      uStack_b8 = uStack_138;

      local_c0 = local_140;

      uStack_a8 = uStack_128;

      uStack_b0 = uStack_130;

      uStack_118 = uStack_198;

      local_120 = local_1a0;

      uStack_108 = uStack_188;

      uStack_110 = uStack_190;

      uStack_f8 = uStack_178;

      local_100 = local_180;

      uStack_e8 = uStack_168;

      uStack_f0 = uStack_170;

    }

    if (fVar14 != 0.0) {

      uStack_1d8 = uStack_d8;

      local_1e0 = local_e0;

      uStack_1c8 = uStack_c8;

      uStack_1d0 = uStack_d0;

      uStack_1b8 = uStack_b8;

      local_1c0 = local_c0;

      uStack_1a8 = uStack_a8;

      uStack_1b0 = uStack_b0;

      uStack_218 = uStack_118;

      local_220 = local_120;

      uStack_208 = uStack_108;

      uStack_210 = uStack_110;

      uStack_1f8 = uStack_f8;

      local_200 = local_100;

      uStack_1e8 = uStack_e8;

      uStack_1f0 = uStack_f0;

      _CATransform3DRotate

                (&local_1a0,((double)fVar14 * 3.141592653589793) / 180.0,0,0,0x3ff0000000000000,

                 &local_220);

      uStack_d8 = uStack_158;

      local_e0 = local_160;

      uStack_c8 = uStack_148;

      uStack_d0 = uStack_150;

      uStack_b8 = uStack_138;

      local_c0 = local_140;

      uStack_a8 = uStack_128;

      uStack_b0 = uStack_130;

      uStack_118 = uStack_198;

      local_120 = local_1a0;

      uStack_108 = uStack_188;

      uStack_110 = uStack_190;

      uStack_f8 = uStack_178;

      local_100 = local_180;

      uStack_e8 = uStack_168;

      uStack_f0 = uStack_170;

    }

    FUN_00297e40(param_3);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    uStack_158 = uStack_d8;

    local_160 = local_e0;

    uStack_148 = uStack_c8;

    uStack_150 = uStack_d0;

    uStack_138 = uStack_b8;

    local_140 = local_c0;

    uStack_128 = uStack_a8;

    uStack_130 = uStack_b0;

    uStack_198 = uStack_118;

    local_1a0 = local_120;

    uStack_188 = uStack_108;

    uStack_190 = uStack_110;

    uStack_178 = uStack_f8;

    local_180 = local_100;

    uStack_168 = uStack_e8;

    uStack_170 = uStack_f0;

    FUN_002a21c0(auVar17._0_8_,auVar17._8_8_,&local_1a0);

    _objc_release(auVar17._0_8_);

    auVar17 = _objc_alloc_init(&objc::class_t::XZYBubblePetAnimationDelegate);

    uVar10 = auVar17._0_8_;

    FUN_002a0680(uVar10,auVar17._8_8_,param_3);

    _objc_setAssociatedObject(param_3,"xzy_anim_delegate",uVar10,1);

    if (lVar5 == 0) {

      if (iVar1 == 0) {

        FUN_00297e40(param_3);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_002a07e0(uVar15,uVar11);

        _objc_release(uVar12);

        FUN_002918e0(&_OBJC_CLASS___CABasicAnimation,extraout_x1_07,&cf_position);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_002a60e0(uVar15,uVar11,&_OBJC_CLASS___NSValue);

        auVar17 = _objc_retainAutoreleasedReturnValue();

        FUN_0029e600(uVar12,auVar17._8_8_,auVar17._0_8_);

        _objc_release(auVar17._0_8_);

        FUN_002a60e0(uVar16,uVar8,&_OBJC_CLASS___NSValue);

        auVar17 = _objc_retainAutoreleasedReturnValue();

        FUN_002a20a0(uVar12,auVar17._8_8_,auVar17._0_8_);

        _objc_release(auVar17._0_8_);

        FUN_0029de80(param_1,uVar12);

        FUN_002a0ca0(uVar12,extraout_x1_08,0);

        FUN_0029e3c0(uVar12,extraout_x1_09,*(undefined8 *)PTR__kCAFillModeForwards_00388600);

        FUN_0029dca0(uVar12,extraout_x1_10,uVar10);

        FUN_00297e40(param_3);

        auVar17 = _objc_retainAutoreleasedReturnValue();

        uVar11 = auVar17._0_8_;

        FUN_00291020(uVar11,auVar17._8_8_,uVar12,&cf_xzy_bubble_pet_segment);

      }

      else {

        FUN_00297e40(param_3);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002a07e0(uVar16,uVar8);

        _objc_release(uVar11);

        FUN_00291840(&_OBJC_CLASS___CABasicAnimation);

        uVar12 = _objc_retainAutoreleasedReturnValue();

        local_280 = PTR___NSConcreteStackBlock_003886f0;

        local_278 = 0xc2000000;

        local_270 = FUN_001193c8;

        puStack_268 = &DAT_00388d50;

        _objc_retain(uVar10);

        local_260 = uVar10;

        local_258 = uVar12;

        _objc_retain(uVar12);

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_280);

        _objc_release(local_258);

        uVar11 = local_260;

      }

    }

    else {

      fVar14 = (float)FUN_00295480(lVar5);

      FUN_00297e40(param_3);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_002a07e0(uVar16,uVar8);

      _objc_release(uVar11);

      FUN_00291840(&_OBJC_CLASS___CABasicAnimation);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      dVar13 = _dispatch_time(0,(long)(fVar14 * 1e+06));

      local_250 = PTR___NSConcreteStackBlock_003886f0;

      local_248 = 0xc2000000;

      local_240 = FUN_001193b8;

      puStack_238 = &DAT_00388d50;

      _objc_retain(uVar10);

      local_230 = uVar10;

      local_228 = uVar12;

      _objc_retain(uVar12);

      _dispatch_after(dVar13,PTR___dispatch_main_q_00388740,&local_250);

      _objc_release(local_228);

      uVar11 = local_230;

    }

    _objc_release(uVar11);

    _objc_release(uVar12);

    _objc_release(uVar10);

    _objc_release(lVar5);

    _objc_release(uVar9);

  }

  else {

    FUN_00299d40(lVar4);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar5 != param_3) goto LAB_00115f68;

    _objc_getAssociatedObject(param_3,"xzy_bubble_pet_segment_index");

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_3,"xzy_bubble_pet_path_data");

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if ((lVar6 == 0) || (lVar5 == 0)) {

LAB_00115f58:

      _objc_release(lVar5);

      _objc_release(lVar6);

      goto LAB_00115f68;

    }

    uVar3 = FUN_002a5a20(lVar6);

    lVar7 = FUN_00293860(lVar5);

    if (lVar7 - 1U <= uVar3) goto LAB_00115f58;

    _objc_release(lVar5);

  }

  _objc_release(lVar6);

  _objc_release(lVar4);

LAB_0011666c:

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




