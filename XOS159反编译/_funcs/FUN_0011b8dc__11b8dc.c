// FUN_0011b8dc @0x11b8dc


void FUN_0011b8dc(undefined1 param_1 [16],double param_2,undefined8 param_3,double param_4,

                 long param_5)



{

  cfstringStruct *pcVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  cfstringStruct *pcVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

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

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  double dVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  double dVar20;

  undefined1 auVar21 [16];

  ulong local_c8;

  double local_c0;

  double dStack_b8;

  double local_b0;

  

  _objc_retain();

  FUN_0011efd4();

  if ((DAT_003e83d0 & 1) == 0) {

    _objc_getAssociatedObject(param_5,&DAT_003e844a);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 != 0) {

      FUN_0011b700(param_5);

      FUN_00122230(param_5);

      _objc_setAssociatedObject(param_5,&DAT_003e844a,0,1);

    }

    goto LAB_0011c1e8;

  }

  FUN_00298580(param_5);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if ((lVar2 != 0) && (uVar3 = FUN_002978a0(lVar2), (uVar3 & 1) == 0)) {

    FUN_00295600(lVar2);

    uVar3 = _CGRectIsEmpty();

    if ((uVar3 & 1) == 0) {

      FUN_002a5020(lVar2);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar5 = FUN_00297fa0();

      if (lVar5 == 0) {

        FUN_00291ee0(lVar2);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        lVar5 = FUN_00297fa0();

        _objc_release(uVar6);

        _objc_release(uVar4);

        if (lVar5 == 0) goto LAB_0011c1e0;

      }

      else {

        _objc_release(uVar4);

      }

      _objc_getAssociatedObject(param_5,&DAT_003e844b);

      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      if (pcVar7 == (cfstringStruct *)0x0) {

        FUN_00298520(param_5);

        auVar21 = _objc_retainAutoreleasedReturnValue();

        lVar5 = auVar21._0_8_;

        if (lVar5 == 0) {

          pcVar7 = (cfstringStruct *)0x0;

        }

        else {

          FUN_002a6080(lVar5,auVar21._8_8_,&cf_m_sessionInfo);

          auVar21 = _objc_retainAutoreleasedReturnValue();

          lVar8 = auVar21._0_8_;

          if (lVar8 == 0) {

            pcVar7 = (cfstringStruct *)0x0;

          }

          else {

            FUN_002a6080(lVar8,auVar21._8_8_,&cf_m_nsUserName);

            pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          }

          _objc_release(lVar8);

        }

        pcVar1 = &cf___;

        if (pcVar7 != (cfstringStruct *)0x0) {

          pcVar1 = pcVar7;

        }

        _objc_setAssociatedObject(param_5,&DAT_003e844b,pcVar1,1);

        _objc_release(lVar5);

        if (pcVar7 != (cfstringStruct *)0x0) goto LAB_0011babc;

LAB_0011bca4:

        FUN_0011b700(param_5);

      }

      else {

LAB_0011babc:

        lVar5 = FUN_00297fa0(pcVar7);

        if (lVar5 == 0) goto LAB_0011bca4;

        FUN_00122470(pcVar7);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 == 0) {

          FUN_0012277c(param_5,lVar2);

        }

        else {

          _objc_setAssociatedObject(param_5,&DAT_003e844a,PTR____kCFBooleanTrue_00388320,1);

          FUN_00295600(lVar2);

          dVar14 = (double)FUN_00122a38(lVar2);

          dVar20 = DAT_003e8450;

          FUN_00122bd0(&local_c8,pcVar7);

          dVar19 = local_c0;

          if (local_c0 <= 0.0) {

            FUN_00295600(lVar2);

            dVar19 = param_4;

          }

          FUN_002a3d80(lVar5);

          dVar15 = dVar19;

          if (0.0 < param_2) {

            dVar15 = (double)FUN_002a3d80(lVar5);

            FUN_002a3d80(lVar5);

            dVar15 = dVar19 * (dVar15 / param_2);

          }

          dVar18 = -2.0;

          dVar16 = -2.0;

          if ((local_c8 & 0xfffffffffffffffe) != 2) {

            dVar16 = 2.0;

          }

          FUN_0012316c(param_5,lVar2);

          lVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_0012214c();

          _objc_setAssociatedObject(lVar2,&DAT_003e8442,0,1);

          dVar14 = dVar14 + dVar20;

          if (local_c8 - 1 < 2) {

            FUN_00295600(lVar2);

            FUN_00295600(lVar2);

            FUN_00295600(lVar2);

            FUN_0029e5e0(dVar14 + dVar16 + dVar15,dVar18,param_3,lVar2);

            dVar20 = dVar20 + dVar16 + dVar15;

            FUN_002993a0(dVar20,&_OBJC_CLASS___NSNumber);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(lVar2,&DAT_003e8442,uVar4,1);

            _objc_release(uVar4);

            if (lVar8 != 0) {

              dVar17 = (double)FUN_00295600(lVar8);

              FUN_0029e5e0(dVar20 + dVar17,lVar8);

              FUN_002993a0(dVar20,&_OBJC_CLASS___NSNumber);

              uVar4 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar8,&DAT_003e8449,uVar4,1);

LAB_0011bd84:

              _objc_release(uVar4);

            }

          }

          else {

            FUN_00295600(lVar2);

            FUN_00295600(lVar2);

            FUN_00295600(lVar2);

            FUN_0029e5e0(dVar14,dVar18,param_3,lVar2);

            if (dVar20 <= 0.0) {

              _objc_setAssociatedObject(lVar2,&DAT_003e8442,0,1);

              if (lVar8 != 0) {

                _objc_setAssociatedObject(lVar8,&DAT_003e8449,0,1);

              }

            }

            else {

              FUN_002993a0(dVar20,&_OBJC_CLASS___NSNumber);

              uVar4 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar2,&DAT_003e8442,uVar4,1);

              _objc_release(uVar4);

              if (lVar8 != 0) {

                dVar17 = (double)FUN_00295600(lVar8);

                FUN_0029e5e0(dVar20 + dVar17,lVar8);

                FUN_002993a0(dVar20,&_OBJC_CLASS___NSNumber);

                uVar4 = _objc_retainAutoreleasedReturnValue();

                _objc_setAssociatedObject(lVar8,&DAT_003e8449,uVar4,1);

                goto LAB_0011bd84;

              }

            }

          }

          _objc_getAssociatedObject(param_5,&DAT_003e8447);

          lVar9 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(param_5,&DAT_003e8458);

          lVar10 = _objc_retainAutoreleasedReturnValue();

          if ((lVar9 == 0) || (lVar10 == 0)) {

            _objc_alloc(&_OBJC_CLASS___UIView);

            dVar18 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

            param_3 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10);

            param_4 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

            lVar13 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,dVar18,param_3,param_4);

            _objc_release(lVar9);

            FUN_002a1c80(lVar13,extraout_x1_03,0x135257d);

            FUN_0029d4a0(lVar13,extraout_x1_04,0);

            FUN_002a23c0(lVar13,extraout_x1_05,0);

            FUN_00292dc0(&_OBJC_CLASS___UIColor);

            auVar21 = _objc_retainAutoreleasedReturnValue();

            FUN_0029cf60(lVar13,auVar21._8_8_,auVar21._0_8_);

            _objc_release(auVar21._0_8_);

            auVar21 = _objc_alloc(&_OBJC_CLASS___UIImageView);

            lVar11 = FUN_00296c40(auVar21._0_8_,auVar21._8_8_,lVar5);

            _objc_release(lVar10);

            FUN_002a1c80(lVar11,extraout_x1_06,0x135257d);

            FUN_0029d6c0(lVar11,extraout_x1_07,1);

            FUN_0029d4a0(lVar11,extraout_x1_08,1);

            FUN_002a0420(lVar11,extraout_x1_09,0);

            FUN_00292dc0(&_OBJC_CLASS___UIColor);

            auVar21 = _objc_retainAutoreleasedReturnValue();

            FUN_0029cf60(lVar11,auVar21._8_8_,auVar21._0_8_);

            _objc_release(auVar21._0_8_);

            FUN_002a23c0(lVar11,extraout_x1_10,0);

            FUN_00291380(lVar13,extraout_x1_11,lVar11);

            FUN_00291380(param_5,extraout_x1_12,lVar13);

            FUN_002925e0(param_5,extraout_x1_13,lVar13);

            _objc_setAssociatedObject(param_5,&DAT_003e8447,lVar13,1);

            _objc_setAssociatedObject(param_5,&DAT_003e8458,lVar11,1);

            uVar4 = extraout_x1_14;

          }

          else {

            FUN_002a4880(lVar9);

            lVar11 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar11 != param_5) {

              FUN_00291380(param_5,extraout_x1,lVar9);

              FUN_002925e0(param_5,extraout_x1_00,lVar9);

            }

            FUN_00296480(lVar10);

            lVar12 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            uVar4 = extraout_x1_01;

            lVar11 = lVar10;

            lVar13 = lVar9;

            if (lVar12 != lVar5) {

              FUN_0029ec00(lVar10,extraout_x1_01,lVar5);

              uVar4 = extraout_x1_02;

            }

          }

          FUN_0029e8a0(lVar13,uVar4,0);

          FUN_00295600(lVar2);

          FUN_00295600(lVar2);

          dVar18 = dVar18 + param_4 * 0.5;

          dVar20 = local_b0 + (dVar18 - dVar19 * 0.5);

          if (local_c8 - 1 < 2) {

            FUN_0029e5e0(dVar14 + dStack_b8,dVar20,dVar15,0,lVar13);

          }

          else {

            dVar17 = (double)FUN_00123280(lVar2);

            dVar14 = dVar14 + dVar17;

            if ((lVar8 != 0) && (uVar3 = FUN_002978a0(lVar8), (uVar3 & 1) == 0)) {

              uVar4 = FUN_00123420(param_5,lVar8);

              dVar17 = (double)_CGRectGetMaxX();

              if (dVar14 < dVar17) {

                dVar14 = (double)_CGRectGetMaxX(uVar4,dVar18,param_3,param_4);

              }

            }

            FUN_0029e5e0(dStack_b8 + dVar16 + dVar14,dVar20,dVar15,0,lVar13);

          }

          FUN_0029e5e0(0,0,dVar15,dVar19,lVar11);

          FUN_00295600(lVar2);

          FUN_002993a0(&_OBJC_CLASS___NSNumber);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(lVar2,&DAT_003e8441,uVar4,1);

          _objc_release(uVar4);

          FUN_00295600(lVar13);

          FUN_002993a0(&_OBJC_CLASS___NSNumber);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(lVar13,&DAT_003e8448,uVar4,1);

          _objc_release(uVar4);

          _objc_release(lVar11);

          _objc_release(lVar13);

          _objc_release(lVar8);

        }

        _objc_release(lVar5);

      }

      _objc_release(pcVar7);

    }

  }

LAB_0011c1e0:

  _objc_release(lVar2);

LAB_0011c1e8:

  _objc_release(param_5);

  return;

}




