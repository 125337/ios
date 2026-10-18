// FUN_00088df0 @0x88df0


void FUN_00088df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5

                 )



{

  ulong uVar1;

  ulong uVar2;

  long lVar3;

  bool bVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar10;

  undefined8 extraout_x1_05;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  undefined8 uVar16;

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  _objc_retain(param_2);

  auVar17 = FUN_00293880(param_2,extraout_x1,&local_1b0,auStack_f0,0x10);

  if (auVar17._0_8_ != 0) {

    lVar15 = *local_1a0;

    do {

      uVar5 = auVar17._8_8_;

      lVar12 = 0;

      do {

        if (*local_1a0 != lVar15) {

          _objc_enumerationMutation(param_2);

          uVar5 = extraout_x1_00;

        }

        uVar16 = *(undefined8 *)(lStack_1a8 + lVar12 * 8);

        FUN_00299540(param_1,uVar5,uVar16);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        uVar6 = _objc_opt_respondsToSelector(uVar5,"integerValue");

        if ((uVar6 & 1) != 0) {

          auVar18 = FUN_002974a0(uVar5);

          lVar7 = auVar18._0_8_;

          if ((param_4 <= lVar7) && (param_5 < param_4 || lVar7 <= param_5)) {

            FUN_00299400(&_OBJC_CLASS___NSNumber,auVar18._8_8_,lVar7 - param_4);

            auVar18 = _objc_retainAutoreleasedReturnValue();

            FUN_00299540(param_3,auVar18._8_8_,auVar18._0_8_);

            lVar8 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar18._0_8_);

            if (lVar8 == 0) {

              auVar18 = FUN_00293860(param_3);

              uVar10 = auVar18._8_8_;

              if (auVar18._0_8_ != 0) {

                uStack_1c8 = 0;

                local_1d0 = 0;

                uStack_1b8 = 0;

                uStack_1c0 = 0;

                lStack_1e8 = 0;

                local_1f0 = 0;

                uStack_1d8 = 0;

                local_1e0 = (long *)0x0;

                _objc_retain(param_3);

                lVar8 = FUN_00293880(param_3,extraout_x1_01,&local_1f0,auStack_170,0x10);

                if (lVar8 == 0) {

                  _objc_release(param_3);

                  uVar10 = extraout_x1_04;

                }

                else {

                  lVar13 = *local_1e0;

                  lVar11 = 0x7fffffffffffffff;

                  uVar6 = 0x7fffffffffffffff;

                  do {

                    lVar14 = 0;

                    do {

                      if (*local_1e0 != lVar13) {

                        _objc_enumerationMutation(param_3);

                      }

                      auVar18 = FUN_002974a0(*(undefined8 *)(lStack_1e8 + lVar14 * 8));

                      lVar9 = auVar18._0_8_;

                      uVar2 = lVar9 - (lVar7 - param_4);

                      uVar1 = -uVar2;

                      if (-1 < (long)uVar2) {

                        uVar1 = uVar2;

                      }

                      uVar2 = uVar6;

                      lVar3 = lVar11;

                      if (uVar1 == uVar6 && lVar9 < lVar11) {

                        uVar2 = uVar1;

                        lVar3 = lVar9;

                      }

                      bVar4 = uVar6 <= uVar1;

                      uVar6 = uVar1;

                      lVar11 = lVar9;

                      if (bVar4) {

                        uVar6 = uVar2;

                        lVar11 = lVar3;

                      }

                      lVar14 = lVar14 + 1;

                    } while (lVar8 != lVar14);

                    lVar8 = FUN_00293880(param_3,auVar18._8_8_,&local_1f0,auStack_170,0x10);

                  } while (lVar8 != 0);

                  _objc_release(param_3);

                  uVar10 = extraout_x1_02;

                  if (lVar11 != 0x7fffffffffffffff) {

                    FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_02,lVar11);

                    auVar18 = _objc_retainAutoreleasedReturnValue();

                    FUN_00299540(param_3,auVar18._8_8_,auVar18._0_8_);

                    lVar8 = _objc_retainAutoreleasedReturnValue();

                    _objc_release(auVar18._0_8_);

                    uVar10 = extraout_x1_03;

                    if (lVar8 != 0) goto LAB_00088f3c;

                  }

                }

              }

              FUN_0029b4a0(param_1,uVar10,uVar16);

            }

            else {

LAB_00088f3c:

              auVar18 = FUN_002974a0(lVar8);

              FUN_00299400(&_OBJC_CLASS___NSNumber,auVar18._8_8_,auVar18._0_8_ + param_4);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_002a00a0(param_1,auVar18._8_8_,auVar18._0_8_,uVar16);

              _objc_release(auVar18._0_8_);

              _objc_release(lVar8);

            }

          }

        }

        _objc_release(uVar5);

        lVar12 = lVar12 + 1;

        uVar5 = extraout_x1_05;

      } while (lVar12 != auVar17._0_8_);

      auVar17 = FUN_00293880(param_2,extraout_x1_05,&local_1b0,auStack_f0,0x10);

    } while (auVar17._0_8_ != 0);

  }

  _objc_release(param_2);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




