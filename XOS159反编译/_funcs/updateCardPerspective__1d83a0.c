// updateCardPerspective @0x1d83a0


/* Function Stack Size: 0x10 bytes */



void XZYCLG3DGroupCell::updateCardPerspective(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  int iVar12;

  int iVar13;

  uint uVar14;

  uint uVar15;

  long lVar16;

  undefined8 uVar17;

  ulong uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  long lVar24;

  long lVar25;

  undefined8 uVar26;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  double dVar27;

  double dVar28;

  double dVar29;

  double in_d1;

  double in_d2;

  double dVar30;

  double in_d3;

  double dVar31;

  undefined1 auVar32 [16];

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined8 local_280;

  undefined8 uStack_278;

  undefined8 uStack_270;

  undefined8 uStack_268;

  undefined8 local_260;

  undefined8 uStack_258;

  undefined8 uStack_250;

  undefined8 uStack_248;

  undefined8 local_240;

  undefined8 uStack_238;

  undefined8 uStack_230;

  undefined8 uStack_228;

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

  

  FUN_00295dc0();

  lVar16 = _objc_retainAutoreleasedReturnValue();

  if (lVar16 == 0) {

    return;

  }

  FUN_002a3e40(param_1);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar30 = in_d2;

  _objc_release(uVar17);

  _objc_release(lVar16);

  if (in_d2 <= 1.0) {

    return;

  }

  FUN_002962c0(param_1);

  lVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00295dc0(param_1);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  iVar12 = FUN_00297860();

  iVar13 = 0;

  if (lVar16 != 0) {

    iVar13 = iVar12;

  }

  if (iVar13 == 1) {

    uVar18 = _UIAccessibilityIsReduceMotionEnabled();

    _objc_release(uVar17);

    dVar27 = 0.0;

    if ((uVar18 & 1) == 0) {

      FUN_002935e0(lVar16);

      dVar27 = (double)FUN_00291480(lVar16);

      FUN_002925a0(lVar16);

      dVar28 = (double)FUN_00291480(lVar16);

      FUN_00291480(lVar16);

      FUN_002925a0(param_1);

      uVar17 = _CGRectGetMidX();

      FUN_002925a0(param_1);

      dVar29 = (double)_CGRectGetMidY();

      FUN_002936e0(uVar17,param_1,extraout_x1,lVar16);

      dVar30 = (in_d3 - dVar28) - dVar30;

      if (dVar30 <= 1.0) {

        dVar30 = 1.0;

      }

      dVar30 = ((dVar29 - (in_d1 + dVar27)) - dVar30 * 0.5) / (dVar30 * 0.5);

      if (dVar30 <= -1.0) {

        dVar30 = -1.0;

      }

      dVar27 = 1.0;

      if (dVar30 <= 1.0) {

        dVar27 = dVar30;

      }

    }

  }

  else {

    _objc_release(uVar17);

    dVar27 = 0.0;

  }

  FUN_00295dc0(param_1);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  iVar13 = FUN_00297860();

  dVar30 = 24.0;

  if (iVar13 != 0) {

    iVar13 = _UIAccessibilityIsReduceMotionEnabled();

    dVar30 = 62.0;

    if (iVar13 == 0) {

      dVar30 = dVar27 * -38.0 + 90.0;

    }

  }

  _objc_release(uVar17);

  _CATransform3DMakeRotation(&local_120,(dVar30 * 3.141592653589793) / 180.0,0x3ff0000000000000,0,0)

  ;

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

  dVar29 = 1.0;

  dVar31 = 0.0;

  _CATransform3DRotate(&local_1a0,0xbfbacee9f37bebd5,0,0x3ff0000000000000,0,&local_220);

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

  FUN_002a3e40(param_1);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar28 = dVar31;

  FUN_00294960(param_1);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  FUN_002a3e40(param_1);

  uVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar20);

  dVar27 = 320.0;

  if (320.0 <= dVar29) {

    dVar27 = dVar29;

  }

  dVar27 = 1.0 - (dVar28 + dVar31 * 0.5) / dVar27;

  _objc_release(uVar19);

  _objc_release(uVar17);

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

  _CATransform3DScale(&local_1a0,dVar27,dVar27,dVar27,&local_220);

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

  _objc_getAssociatedObject(lVar16,&DAT_003eaabd);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6520(param_1);

  auVar32 = _objc_retainAutoreleasedReturnValue();

  lVar25 = auVar32._0_8_;

  lVar24 = 0;

  if (lVar25 != 0) {

    FUN_00299540(uVar17,auVar32._8_8_,&cf_gid);

    uVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_00295dc0(param_1);

    uVar20 = _objc_retainAutoreleasedReturnValue();

    FUN_00295de0();

    auVar32 = _objc_retainAutoreleasedReturnValue();

    uVar21 = auVar32._0_8_;

    iVar13 = FUN_00297820(uVar19,auVar32._8_8_,uVar21);

    if (iVar13 == 0) {

      _objc_release(uVar21);

      _objc_release(uVar20);

      _objc_release(uVar19);

      _objc_release(lVar25);

    }

    else {

      FUN_00299540(uVar17,extraout_x1_00,&cf_folded);

      uVar22 = _objc_retainAutoreleasedReturnValue();

      iVar13 = FUN_002924e0();

      FUN_00295dc0(param_1);

      uVar23 = _objc_retainAutoreleasedReturnValue();

      iVar12 = FUN_00297860();

      _objc_release(uVar23);

      _objc_release(uVar22);

      _objc_release(uVar21);

      _objc_release(uVar20);

      _objc_release(uVar19);

      _objc_release(lVar25);

      if (iVar13 == iVar12) {

        FUN_00299540(uVar17,extraout_x1_01,&cf_transform);

        lVar24 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(lVar16,&DAT_003eaabd,0,1);

        goto LAB_001d8844;

      }

    }

    lVar24 = 0;

  }

LAB_001d8844:

  uVar18 = FUN_00297780(lVar16);

  if (((uVar18 & 1) != 0) || (iVar13 = FUN_002976e0(lVar16), iVar13 != 0)) {

    FUN_002a3e40(param_1);

    uVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    auVar32 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b260(auVar32._0_8_,auVar32._8_8_,&cf_xzy_clg_groupCardFold);

    _objc_release(auVar32._0_8_);

    _objc_release(uVar19);

  }

  FUN_002a3e40(param_1);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  lVar25 = _objc_retainAutoreleasedReturnValue();

  if (lVar25 == 0) {

    uStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    uStack_130 = 0;

    uStack_158 = 0;

    local_160 = 0;

    uStack_148 = 0;

    uStack_150 = 0;

    uStack_178 = 0;

    local_180 = 0;

    uStack_168 = 0;

    uStack_170 = 0;

    uStack_198 = 0;

    local_1a0 = 0;

    uStack_188 = 0;

    uStack_190 = 0;

  }

  else {

    FUN_002a56a0(&local_1a0,lVar25);

  }

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

  uVar14 = _CATransform3DEqualToTransform(&local_1a0,&local_220);

  _objc_release(lVar25);

  _objc_release(uVar19);

  if (dVar30 <= 90.0) {

    uStack_158 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x48);

    local_160 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x40);

    uStack_148 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x58);

    uStack_150 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x50);

    uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x68);

    local_140 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x60);

    uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x78);

    uStack_130 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x70);

    uStack_198 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 8);

    local_1a0 = *(undefined8 *)PTR__CATransform3DIdentity_00388580;

    uStack_188 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x18);

    uStack_190 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x10);

    uStack_178 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x28);

    local_180 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x20);

    uStack_168 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x38);

    uStack_170 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x30);

  }

  else {

    _CATransform3DMakeRotation(&local_1a0,0x400921fb54442d18,0x3ff0000000000000,0,0);

  }

  FUN_00294f00(param_1);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  lVar25 = _objc_retainAutoreleasedReturnValue();

  if (lVar25 == 0) {

    uStack_1b8 = 0;

    local_1c0 = 0;

    uStack_1a8 = 0;

    uStack_1b0 = 0;

    uStack_1d8 = 0;

    local_1e0 = 0;

    uStack_1c8 = 0;

    uStack_1d0 = 0;

    uStack_1f8 = 0;

    local_200 = 0;

    uStack_1e8 = 0;

    uStack_1f0 = 0;

    uStack_218 = 0;

    local_220 = 0;

    uStack_208 = 0;

    uStack_210 = 0;

  }

  else {

    FUN_002a56a0(&local_220,lVar25);

  }

  uStack_258 = uStack_158;

  local_260 = local_160;

  uStack_248 = uStack_148;

  uStack_250 = uStack_150;

  uStack_238 = uStack_138;

  local_240 = local_140;

  uStack_228 = uStack_128;

  uStack_230 = uStack_130;

  uStack_298 = uStack_198;

  local_2a0 = local_1a0;

  uStack_288 = uStack_188;

  uStack_290 = uStack_190;

  uStack_278 = uStack_178;

  local_280 = local_180;

  uStack_268 = uStack_168;

  uStack_270 = uStack_170;

  uVar15 = _CATransform3DEqualToTransform(&local_220,&local_2a0);

  _objc_release(lVar25);

  _objc_release(uVar19);

  if (((uVar14 & uVar15) != 1) || (lVar24 != 0)) {

    FUN_00292180(&_OBJC_CLASS___CATransaction);

    FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_02,1);

    uVar11 = uStack_a8;

    uVar10 = uStack_b0;

    uVar9 = uStack_b8;

    uVar8 = local_c0;

    uVar7 = uStack_c8;

    uVar6 = uStack_d0;

    uVar5 = uStack_d8;

    uVar4 = local_e0;

    uVar3 = uStack_e8;

    uVar2 = uStack_f0;

    uVar1 = uStack_f8;

    uVar23 = local_100;

    uVar22 = uStack_108;

    uVar21 = uStack_110;

    uVar20 = uStack_118;

    uVar19 = local_120;

    if ((uVar14 & 1) == 0) {

      FUN_002a3e40(param_1);

      uVar26 = _objc_retainAutoreleasedReturnValue();

      FUN_00297e40();

      auVar32 = _objc_retainAutoreleasedReturnValue();

      uStack_1d8 = uVar5;

      local_1e0 = uVar4;

      uStack_1c8 = uVar7;

      uStack_1d0 = uVar6;

      uStack_1b8 = uVar9;

      local_1c0 = uVar8;

      uStack_1a8 = uVar11;

      uStack_1b0 = uVar10;

      uStack_218 = uVar20;

      local_220 = uVar19;

      uStack_208 = uVar22;

      uStack_210 = uVar21;

      uStack_1f8 = uVar1;

      local_200 = uVar23;

      uStack_1e8 = uVar3;

      uStack_1f0 = uVar2;

      FUN_002a21c0(auVar32._0_8_,auVar32._8_8_,&local_220);

      _objc_release(auVar32._0_8_);

      _objc_release(uVar26);

    }

    uVar11 = uStack_128;

    uVar10 = uStack_130;

    uVar9 = uStack_138;

    uVar8 = local_140;

    uVar7 = uStack_148;

    uVar6 = uStack_150;

    uVar5 = uStack_158;

    uVar4 = local_160;

    uVar3 = uStack_168;

    uVar2 = uStack_170;

    uVar1 = uStack_178;

    uVar23 = local_180;

    uVar22 = uStack_188;

    uVar21 = uStack_190;

    uVar20 = uStack_198;

    uVar19 = local_1a0;

    if ((uVar15 & 1) == 0) {

      FUN_00294f00(param_1);

      uVar26 = _objc_retainAutoreleasedReturnValue();

      FUN_00297e40();

      auVar32 = _objc_retainAutoreleasedReturnValue();

      uStack_1d8 = uVar5;

      local_1e0 = uVar4;

      uStack_1c8 = uVar7;

      uStack_1d0 = uVar6;

      uStack_1b8 = uVar9;

      local_1c0 = uVar8;

      uStack_1a8 = uVar11;

      uStack_1b0 = uVar10;

      uStack_218 = uVar20;

      local_220 = uVar19;

      uStack_208 = uVar22;

      uStack_210 = uVar21;

      uStack_1f8 = uVar1;

      local_200 = uVar23;

      uStack_1e8 = uVar3;

      uStack_1f0 = uVar2;

      FUN_002a21c0(auVar32._0_8_,auVar32._8_8_,&local_220);

      _objc_release(auVar32._0_8_);

      _objc_release(uVar26);

    }

    FUN_002930a0(&_OBJC_CLASS___CATransaction);

    if ((lVar24 != 0) && (uVar18 = _UIAccessibilityIsReduceMotionEnabled(), (uVar18 & 1) == 0)) {

      FUN_002a6520(param_1);

      lVar25 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar25 != 0) {

        FUN_00295dc0(param_1);

        uVar20 = _objc_retainAutoreleasedReturnValue();

        iVar13 = FUN_00297860();

        uVar19 = 2;

        if (iVar13 == 0) {

          uVar19 = 0;

        }

        FUN_0028c91c(&cf_transform,uVar19);

        uVar19 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar20);

        FUN_0029e600(uVar19,extraout_x1_03,lVar24);

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

        FUN_002a60a0(&_OBJC_CLASS___NSValue,extraout_x1_04,&local_220);

        auVar32 = _objc_retainAutoreleasedReturnValue();

        FUN_002a20a0(uVar19,auVar32._8_8_,auVar32._0_8_);

        _objc_release(auVar32._0_8_);

        FUN_002a3e40(param_1);

        uVar20 = _objc_retainAutoreleasedReturnValue();

        FUN_00297e40();

        auVar32 = _objc_retainAutoreleasedReturnValue();

        FUN_00291020(auVar32._0_8_,auVar32._8_8_,uVar19,&cf_xzy_clg_groupCardFold);

        _objc_release(auVar32._0_8_);

        _objc_release(uVar20);

        _objc_release(uVar19);

      }

    }

  }

  _objc_release(lVar24);

  _objc_release(uVar17);

  _objc_release(lVar16);

  return;

}




