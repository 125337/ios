// showBubbleList:inViewController: @0x49208


/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::showBubbleList_inViewController_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined *puVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  cfstringStruct *pcVar21;

  double dVar22;

  double in_d2;

  double dVar23;

  double in_d3;

  double dVar24;

  undefined1 auVar25 [16];

  undefined1 auVar26 [16];

  undefined1 auVar27 [16];

  undefined1 auVar28 [16];

  undefined8 local_d8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_getAssociatedObject(param_4,"loadingView");

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_4,"statusLabel");

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_4,"bubbleSearchBar");

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_4,"bubbleCollectionView");

  lVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a42e0(uVar3);

  FUN_0029e8a0(uVar3,extraout_x1,1);

  FUN_0029e8a0(uVar4,extraout_x1_00,1);

  lVar7 = FUN_00293860(param_3);

  if (lVar7 == 0) {

    _objc_getAssociatedObject(param_4,"downloadCenterTab");

    auVar25 = _objc_retainAutoreleasedReturnValue();

    uVar10 = auVar25._8_8_;

    lVar7 = auVar25._0_8_;

    pcVar21 = &cf_ell;

    if (lVar7 != 0) {

      auVar25 = FUN_002974a0(lVar7);

      uVar10 = auVar25._8_8_;

      pcVar21 = &cf_eaSGr;

      if (auVar25._0_8_ != 1) {

        pcVar21 = &cf_ell;

      }

    }

    FUN_002a1d60(uVar4,uVar10,pcVar21);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    auVar25 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(uVar4,auVar25._8_8_,auVar25._0_8_);

    _objc_release(auVar25._0_8_);

    FUN_002a3de0(uVar4);

    FUN_002a6220(param_4);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_002a6220(param_4);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_0029d320(in_d2 * 0.5,in_d3 * 0.5,uVar4);

    _objc_release(uVar8);

    _objc_release(uVar10);

    FUN_0029e8a0(uVar4,extraout_x1_05,0);

    puVar1 = PTR____NSArray0__struct_00388308;

    if (param_3 != 0) {

      puVar1 = (undefined *)param_3;

    }

    _objc_setAssociatedObject(param_4,"bubbleList",puVar1,1);

    if (lVar6 != 0) {

      _objc_setAssociatedObject(lVar6,"bubbleList",puVar1,1);

      FUN_0029b140(lVar6);

    }

    _objc_release(lVar7);

  }

  else {

    if (lVar6 == 0) {

      auVar25 = _objc_alloc_init(&_OBJC_CLASS___UICollectionViewFlowLayout);

      uVar10 = auVar25._0_8_;

      FUN_002a0f40(uVar10,auVar25._8_8_,0);

      FUN_0029fca0(0,uVar10);

      FUN_0029fcc0(0x4028000000000000,uVar10);

      dVar22 = 12.0;

      dVar23 = 12.0;

      dVar24 = 12.0;

      FUN_002a10e0(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,

                   uVar10);

      FUN_002a6220(param_4);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      FUN_0029c040(uVar10);

      FUN_0029c040(uVar10);

      _objc_release(uVar8);

      FUN_0029f160((dVar23 - dVar22) - dVar24,0x4055000000000000,uVar10);

      auVar25 = _objc_alloc(&_OBJC_CLASS___UICollectionView);

      in_d2 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

      lVar6 = FUN_00296ba0(*(undefined8 *)PTR__CGRectZero_00388bf0,

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),in_d2,

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18),auVar25._0_8_,

                           auVar25._8_8_,uVar10);

      FUN_002a6220(param_4);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00292080();

      auVar25 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(lVar6,auVar25._8_8_,auVar25._0_8_);

      _objc_release(auVar25._0_8_);

      _objc_release(uVar8);

      FUN_002a21e0(lVar6,extraout_x1_01,0);

      FUN_0029dca0(lVar6,extraout_x1_02,param_1);

      FUN_0029db40(lVar6,extraout_x1_03,param_1);

      FUN_002a1c80(lVar6,extraout_x1_04,0x7d1);

      auVar25 = _objc_opt_class(&_OBJC_CLASS___UICollectionViewCell);

      FUN_0029b040(lVar6,auVar25._8_8_,auVar25._0_8_,&cf_BubbleCell);

      FUN_002a6220(param_4);

      auVar25 = _objc_retainAutoreleasedReturnValue();

      FUN_00291380(auVar25._0_8_,auVar25._8_8_,lVar6);

      _objc_release(auVar25._0_8_);

      FUN_002a6220(param_4);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029bb80();

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar8);

      if (lVar5 == 0) {

        FUN_002a54e0(uVar9);

        local_d8 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_00292540();

        local_d8 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a54e0(lVar6);

      auVar25 = _objc_retainAutoreleasedReturnValue();

      FUN_00293460(auVar25._0_8_,auVar25._8_8_,local_d8);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      local_b0 = uVar8;

      FUN_00297f40(lVar6);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6220(param_4);

      uVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_00297f40();

      uVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00293460(uVar11);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      local_a8 = uVar14;

      FUN_002a5660(lVar6);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6220(param_4);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_002a5660();

      uVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_00293460(uVar15);

      uVar18 = _objc_retainAutoreleasedReturnValue();

      local_a0 = uVar18;

      FUN_00292540(lVar6);

      uVar19 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6220(param_4);

      uVar20 = _objc_retainAutoreleasedReturnValue();

      FUN_00292540();

      auVar26 = _objc_retainAutoreleasedReturnValue();

      FUN_00293460(uVar19,auVar26._8_8_,auVar26._0_8_);

      auVar27 = _objc_retainAutoreleasedReturnValue();

      local_98 = auVar27._0_8_;

      FUN_00291e00(&_OBJC_CLASS___NSArray,auVar27._8_8_,&local_b0,4);

      auVar28 = _objc_retainAutoreleasedReturnValue();

      FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar28._8_8_,auVar28._0_8_);

      _objc_release(auVar28._0_8_);

      _objc_release(auVar27._0_8_);

      _objc_release(auVar26._0_8_);

      _objc_release(uVar20);

      _objc_release(uVar19);

      _objc_release(uVar18);

      _objc_release(uVar17);

      _objc_release(uVar16);

      _objc_release(uVar15);

      _objc_release(uVar14);

      _objc_release(uVar13);

      _objc_release(uVar12);

      _objc_release(uVar11);

      _objc_release(uVar8);

      _objc_release(auVar25._0_8_);

      _objc_setAssociatedObject(param_4,"bubbleCollectionView",lVar6,1);

      _objc_release(local_d8);

      _objc_release(uVar9);

      _objc_release(uVar10);

    }

    auVar25 = _objc_alloc_init(&_OBJC_CLASS___UICollectionViewFlowLayout);

    uVar10 = auVar25._0_8_;

    FUN_002a0f40(uVar10,auVar25._8_8_,0);

    _objc_getAssociatedObject(param_4,"bubbleDisplayMode");

    lVar7 = _objc_retainAutoreleasedReturnValue();

    if (lVar7 == 0) {

      iVar2 = 0;

    }

    else {

      iVar2 = FUN_002924e0(lVar7);

    }

    FUN_002a6220(param_4);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    _objc_release(uVar8);

    if (iVar2 == 0) {

      FUN_0029fca0(0,uVar10);

      FUN_0029fcc0(0x4028000000000000,uVar10);

      dVar22 = 12.0;

      dVar23 = 12.0;

      FUN_002a10e0(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,

                   uVar10);

      FUN_0029c040(uVar10);

      FUN_0029c040(uVar10);

      FUN_0029f160((in_d2 - dVar22) - dVar23,0x4055000000000000,uVar10);

      uVar8 = extraout_x1_07;

    }

    else {

      FUN_0029fca0(0x402e000000000000,uVar10);

      FUN_0029fcc0(0x4034000000000000,uVar10);

      dVar23 = 20.0;

      dVar24 = 20.0;

      FUN_002a10e0(0x4034000000000000,0x4034000000000000,0x4034000000000000,0x4034000000000000,

                   uVar10);

      FUN_0029c040(uVar10);

      FUN_0029c040(uVar10);

      dVar22 = (double)FUN_00298e20(uVar10);

      dVar22 = (((in_d2 - dVar23) - dVar24) - dVar22) * 0.5;

      FUN_0029f160(dVar22,dVar22 * 1.2,uVar10);

      uVar8 = extraout_x1_06;

    }

    FUN_0029d500(lVar6,uVar8,uVar10,0);

    _objc_setAssociatedObject(param_4,"bubbleList",param_3,1);

    _objc_setAssociatedObject(lVar6,"bubbleList",param_3,1);

    _objc_setAssociatedObject(lVar6,"downloadVC",param_4,1);

    FUN_0029b140(lVar6);

    _objc_release(lVar7);

    _objc_release(uVar10);

  }

  _objc_release(lVar6);

  _objc_release(lVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_90) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




