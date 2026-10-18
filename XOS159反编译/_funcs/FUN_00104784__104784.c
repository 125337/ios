// FUN_00104784 @0x104784


void FUN_00104784(undefined8 param_1,int param_2)



{

  byte bVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar10;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  double dVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  double dVar17;

  long lVar18;

  double dVar19;

  long lVar20;

  double dVar21;

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  byte local_141;

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

  _objc_retain();

  FUN_000ff4a8();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    lVar11 = 0;

    goto LAB_001049cc;

  }

  if (DAT_003e8048 != -1) {

    thunk_FUN_001055ac();

  }

  FUN_00104648(param_2);

  auVar22 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar22._8_8_,&cf_________);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar22._0_8_);

  FUN_00299520(DAT_003e7eb8,extraout_x1,uVar3);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    FUN_00103154(lVar2,param_1);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      FUN_001039d4(lVar2,param_1);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      lVar5 = auVar22._0_8_;

      if (lVar5 == 0) {

        FUN_002a4460(lVar2,auVar22._8_8_,param_1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_00294020(&_OBJC_CLASS___NSData);

        lVar11 = _objc_retainAutoreleasedReturnValue();

        if (lVar11 != 0) {

          FUN_002987e0(&_OBJC_CLASS___UIScreen);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          uVar15 = FUN_0029bda0();

          _objc_release(uVar7);

          FUN_00296600(uVar15,&_OBJC_CLASS___UIImage,extraout_x1_00,lVar11);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          if (lVar5 != 0) {

            _objc_release(lVar11);

            _objc_release(uVar6);

            goto LAB_001048a8;

          }

        }

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        uVar7 = auVar22._0_8_;

        FUN_00293660(uVar7,auVar22._8_8_,lVar2,0);

        uVar15 = _objc_retainAutoreleasedReturnValue();

        uStack_118 = 0;

        local_120 = 0;

        uStack_108 = 0;

        uStack_110 = 0;

        lStack_138 = 0;

        local_140 = 0;

        uStack_128 = 0;

        local_130 = (long *)0x0;

        _objc_retain();

        auVar22 = FUN_00293880(uVar15,extraout_x1_01,&local_140,auStack_100,0x10);

        if (auVar22._0_8_ != 0) {

          lVar5 = *local_130;

          do {

            uVar10 = auVar22._8_8_;

            lVar13 = 0;

            do {

              if (*local_130 != lVar5) {

                _objc_enumerationMutation(uVar15);

                uVar10 = extraout_x1_02;

              }

              uVar12 = *(undefined8 *)(lStack_138 + lVar13 * 8);

              auVar23 = FUN_00295f60(uVar12,uVar10,&cf__);

              uVar10 = auVar23._8_8_;

              if ((auVar23._0_8_ & 1) == 0) {

                FUN_002a4460(lVar2,uVar10,uVar12);

                auVar23 = _objc_retainAutoreleasedReturnValue();

                uVar10 = auVar23._0_8_;

                local_141 = 0;

                bVar1 = FUN_00295180(uVar7,auVar23._8_8_,uVar10,&local_141);

                if ((bVar1 & local_141) == 1) {

                  auVar23 = FUN_00297820(uVar12,extraout_x1_03,&cf_sub);

                  if ((auVar23._0_8_ & 1) == 0) {

                    FUN_002a4460(uVar10,auVar23._8_8_,param_1);

                    auVar23 = _objc_retainAutoreleasedReturnValue();

                    uVar12 = auVar23._0_8_;

                    FUN_00294020(&_OBJC_CLASS___NSData,auVar23._8_8_,uVar12);

                    lVar8 = _objc_retainAutoreleasedReturnValue();

                    if (lVar8 != 0) {

                      FUN_002987e0(&_OBJC_CLASS___UIScreen);

                      uVar9 = _objc_retainAutoreleasedReturnValue();

                      uVar16 = FUN_0029bda0();

                      _objc_release(uVar9);

                      FUN_00296600(uVar16,&_OBJC_CLASS___UIImage,extraout_x1_05,lVar8);

                      lVar5 = _objc_retainAutoreleasedReturnValue();

                      _objc_release(lVar8);

                      _objc_release(uVar12);

                      _objc_release(uVar10);

                      goto LAB_00104c84;

                    }

                    _objc_release(uVar12);

                  }

                }

                _objc_release(uVar10);

                uVar10 = extraout_x1_04;

              }

              lVar13 = lVar13 + 1;

            } while (auVar22._0_8_ != lVar13);

            auVar22 = FUN_00293880(uVar15,uVar10,&local_140,auStack_100,0x10);

          } while (auVar22._0_8_ != 0);

        }

        lVar5 = 0;

LAB_00104c84:

        _objc_release(uVar15);

        _objc_release(uVar15);

        _objc_release(uVar7);

        _objc_release(lVar11);

        _objc_release(uVar6);

        if (lVar5 == 0) {

          lVar11 = 0;

          goto LAB_001049bc;

        }

      }

    }

LAB_001048a8:

    FUN_001040f4(0x404c800000000000,0x4044000000000000,lVar5);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    lVar13 = auVar22._0_8_;

    if (lVar13 == 0) {

      lVar11 = 0;

    }

    else {

      lVar11 = DAT_003e7fe0;

      lVar8 = DAT_003e7fc8;

      lVar18 = DAT_003e7fd0;

      lVar20 = DAT_003e7fd8;

      if ((DAT_003e7fc0 == '\x01') ||

         (lVar11 = DAT_003e6888, lVar8 = DAT_003e6870, lVar18 = DAT_003e6878, lVar20 = DAT_003e6880,

         DAT_003e7ed9 == '\x01')) {

        dVar19 = (double)lVar20;

        dVar17 = (double)lVar18;

        dVar14 = (double)lVar8;

        dVar21 = (double)lVar11;

      }

      else {

        dVar21 = 25.0;

        if (param_2 == 0) {

          dVar21 = 15.0;

        }

        dVar17 = 15.0;

        if (param_2 == 0) {

          dVar17 = 25.0;

        }

        dVar14 = 18.0;

        dVar19 = 18.0;

      }

      FUN_0029b880(dVar14,dVar17,dVar19,dVar21,lVar13,auVar22._8_8_,1);

      auVar22 = _objc_retainAutoreleasedReturnValue();

      lVar11 = auVar22._0_8_;

      if (lVar11 != 0) {

        FUN_002a0060(DAT_003e7eb8,auVar22._8_8_,lVar11,uVar3);

      }

    }

    _objc_release(lVar13);

    _objc_release(lVar5);

  }

  else {

    _objc_retain(lVar4);

    lVar11 = lVar4;

  }

LAB_001049bc:

  _objc_release(lVar4);

  _objc_release(uVar3);

LAB_001049cc:

  _objc_release(lVar2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_80) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(lVar11);

  return;

}




