// rebuildMenu @0x27fa28


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockLiquidContainer::rebuildMenu(ID param_1,SEL param_2)



{

  undefined *puVar1;

  bool bVar2;

  int iVar3;

  uint uVar4;

  int iVar5;

  uint uVar6;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  long lVar16;

  long lVar17;

  long lVar18;

  long lVar19;

  long lVar20;

  long lVar21;

  ulong uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

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

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  ulong uVar25;

  double dVar26;

  double dVar27;

  undefined1 auVar28 [16];

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined8 local_f0;

  undefined8 uStack_e8;

  undefined8 uStack_e0;

  undefined8 uStack_d8;

  undefined8 local_d0;

  undefined8 uStack_c8;

  undefined8 uStack_c0;

  undefined8 uStack_b8;

  undefined8 local_b0;

  undefined8 uStack_a8;

  undefined8 uStack_a0;

  undefined8 uStack_98;

  

  iVar3 = FUN_00298c60();

  if (iVar3 == 0) {

    return;

  }

  uVar4 = FUN_00298c20(param_1);

  if (uVar4 == 0) {

    lVar8 = 0;

  }

  else {

    FUN_002a2e40(&objc::class_t::XZYDockPlayerEngine);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a3ec0();

    lVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar7);

  }

  FUN_0029a000(param_1);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  FUN_002a0760(param_1,extraout_x1,lVar8);

  uVar7 = extraout_x1_00;

  if (lVar9 != lVar8) {

    FUN_0029e9a0(param_1,extraout_x1_00,0xffffffffffffffff);

    uVar7 = extraout_x1_01;

  }

  if ((uVar4 & 1) == 0) {

    FUN_002a0740(param_1,uVar7,0);

    FUN_002a2f00(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_00299fa0();

    auVar28 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0740(param_1,auVar28._8_8_,auVar28._0_8_);

    _objc_release(auVar28._0_8_);

    FUN_00299fe0(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

  }

  iVar3 = FUN_00298c40(param_1);

  if (iVar3 != 0) {

    FUN_00298bc0(param_1);

    lVar10 = _objc_retainAutoreleasedReturnValue();

    if (lVar10 != 0) {

      iVar3 = FUN_002950a0(param_1);

      iVar5 = FUN_00293ec0(param_1);

      if (iVar3 == iVar5) {

        FUN_00298bc0(param_1);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        lVar12 = FUN_00293860();

        lVar13 = FUN_00293860(uVar7);

        _objc_release(uVar11);

        _objc_release(lVar10);

        if (lVar12 == lVar13) {

          lVar10 = FUN_00293860(uVar7);

          if (lVar10 != 0) {

            uVar25 = 0;

            do {

              FUN_00298bc0(param_1);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              FUN_00299500(auVar28._0_8_,auVar28._8_8_,uVar25);

              lVar10 = _objc_retainAutoreleasedReturnValue();

              _objc_release(auVar28._0_8_);

              FUN_00299500(uVar7,extraout_x1_02,uVar25);

              uVar11 = _objc_retainAutoreleasedReturnValue();

              lVar12 = FUN_00290ea0(lVar10);

              lVar13 = FUN_00290ea0(uVar11);

              if (lVar12 != lVar13) {

LAB_0027fef8:

                _objc_release(uVar11);

                goto LAB_0027ff04;

              }

              dVar26 = (double)FUN_00296380(lVar10);

              dVar27 = (double)FUN_00296380(uVar11);

              if (dVar26 != dVar27) goto LAB_0027fef8;

              FUN_002a5360(lVar10);

              lVar12 = _objc_retainAutoreleasedReturnValue();

              FUN_002a5360(uVar11);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              lVar13 = auVar28._0_8_;

              if ((lVar12 != lVar13) &&

                 (iVar3 = FUN_002977c0(lVar12,auVar28._8_8_,lVar13), iVar3 == 0)) {

LAB_0027fee8:

                _objc_release(lVar13);

                _objc_release(lVar12);

                goto LAB_0027fef8;

              }

              FUN_002a4820(lVar10);

              lVar14 = _objc_retainAutoreleasedReturnValue();

              FUN_002a4820(uVar11);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              lVar15 = auVar28._0_8_;

              if ((lVar14 != lVar15) &&

                 (iVar3 = FUN_002977c0(lVar14,auVar28._8_8_,lVar15), iVar3 == 0)) {

LAB_0027fed8:

                _objc_release(lVar15);

                _objc_release(lVar14);

                goto LAB_0027fee8;

              }

              FUN_002920a0(lVar10);

              lVar16 = _objc_retainAutoreleasedReturnValue();

              FUN_002920a0(uVar11);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              lVar17 = auVar28._0_8_;

              if ((lVar16 != lVar17) &&

                 (iVar3 = FUN_002977c0(lVar16,auVar28._8_8_,lVar17), iVar3 == 0)) {

LAB_0027fec4:

                _objc_release(lVar17);

                _objc_release(lVar16);

                goto LAB_0027fed8;

              }

              FUN_00296480(lVar10);

              lVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_00296480(uVar11);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              lVar19 = auVar28._0_8_;

              if ((lVar18 != lVar19) &&

                 (iVar3 = FUN_002977c0(lVar18,auVar28._8_8_,lVar19), iVar3 == 0)) {

                _objc_release(lVar19);

                _objc_release(lVar18);

                goto LAB_0027fec4;

              }

              FUN_00292f20(lVar10);

              lVar20 = _objc_retainAutoreleasedReturnValue();

              FUN_00292f20(uVar11);

              auVar28 = _objc_retainAutoreleasedReturnValue();

              lVar21 = auVar28._0_8_;

              if (lVar20 == lVar21) {

                _objc_release(lVar21);

                _objc_release(lVar20);

                _objc_release(lVar19);

                _objc_release(lVar18);

                _objc_release(lVar17);

                _objc_release(lVar16);

                _objc_release(lVar15);

                _objc_release(lVar14);

                _objc_release(lVar13);

                _objc_release(lVar12);

              }

              else {

                uVar6 = FUN_002977c0(lVar20,auVar28._8_8_,lVar21);

                _objc_release(lVar21);

                _objc_release(lVar20);

                _objc_release(lVar19);

                _objc_release(lVar18);

                _objc_release(lVar17);

                _objc_release(lVar16);

                _objc_release(lVar15);

                _objc_release(lVar14);

                _objc_release(lVar13);

                _objc_release(lVar12);

                if ((uVar6 & 1) == 0) goto LAB_0027fef8;

              }

              _objc_release(uVar11);

              _objc_release(lVar10);

              uVar25 = uVar25 + 1;

              uVar22 = FUN_00293860(uVar7);

            } while (uVar25 < uVar22);

          }

          FUN_00297f00(param_1);

          goto LAB_0028051c;

        }

        goto LAB_0027ff0c;

      }

    }

LAB_0027ff04:

    _objc_release(lVar10);

  }

LAB_0027ff0c:

  auVar28 = FUN_002937a0(uVar7);

  FUN_0029fb40(param_1,auVar28._8_8_,auVar28._0_8_);

  _objc_release(auVar28._0_8_);

  auVar28 = FUN_00293ec0(param_1);

  FUN_0029e340(param_1,auVar28._8_8_,auVar28._0_8_);

  uVar25 = FUN_00293860(uVar7);

  iVar3 = FUN_00298c40(param_1);

  if (iVar3 == 0) {

    bVar2 = false;

  }

  else {

    FUN_00298b80(param_1);

    lVar10 = _objc_retainAutoreleasedReturnValue();

    if (lVar10 == 0) {

      FUN_00294fa0(param_1);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      lVar12 = FUN_00293860();

      bVar2 = lVar12 != 0;

      _objc_release(uVar11);

    }

    else {

      bVar2 = false;

    }

    _objc_release(lVar10);

  }

  FUN_00298b80(param_1);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar10 != 0) goto LAB_00280034;

  if (bVar2) {

    FUN_00294fa0(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    auVar28 = FUN_00299020();

    FUN_0029fb00(param_1,auVar28._8_8_,auVar28._0_8_);

    _objc_release(auVar28._0_8_);

  }

  else {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    auVar28 = _objc_retainAutoreleasedReturnValue();

    uVar11 = auVar28._0_8_;

    FUN_0029fb00(param_1,auVar28._8_8_,uVar11);

  }

  while( true ) {

    _objc_release(uVar11);

LAB_00280034:

    FUN_00298b80(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    uVar22 = FUN_00293860();

    _objc_release(uVar11);

    if (uVar22 <= uVar25) break;

    FUN_00298b80(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_00297d80();

    uVar23 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b340();

    _objc_release(uVar23);

    _objc_release(uVar11);

    FUN_00298b80(param_1);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b3e0();

  }

  FUN_00298b80(param_1);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  uVar22 = FUN_00293860();

  _objc_release(uVar11);

  if (uVar22 < uVar25) {

    do {

      auVar28 = FUN_00298c40(param_1);

      if ((auVar28._0_8_ & 1) == 0) {

        FUN_00298b40(param_1);

        auVar28 = _objc_retainAutoreleasedReturnValue();

        FUN_00298860(param_1,auVar28._8_8_,"selectMenuButton:",auVar28._0_8_);

        uVar11 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar28._0_8_);

      }

      else {

        FUN_002988a0(param_1,auVar28._8_8_,"selectMenuButton:");

        uVar11 = _objc_retainAutoreleasedReturnValue();

      }

      uVar6 = FUN_00298c40(param_1);

      FUN_0029fb60(uVar11,extraout_x1_03,uVar6 ^ 1);

      iVar3 = FUN_00298c40(param_1);

      uVar23 = 0x403c000000000000;

      if (iVar3 == 0) {

        uVar23 = 0x402c000000000000;

      }

      FUN_00297e40(uVar11);

      uVar24 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(uVar23);

      _objc_release(uVar24);

      FUN_00298b80(param_1);

      auVar28 = _objc_retainAutoreleasedReturnValue();

      FUN_00291240(auVar28._0_8_,auVar28._8_8_,uVar11);

      _objc_release(auVar28._0_8_);

      _objc_release(uVar11);

      FUN_00298b80(param_1);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      uVar22 = FUN_00293860();

      _objc_release(uVar11);

    } while (uVar22 < uVar25);

LAB_002801f4:

    puVar1 = PTR__CATransform3DIdentity_00388580;

    uVar22 = 0;

    do {

      FUN_00298b80(param_1);

      auVar28 = _objc_retainAutoreleasedReturnValue();

      FUN_00299500(auVar28._0_8_,auVar28._8_8_,uVar22);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar28._0_8_);

      if (bVar2) {

        FUN_00271c80(uVar11);

        FUN_0029b840(uVar11);

        FUN_00297e40(uVar11);

        uVar23 = _objc_retainAutoreleasedReturnValue();

        FUN_002a0400(0x3f800000);

        _objc_release(uVar23);

        FUN_00297e40(uVar11);

        auVar28 = _objc_retainAutoreleasedReturnValue();

        uStack_c8 = *(undefined8 *)(puVar1 + 0x48);

        local_d0 = *(undefined8 *)(puVar1 + 0x40);

        uStack_b8 = *(undefined8 *)(puVar1 + 0x58);

        uStack_c0 = *(undefined8 *)(puVar1 + 0x50);

        uStack_a8 = *(undefined8 *)(puVar1 + 0x68);

        local_b0 = *(undefined8 *)(puVar1 + 0x60);

        uStack_98 = *(undefined8 *)(puVar1 + 0x78);

        uStack_a0 = *(undefined8 *)(puVar1 + 0x70);

        uStack_108 = *(undefined8 *)(puVar1 + 8);

        local_110 = *(undefined8 *)puVar1;

        uStack_f8 = *(undefined8 *)(puVar1 + 0x18);

        uStack_100 = *(undefined8 *)(puVar1 + 0x10);

        uStack_e8 = *(undefined8 *)(puVar1 + 0x28);

        local_f0 = *(undefined8 *)(puVar1 + 0x20);

        uStack_d8 = *(undefined8 *)(puVar1 + 0x38);

        uStack_e0 = *(undefined8 *)(puVar1 + 0x30);

        FUN_002a21c0(auVar28._0_8_,auVar28._8_8_,&local_110);

        _objc_release(auVar28._0_8_);

      }

      FUN_00298b40(param_1);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4880(uVar11);

      lVar12 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      uVar23 = extraout_x1_04;

      if (lVar12 != lVar10) {

        FUN_0029b340(uVar11);

        FUN_00291380(lVar10,extraout_x1_05,uVar11);

        uVar23 = extraout_x1_06;

      }

      FUN_002a1c80(uVar11,uVar23,uVar22);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_07,&cf_xzy_liquid_menu__lu);

      auVar28 = _objc_retainAutoreleasedReturnValue();

      FUN_0029c740(uVar11,auVar28._8_8_,auVar28._0_8_);

      _objc_release(auVar28._0_8_);

      FUN_00299500(uVar7,extraout_x1_08,uVar22);

      auVar28 = _objc_retainAutoreleasedReturnValue();

      FUN_00291b20(param_1,auVar28._8_8_,auVar28._0_8_,uVar11);

      _objc_release(auVar28._0_8_);

      iVar3 = FUN_00298c40(param_1);

      uVar23 = extraout_x1_09;

      if (iVar3 != 0) {

        dVar27 = (double)FUN_00296360(uVar11);

        dVar26 = 28.0;

        if (dVar27 <= 28.0) {

          dVar26 = dVar27;

        }

        FUN_0029eb40(dVar26,uVar11);

        uVar23 = extraout_x1_10;

      }

      FUN_002a62a0(uVar11,uVar23,&DAT_00002393);

      auVar28 = _objc_retainAutoreleasedReturnValue();

      lVar12 = auVar28._0_8_;

      uVar6 = uVar4 ^ 1;

      if (uVar22 != 2) {

        uVar6 = 1;

      }

      if ((uVar6 & 1) == 0) {

        FUN_0029e820(uVar11,auVar28._8_8_,1);

        FUN_0029ff40(uVar11);

        if (lVar12 == 0) {

          auVar28 = _objc_alloc_init(&_OBJC_CLASS___UISwitch);

          lVar12 = auVar28._0_8_;

          FUN_002a1c80(lVar12,auVar28._8_8_,&DAT_00002393);

          FUN_002a4a80(&_OBJC_CLASS___UIColor);

          auVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_002a0380(lVar12,auVar28._8_8_,auVar28._0_8_);

          _objc_release(auVar28._0_8_);

          FUN_002913c0(lVar12,extraout_x1_11,param_1,"coverSpinSwitchChanged:",0x1000);

          FUN_00291380(uVar11,extraout_x1_12,lVar12);

        }

        auVar28 = FUN_0027c064();

        FUN_002a0120(lVar12,auVar28._8_8_,auVar28._0_8_);

LAB_00280490:

        _objc_release(lVar12);

      }

      else if (lVar12 != 0) {

        FUN_0029b340(lVar12);

        goto LAB_00280490;

      }

      _objc_release(lVar10);

      _objc_release(uVar11);

      uVar22 = uVar22 + 1;

    } while (uVar25 != uVar22);

  }

  else if (uVar25 != 0) goto LAB_002801f4;

  FUN_00297f00(param_1);

  if ((uVar4 & 1) != 0) {

    if (lVar9 == lVar8) {

      FUN_0029b000(param_1);

    }

    else {

      FUN_00298c00(param_1);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b140();

      _objc_release(uVar11);

      FUN_00298c00(param_1);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_00297ee0();

      _objc_release(uVar11);

    }

  }

LAB_0028051c:

  _objc_release(uVar7);

  _objc_release(lVar8);

  return;

}




