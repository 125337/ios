// FUN_000c4870 @0xc4870


void FUN_000c4870(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  double *pdVar1;

  int iVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar10;

  long lVar11;

  double dVar12;

  undefined1 auVar13 [16];

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

  FUN_00082ce4();

  if ((DAT_003e7951 != '\x01') ||

     (uVar3 = _objc_opt_respondsToSelector(param_5,"getHeadImageView"), (uVar3 & 1) == 0))

  goto LAB_000c4d44;

  FUN_002959c0(param_5);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 != 0) {

    FUN_002a6280(param_5);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if ((lVar5 != 0) && (uVar3 = _objc_opt_respondsToSelector(lVar5,"isSender"), (uVar3 & 1) != 0))

    {

      iVar2 = FUN_00297a80(lVar5);

      if (DAT_003e7c40 != -1) {

        FUN_0028f0f0();

      }

      if (DAT_003e7c38 != 0) {

        _objc_getAssociatedObject(param_5,&DAT_003e7c48);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        uVar8 = auVar13._8_8_;

        lVar7 = auVar13._0_8_;

        if (lVar7 == 0) {

LAB_000c49e0:

          FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,uVar8,lVar4);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          while (lVar7 = FUN_00293860(lVar6), lVar7 != 0) {

            FUN_00295440(lVar6);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            lVar7 = auVar13._0_8_;

            FUN_0029b480(lVar6,auVar13._8_8_,0);

            uVar3 = _objc_opt_isKindOfClass(lVar7,DAT_003e7c38);

            if ((uVar3 & 1) != 0) {

              if (lVar7 == 0) goto LAB_000c4d24;

              _objc_setAssociatedObject(param_5,&DAT_003e7c48,lVar7,1);

              _objc_release(lVar6);

              goto LAB_000c4b0c;

            }

            uStack_118 = 0;

            local_120 = 0;

            uStack_108 = 0;

            uStack_110 = 0;

            lStack_138 = 0;

            local_140 = 0;

            uStack_128 = 0;

            local_130 = (long *)0x0;

            FUN_002a4840(lVar7);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            uVar8 = auVar13._0_8_;

            auVar13 = FUN_00293880(uVar8,auVar13._8_8_,&local_140,auStack_100,0x10);

            if (auVar13._0_8_ != 0) {

              lVar11 = *local_130;

              do {

                uVar9 = auVar13._8_8_;

                lVar10 = 0;

                do {

                  if (*local_130 != lVar11) {

                    _objc_enumerationMutation(uVar8);

                    uVar9 = extraout_x1_00;

                  }

                  FUN_00291240(lVar6,uVar9,*(undefined8 *)(lStack_138 + lVar10 * 8));

                  lVar10 = lVar10 + 1;

                  uVar9 = extraout_x1_01;

                } while (auVar13._0_8_ != lVar10);

                auVar13 = FUN_00293880(uVar8,extraout_x1_01,&local_140,auStack_100,0x10);

              } while (auVar13._0_8_ != 0);

            }

            _objc_release(uVar8);

            _objc_release(lVar7);

          }

          lVar7 = 0;

LAB_000c4d24:

          _objc_release(lVar6);

        }

        else {

          uVar3 = _objc_opt_isKindOfClass(lVar7,DAT_003e7c38);

          if ((uVar3 & 1) == 0) {

LAB_000c49a0:

            _objc_release(lVar7);

            _objc_setAssociatedObject(param_5,&DAT_003e7c48,0,1);

            _objc_setAssociatedObject(param_5,&DAT_003e7c49,0,1);

            uVar8 = extraout_x1;

            goto LAB_000c49e0;

          }

          FUN_002a4880(lVar7);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          if (auVar13._0_8_ == 0) goto LAB_000c49a0;

          uVar3 = FUN_00297700(lVar7,auVar13._8_8_,lVar4);

          _objc_release(auVar13._0_8_);

          if ((uVar3 & 1) == 0) goto LAB_000c49a0;

LAB_000c4b0c:

          FUN_002925a0(lVar7);

          FUN_002925a0(lVar7);

          if (param_4 <= param_3) {

            param_3 = param_4;

          }

          if (0.0 < param_3) {

            pdVar1 = (double *)&DAT_003e7970;

            if (iVar2 == 0) {

              pdVar1 = (double *)&DAT_003e7978;

            }

            dVar12 = DAT_003e7980;

            if (DAT_003e7980 <= 0.0) {

              dVar12 = 0.0;

            }

            uVar3 = 0x80000000;

            if (iVar2 == 0) {

              uVar3 = 0;

            }

            if (0.0 < *pdVar1) {

              dVar12 = *pdVar1;

            }

            _objc_getAssociatedObject(param_5,&DAT_003e7c49);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            uVar8 = auVar13._8_8_;

            lVar6 = auVar13._0_8_;

            uVar3 = uVar3 ^ (long)(param_3 * 100.0) ^ (long)(dVar12 * 1000.0) << 0x10;

            if (lVar6 == 0) {

LAB_000c4bc8:

              FUN_00299480(&_OBJC_CLASS___NSNumber,uVar8,uVar3);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(param_5,&DAT_003e7c49,uVar8,1);

              _objc_release(uVar8);

              FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_02,iVar2);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(lVar7,&DAT_003e7988,uVar8,1);

              _objc_release(uVar8);

              if (dVar12 <= 0.0) {

                param_3 = param_3 * 0.5;

              }

              else {

                param_3 = (param_3 * dVar12) / 100.0;

              }

              FUN_00297e40(lVar7);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              FUN_002993a0(param_3,&_OBJC_CLASS___NSNumber);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              _objc_setAssociatedObject(uVar8,&DAT_003e7952,uVar9,1);

              _objc_release(uVar9);

              _objc_release(uVar8);

              FUN_00297e40(lVar7);

              uVar8 = _objc_retainAutoreleasedReturnValue();

              dVar12 = (double)FUN_00293820();

              _objc_release(uVar8);

              if (0.5 < ABS(dVar12 - param_3)) {

                FUN_00297e40(lVar7);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                FUN_0029d820(param_3);

                _objc_release(uVar8);

              }

              auVar13 = FUN_00292e20(lVar7);

              if ((auVar13._0_8_ & 1) == 0) {

                FUN_0029d4a0(lVar7,auVar13._8_8_,1);

              }

            }

            else {

              auVar13 = FUN_002a5a20(lVar6);

              uVar8 = auVar13._8_8_;

              if (auVar13._0_8_ != uVar3) goto LAB_000c4bc8;

            }

            goto LAB_000c4d24;

          }

        }

        _objc_release(lVar7);

      }

    }

    _objc_release(lVar5);

  }

  _objc_release(lVar4);

LAB_000c4d44:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




