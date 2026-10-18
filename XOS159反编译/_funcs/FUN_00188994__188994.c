// FUN_00188994 @0x188994


void FUN_00188994(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4)



{

  byte bVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 uVar6;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar7;

  undefined8 extraout_x1_02;

  long lVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  double dVar14;

  double dVar15;

  undefined1 auVar16 [16];

  undefined8 local_2c8;

  undefined8 local_2c0;

  long lStack_2b8;

  long *local_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined8 local_280;

  long lStack_278;

  long *local_270;

  undefined8 uStack_268;

  undefined8 local_260;

  undefined8 uStack_258;

  undefined8 uStack_250;

  undefined8 uStack_248;

  undefined8 local_240;

  long lStack_238;

  long *local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined1 auStack_200 [128];

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  (*DAT_003e8d48)();

  iVar2 = FUN_00188834();

  if (iVar2 == 0) goto LAB_00188d50;

  if (DAT_003e8d68 != -1) {

    FUN_0028f6e4();

  }

  if (DAT_003e8d60 == 0) goto LAB_00188d50;

  _objc_getAssociatedObject(param_4,PTR_LOOP_003e6e28);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

LAB_00188a3c:

    uStack_258 = 0;

    local_260 = 0;

    uStack_248 = 0;

    uStack_250 = 0;

    lStack_278 = 0;

    local_280 = 0;

    uStack_268 = 0;

    local_270 = (long *)0x0;

    FUN_002a4840(param_4);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    local_2c8 = auVar16._0_8_;

    lVar4 = FUN_00293880(local_2c8,auVar16._8_8_,&local_280,auStack_180,0x10);

    if (lVar4 != 0) {

      lVar8 = *local_270;

      do {

        lVar9 = 0;

        do {

          if (*local_270 != lVar8) {

            _objc_enumerationMutation(local_2c8);

          }

          uVar12 = *(undefined8 *)(lStack_278 + lVar9 * 8);

          lStack_2b8 = 0;

          local_2c0 = 0;

          uStack_2a8 = 0;

          local_2b0 = (long *)0x0;

          uStack_298 = 0;

          local_2a0 = 0;

          uStack_288 = 0;

          uStack_290 = 0;

          FUN_002a4840(uVar12);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          uVar7 = auVar16._0_8_;

          lVar5 = FUN_00293880(uVar7,auVar16._8_8_,&local_2c0,auStack_200,0x10);

          if (lVar5 == 0) {

            _objc_release(uVar7);

            uVar7 = extraout_x1_01;

          }

          else {

            bVar1 = 0;

            lVar10 = *local_2b0;

            dVar15 = 0.0;

            do {

              lVar11 = 0;

              dVar14 = dVar15;

              do {

                if (*local_2b0 != lVar10) {

                  _objc_enumerationMutation(uVar7);

                }

                uVar13 = *(undefined8 *)(lStack_2b8 + lVar11 * 8);

                auVar16 = _objc_opt_isKindOfClass(uVar13,DAT_003e8d60);

                uVar6 = auVar16._8_8_;

                dVar15 = dVar14;

                if ((auVar16._0_8_ & 1) != 0) {

                  FUN_00295600(uVar13);

                  dVar15 = (double)_CGRectGetMaxX();

                  if (dVar15 <= dVar14) {

                    dVar15 = dVar14;

                  }

                  bVar1 = 1;

                  uVar6 = extraout_x1;

                }

                lVar11 = lVar11 + 1;

                dVar14 = dVar15;

              } while (lVar5 != lVar11);

              lVar5 = FUN_00293880(uVar7,uVar6,&local_2c0,auStack_200,0x10);

            } while (lVar5 != 0);

            _objc_release(uVar7);

            uVar7 = extraout_x1_00;

            if ((bool)(bVar1 & 1.0 <= dVar15)) {

              _objc_setAssociatedObject(param_4,PTR_LOOP_003e6e28,uVar12,0);

              dVar14 = (double)FUN_00295600(uVar12);

              if (2.0 < param_3 - dVar15) {

                FUN_0029e5e0(dVar14 + (param_3 - dVar15),param_2,dVar15,uVar12);

              }

              auVar16 = _objc_opt_respondsToSelector(param_4,"rightMaskView");

              if ((auVar16._0_8_ & 1) != 0) {

                FUN_00299c80(param_4,auVar16._8_8_,"rightMaskView");

                auVar16 = _objc_retainAutoreleasedReturnValue();

                lVar4 = auVar16._0_8_;

                if (lVar4 != 0) {

                  FUN_0029e8a0(lVar4,auVar16._8_8_,1);

                }

                _objc_release(lVar4);

              }

              goto LAB_00188d40;

            }

          }

          lVar9 = lVar9 + 1;

        } while (lVar9 != lVar4);

        lVar4 = FUN_00293880(local_2c8,uVar7,&local_280,auStack_180,0x10);

      } while (lVar4 != 0);

    }

LAB_00188d40:

    _objc_release(local_2c8);

  }

  else {

    FUN_002a4880(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != param_4) goto LAB_00188a3c;

    uStack_218 = 0;

    local_220 = 0;

    uStack_208 = 0;

    uStack_210 = 0;

    lStack_238 = 0;

    local_240 = 0;

    uStack_228 = 0;

    local_230 = (long *)0x0;

    FUN_002a4840(lVar3);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    local_2c8 = auVar16._0_8_;

    lVar4 = FUN_00293880(local_2c8,auVar16._8_8_,&local_240,auStack_100,0x10);

    if (lVar4 == 0) goto LAB_00188d40;

    lVar8 = *local_230;

    dVar15 = 0.0;

    do {

      lVar9 = 0;

      dVar14 = dVar15;

      do {

        if (*local_230 != lVar8) {

          _objc_enumerationMutation(local_2c8);

        }

        uVar12 = *(undefined8 *)(lStack_238 + lVar9 * 8);

        auVar16 = _objc_opt_isKindOfClass(uVar12,DAT_003e8d60);

        uVar7 = auVar16._8_8_;

        dVar15 = dVar14;

        if ((auVar16._0_8_ & 1) != 0) {

          FUN_00295600(uVar12);

          dVar15 = (double)_CGRectGetMaxX();

          uVar7 = extraout_x1_02;

          if (dVar15 <= dVar14) {

            dVar15 = dVar14;

          }

        }

        lVar9 = lVar9 + 1;

        dVar14 = dVar15;

      } while (lVar4 != lVar9);

      lVar4 = FUN_00293880(local_2c8,uVar7,&local_240,auStack_100,0x10);

    } while (lVar4 != 0);

    _objc_release(local_2c8);

    if (1.0 < dVar15) {

      dVar14 = (double)FUN_00295600(lVar3);

      if (2.0 < param_3 - dVar15) {

        FUN_0029e5e0(dVar14 + (param_3 - dVar15),param_2,dVar15,lVar3);

      }

    }

  }

  _objc_release(lVar3);

LAB_00188d50:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




