// FUN_00103154 @0x103154


void FUN_00103154(long param_1,long param_2)



{

  byte bVar1;

  int iVar2;

  int iVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  ulong uVar7;

  long *plVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  long lVar12;

  ulong uVar13;

  long lVar14;

  undefined8 uVar15;

  undefined8 uVar16;

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

  ulong uVar17;

  undefined8 uVar18;

  long lVar19;

  ulong uVar20;

  long lVar21;

  undefined8 uVar22;

  undefined1 auVar23 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  lVar4 = FUN_00297fa0(param_1);

  uVar18 = 0;

  if ((param_2 == 0) || (lVar4 == 0)) goto LAB_00103514;

  lVar4 = FUN_00297fa0(param_2);

  if (lVar4 == 0) {

    uVar18 = 0;

    goto LAB_00103514;

  }

  _objc_opt_class(&objc::class_t::XOSLoader);

  uVar18 = _objc_retainAutoreleasedReturnValue();

  _objc_sync_enter();

  _objc_retain(param_1);

  auVar23 = FUN_00297fa0(param_1);

  lVar4 = DAT_003e7ef0;

  if (auVar23._0_8_ == 0) {

    DAT_003e7ef0 = 0;

    _objc_release(lVar4);

    lVar4 = DAT_003e7ef8;

    DAT_003e7ef8 = 0;

    _objc_release(lVar4);

    lVar4 = DAT_003e7f00;

    DAT_003e7f00 = 0;

  }

  else {

    FUN_002a4460(param_1,auVar23._8_8_,&cf_xzy_dat);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar23 = _objc_retainAutoreleasedReturnValue();

    uVar22 = auVar23._0_8_;

    auVar23 = FUN_00295160(uVar22,auVar23._8_8_,lVar4);

    if ((auVar23._0_8_ & 1) == 0) {

      if ((DAT_003e7ef0 != 0) &&

         (iVar3 = FUN_00297820(DAT_003e7ef0,auVar23._8_8_,param_1), lVar19 = DAT_003e7ef0,

         iVar3 != 0)) {

        DAT_003e7ef0 = 0;

        _objc_release(lVar19);

        lVar19 = DAT_003e7ef8;

        DAT_003e7ef8 = 0;

        _objc_release(lVar19);

        lVar19 = DAT_003e7f00;

        DAT_003e7f00 = 0;

        goto LAB_001033e8;

      }

    }

    else {

      FUN_00291f00(uVar22,auVar23._8_8_,lVar4,0);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      lVar19 = auVar23._0_8_;

      FUN_00299540(lVar19,auVar23._8_8_,*(undefined8 *)PTR__NSFileModificationDate_00388200);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      uVar10 = auVar23._8_8_;

      lVar5 = auVar23._0_8_;

      if (DAT_003e7ef0 == 0) {

LAB_0010329c:

        FUN_00294020(&_OBJC_CLASS___NSData,uVar10,lVar4);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_retain();

        if ((lVar6 == 0) || (uVar7 = FUN_00297fa0(lVar6), uVar7 < 0xc)) {

LAB_00103314:

          lVar21 = 0;

        }

        else {

          _objc_retainAutorelease(lVar6);

          plVar8 = (long *)FUN_00292680();

          auVar23 = FUN_00297fa0(lVar6);

          uVar7 = auVar23._0_8_;

          if ((uVar7 < 0xc) || (*plVar8 != 0x3130544144595a58)) goto LAB_00103314;

          iVar3 = (int)plVar8[1];

          FUN_00294520(&_OBJC_CLASS___NSMutableDictionary,auVar23._8_8_,iVar3);

          auVar23 = _objc_retainAutoreleasedReturnValue();

          uVar10 = auVar23._8_8_;

          lVar9 = auVar23._0_8_;

          if (iVar3 != 0) {

            iVar2 = 0;

            uVar17 = 0xc;

            do {

              uVar20 = uVar17 + 2;

              if ((uVar7 < uVar20) ||

                 (uVar13 = uVar20 + *(ushort *)((long)plVar8 + uVar17), uVar7 < uVar13)) break;

              FUN_00293fc0(&_OBJC_CLASS___NSData,uVar10,(long)plVar8 + uVar20);

              uVar10 = _objc_retainAutoreleasedReturnValue();

              auVar23 = _objc_alloc(&_OBJC_CLASS___NSString);

              auVar23 = FUN_00296a60(auVar23._0_8_,auVar23._8_8_,uVar10,4);

              lVar21 = auVar23._0_8_;

              uVar20 = uVar13 + 10;

              if (lVar21 == 0 || uVar7 < uVar20) {

LAB_001037f8:

                _objc_release(lVar21);

                _objc_release(uVar10);

                break;

              }

              uVar17 = *(long *)((byte *)((long)plVar8 + uVar13) + 2) + uVar20;

              if (uVar7 < uVar17) goto LAB_001037f8;

              bVar1 = *(byte *)((long)plVar8 + uVar13);

              FUN_00293fc0(&_OBJC_CLASS___NSData,auVar23._8_8_,(long)plVar8 + uVar20);

              auVar23 = _objc_retainAutoreleasedReturnValue();

              if (bVar1 != 0) {

                uVar11 = FUN_00299020();

                _objc_retainAutorelease();

                lVar12 = FUN_00299000();

                for (uVar20 = 0; uVar13 = FUN_00297fa0(uVar11), uVar20 < uVar13; uVar20 = uVar20 + 1

                    ) {

                  *(byte *)(lVar12 + uVar20) = *(byte *)(lVar12 + uVar20) ^ bVar1;

                }

                _objc_release(auVar23._0_8_);

                auVar23._8_8_ = extraout_x1_03;

                auVar23._0_8_ = uVar11;

              }

              lVar12 = auVar23._0_8_;

              if (lVar12 != 0) {

                FUN_00299540(lVar9,auVar23._8_8_,lVar21);

                lVar14 = _objc_retainAutoreleasedReturnValue();

                _objc_release();

                if (lVar14 == 0) {

                  FUN_002a00a0(lVar9,extraout_x1_04,lVar12,lVar21);

                }

                FUN_002984e0(lVar21);

                uVar11 = _objc_retainAutoreleasedReturnValue();

                auVar23 = FUN_00297fa0();

                if (auVar23._0_8_ != 0) {

                  FUN_00299540(lVar9,auVar23._8_8_,uVar11);

                  lVar14 = _objc_retainAutoreleasedReturnValue();

                  _objc_release();

                  if (lVar14 == 0) {

                    FUN_002a00a0(lVar9,extraout_x1_05,lVar12,uVar11);

                  }

                }

                FUN_00297da0(lVar21);

                uVar15 = _objc_retainAutoreleasedReturnValue();

                auVar23 = FUN_00297fa0();

                if (auVar23._0_8_ != 0) {

                  FUN_00299540(lVar9,auVar23._8_8_,uVar15);

                  lVar14 = _objc_retainAutoreleasedReturnValue();

                  _objc_release();

                  if (lVar14 == 0) {

                    FUN_002a00a0(lVar9,extraout_x1_06,lVar12,uVar15);

                  }

                }

                FUN_002984e0(uVar15);

                uVar16 = _objc_retainAutoreleasedReturnValue();

                auVar23 = FUN_00297fa0();

                if (auVar23._0_8_ != 0) {

                  FUN_00299540(lVar9,auVar23._8_8_,uVar16);

                  lVar14 = _objc_retainAutoreleasedReturnValue();

                  _objc_release();

                  if (lVar14 == 0) {

                    FUN_002a00a0(lVar9,extraout_x1_07,lVar12,uVar16);

                  }

                }

                _objc_release(uVar16);

                _objc_release(uVar15);

                _objc_release(uVar11);

              }

              _objc_release(lVar12);

              _objc_release(lVar21);

              _objc_release(uVar10);

              iVar2 = iVar2 + 1;

              uVar10 = extraout_x1_08;

            } while (iVar2 != iVar3);

          }

          lVar12 = FUN_00293860(lVar9);

          lVar21 = 0;

          if (lVar12 != 0) {

            lVar21 = lVar9;

          }

          _objc_retain(lVar21);

          _objc_release(lVar9);

        }

        _objc_release(lVar6);

        _objc_retain(param_1);

        lVar9 = DAT_003e7ef0;

        DAT_003e7ef0 = param_1;

        _objc_release(lVar9);

        _objc_retain(lVar5);

        lVar9 = DAT_003e7ef8;

        DAT_003e7ef8 = lVar5;

        _objc_release(lVar9);

        lVar9 = DAT_003e7f00;

        DAT_003e7f00 = lVar21;

        _objc_release(lVar9);

        _objc_release(lVar6);

      }

      else {

        iVar2 = FUN_00297820(DAT_003e7ef0,uVar10,param_1);

        iVar3 = 0;

        if (DAT_003e7f00 != 0) {

          iVar3 = iVar2;

        }

        uVar10 = extraout_x1;

        if (((iVar3 != 1) || (DAT_003e7ef8 == 0)) || (lVar5 == 0)) goto LAB_0010329c;

        auVar23 = FUN_00297800(DAT_003e7ef8,extraout_x1,lVar5);

        uVar10 = auVar23._8_8_;

        if ((auVar23._0_8_ & 1) == 0) goto LAB_0010329c;

      }

      _objc_release(lVar5);

LAB_001033e8:

      _objc_release(lVar19);

    }

    _objc_release(uVar22);

  }

  _objc_release(lVar4);

  _objc_release(param_1);

  if (DAT_003e7f00 == 0) {

    lVar4 = 0;

  }

  else {

    FUN_00299540(DAT_003e7f00,extraout_x1_00,param_2);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    lVar19 = DAT_003e7f00;

    if (lVar4 == 0) {

      FUN_002984e0(param_2);

      auVar23 = _objc_retainAutoreleasedReturnValue();

      FUN_00299540(lVar19,auVar23._8_8_,auVar23._0_8_);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar23._0_8_);

    }

  }

  _objc_sync_exit(uVar18);

  _objc_release(uVar18);

  if (lVar4 == 0) {

    uVar18 = 0;

  }

  else {

    auVar23 = FUN_0029aba0(param_2,extraout_x1_01,&cf__3x);

    uVar18 = auVar23._8_8_;

    uVar22 = 0x4008000000000000;

    if (auVar23._0_8_ == 0x7fffffffffffffff) {

      auVar23 = FUN_0029aba0(param_2,uVar18,&cf__2x);

      uVar18 = auVar23._8_8_;

      uVar22 = 0x4000000000000000;

      if (auVar23._0_8_ == 0x7fffffffffffffff) {

        FUN_002987e0(&_OBJC_CLASS___UIScreen);

        uVar18 = _objc_retainAutoreleasedReturnValue();

        uVar22 = FUN_0029bda0();

        _objc_release(uVar18);

        uVar18 = extraout_x1_02;

      }

    }

    FUN_00296600(uVar22,&_OBJC_CLASS___UIImage,uVar18,lVar4);

    uVar18 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(lVar4);

LAB_00103514:

  _objc_release(param_2);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar18);

  return;

}




