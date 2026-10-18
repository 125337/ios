// configureWithEntry: @0x1d62c4


/* Function Stack Size: 0x18 bytes */



void XZYCLG3DGroupCell::configureWithEntry_(ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  byte bVar2;

  int iVar3;

  uint uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar12;

  undefined8 uVar13;

  long lVar14;

  double dVar15;

  double dVar16;

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_00295dc0(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00295de0();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00295de0(param_3);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar7 = FUN_00297820(uVar6,auVar17._8_8_,auVar17._0_8_);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar6);

  _objc_release(uVar5);

  uVar5 = extraout_x1;

  if ((uVar7 & 1) == 0) {

    FUN_002a3e40(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b260(auVar17._0_8_,auVar17._8_8_,&cf_xzy_clg_groupCardFold);

    _objc_release(auVar17._0_8_);

    _objc_release(uVar5);

    uVar5 = extraout_x1_00;

  }

  FUN_0029e760(param_1,uVar5,param_3);

  _objc_setAssociatedObject(param_1,&DAT_003eaab0,param_3,1);

  FUN_00295de0(param_3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_001ccaf0();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  FUN_00295e40(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar17._0_8_,auVar17._8_8_,uVar6);

  _objc_release(auVar17._0_8_);

  FUN_00294f00(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar17._0_8_;

  FUN_002a1d60(uVar5,auVar17._8_8_,uVar6);

  _objc_release(uVar5);

  auVar18 = FUN_00297fa0(uVar6);

  auVar17._8_8_ = auVar18._8_8_;

  auVar17._0_8_ = uVar6;

  if (auVar18._0_8_ == 0) {

    FUN_00295de0(param_3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_001cbaa4();

    auVar17 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0029c760(param_1,auVar17._8_8_,auVar17._0_8_);

  if (auVar18._0_8_ == 0) {

    _objc_release(auVar17._0_8_);

    _objc_release(uVar5);

  }

  iVar3 = FUN_00297860(param_3);

  pcVar1 = &cf__6ew;

  if (iVar3 == 0) {

    pcVar1 = &cf__U_;

  }

  FUN_0029c7a0(param_1,extraout_x1_01,pcVar1);

  iVar3 = FUN_00297860(param_3);

  pcVar1 = &cf_pcU_;

  if (iVar3 == 0) {

    pcVar1 = &cf_pc6ewR_O;

  }

  FUN_0029c720(param_1,extraout_x1_02,pcVar1);

  FUN_00295de0(param_3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  dVar15 = (double)FUN_001d19cc();

  _objc_release(uVar5);

  dVar16 = 12.0;

  if (12.0 <= dVar15 + 7.0) {

    dVar16 = dVar15 + 7.0;

  }

  uVar5 = NEON_fminnm(dVar16,0x4036000000000000);

  FUN_001d0ec4(uVar5,1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00295e40(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar17._0_8_,auVar17._8_8_,uVar5);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar5);

  FUN_00295e40(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002954e0();

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00294f00(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar17._0_8_,auVar17._8_8_,uVar8);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar8);

  _objc_release(uVar5);

  FUN_001d0ec4(DAT_003e7160 * 10.5,0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00295da0(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar17._0_8_,auVar17._8_8_,uVar5);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar5);

  FUN_00295da0(param_3);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&::cf__);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00295da0(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar17._0_8_,auVar17._8_8_,uVar5);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar5);

  bVar2 = DAT_003e70f1;

  FUN_00295da0(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar17._0_8_,auVar17._8_8_,bVar2 ^ 1);

  _objc_release(auVar17._0_8_);

  FUN_00295d80(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  if (DAT_003e70f0 == '\x01') {

    auVar18 = FUN_002a59c0(param_3);

  }

  else {

    auVar18._8_8_ = 0;

    auVar18._0_8_ = auVar17._8_8_;

    auVar18 = auVar18 << 0x40;

  }

  FUN_002a2340(auVar17._0_8_,auVar18._8_8_,auVar18._0_8_);

  _objc_release(auVar17._0_8_);

  iVar3 = FUN_00297860(param_3);

  pcVar1 = &cf_chevron_right;

  if (iVar3 == 0) {

    pcVar1 = &cf_chevron_down;

  }

  FUN_002a4bc0(&_OBJC_CLASS___UIImage,extraout_x1_04,pcVar1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00294660(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ec00(auVar17._0_8_,auVar17._8_8_,uVar5);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar5);

  FUN_00295de0(param_3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar8 = FUN_001d6dec();

  FUN_00294660(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar17._0_8_,auVar17._8_8_,uVar8);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar5);

  FUN_002a5680(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  iVar3 = FUN_001d52f8();

  _objc_release(uVar5);

  if (iVar3 == 0) {

    FUN_00293060(0x3fb999999999999a,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

    uVar5 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002a64a0();

    uVar5 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00295e40(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar17._0_8_,auVar17._8_8_,uVar5);

  _objc_release(auVar17._0_8_);

  FUN_00294f00(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar17._0_8_,auVar17._8_8_,uVar5);

  _objc_release(auVar17._0_8_);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00295da0(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar17._0_8_,auVar17._8_8_,uVar8);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar8);

  FUN_00294660(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(auVar17._0_8_,auVar17._8_8_,uVar5);

  _objc_release(auVar17._0_8_);

  FUN_00294f20(param_1);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5680(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_001d6e58(uVar8,uVar9);

  _objc_release(uVar9);

  _objc_release(uVar8);

  FUN_00292560(param_1);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5680(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_001d6e58(uVar8,uVar9);

  _objc_release(uVar9);

  _objc_release(uVar8);

  FUN_00294960(param_1);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5680(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_001d6e58(uVar8,uVar9);

  _objc_release(uVar9);

  _objc_release(uVar8);

  uStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  uStack_110 = 0;

  lStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  local_130 = (long *)0x0;

  FUN_002a3d60(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar8 = auVar17._0_8_;

  lVar10 = FUN_00293880(uVar8,auVar17._8_8_,&local_140,auStack_100,0x10);

  if (lVar10 != 0) {

    lVar14 = *local_130;

    uVar9 = *(undefined8 *)PTR__kCACornerCurveContinuous_003885e0;

    do {

      lVar12 = 0;

      do {

        if (*local_130 != lVar14) {

          _objc_enumerationMutation(uVar8);

        }

        uVar13 = *(undefined8 *)(lStack_138 + lVar12 * 8);

        FUN_002a5680(param_1);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_001d6e58(uVar13,uVar11);

        _objc_release(uVar11);

        FUN_00297e40(uVar13);

        auVar17 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d800(auVar17._0_8_,auVar17._8_8_,uVar9);

        _objc_release(auVar17._0_8_);

        lVar12 = lVar12 + 1;

      } while (lVar10 != lVar12);

      lVar10 = FUN_00293880(uVar8,extraout_x1_05,&local_140,auStack_100,0x10);

    } while (lVar10 != 0);

  }

  _objc_release(uVar8);

  iVar3 = FUN_00297860(param_3);

  if (iVar3 == 0) {

    FUN_00294f20(param_1);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00293640();

    lVar10 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_00294960(param_1);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00293640();

    lVar10 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(uVar8);

  FUN_00298d00(param_1);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4880();

  lVar14 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar8);

  if (lVar14 != lVar10) {

    FUN_00298d00(param_1);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(lVar10,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

  }

  uVar4 = FUN_00297860(param_3);

  FUN_00294f00(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar17._0_8_,auVar17._8_8_,uVar4 ^ 1);

  _objc_release(auVar17._0_8_);

  uVar8 = FUN_00297860(param_3);

  FUN_00295e40(param_1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar17._0_8_,auVar17._8_8_,uVar8);

  _objc_release(auVar17._0_8_);

  FUN_0029ff40(param_1);

  _objc_release(lVar10);

  _objc_release(uVar5);

  _objc_release(uVar6);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




