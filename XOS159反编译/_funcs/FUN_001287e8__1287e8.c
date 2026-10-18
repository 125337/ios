// FUN_001287e8 @0x1287e8


void FUN_001287e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar9;

  long lVar10;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  long local_218;

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

  _objc_retain(param_3);

  lVar1 = FUN_002a4240(param_3);

  if ((lVar1 == 1) && (FUN_0011efd4(), DAT_003e83d0 == '\x01' && DAT_003e8470 == 0)) {

    FUN_002a6220(param_3);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar14._0_8_;

    FUN_00298440(param_3,auVar14._8_8_,uVar2);

    FUN_002967a0(uVar2);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    lVar1 = auVar14._0_8_;

    if (lVar1 != 0) {

      FUN_00292aa0(uVar2,auVar14._8_8_,lVar1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _objc_retain(lVar3);

        lVar4 = _objc_getClass("MainFrameItemView");

        if (lVar4 == 0) {

          _objc_release(lVar3);

          lVar4 = 0;

        }

        else {

          uStack_188 = 0;

          local_190 = 0;

          uStack_178 = 0;

          uStack_180 = 0;

          lStack_1a8 = 0;

          local_1b0 = 0;

          uStack_198 = 0;

          local_1a0 = (long *)0x0;

          FUN_00293640(lVar3);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4840();

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar5);

          local_218 = FUN_00293880(uVar6,extraout_x1,&local_1b0,auStack_f0,0x10);

          if (local_218 != 0) {

            lVar9 = *local_1a0;

            do {

              lVar13 = 0;

              do {

                if (*local_1a0 != lVar9) {

                  _objc_enumerationMutation(uVar6);

                }

                uVar5 = *(undefined8 *)(lStack_1a8 + lVar13 * 8);

                uVar7 = _objc_opt_isKindOfClass(uVar5,lVar4);

                if ((uVar7 & 1) != 0) {

                  FUN_00298520(uVar5);

                  auVar14 = _objc_retainAutoreleasedReturnValue();

                  FUN_002a6080(auVar14._0_8_,auVar14._8_8_,&cf_m_sessionInfo);

                  auVar15 = _objc_retainAutoreleasedReturnValue();

                  FUN_002a6080(auVar15._0_8_,auVar15._8_8_,&cf_m_nsUserName);

                  lVar4 = _objc_retainAutoreleasedReturnValue();

                  _objc_release(auVar15._0_8_);

                  _objc_release(auVar14._0_8_);

                  goto LAB_00128ab0;

                }

                uStack_1c8 = 0;

                local_1d0 = 0;

                uStack_1b8 = 0;

                uStack_1c0 = 0;

                lStack_1e8 = 0;

                local_1f0 = 0;

                uStack_1d8 = 0;

                local_1e0 = (long *)0x0;

                FUN_002a4840(uVar5);

                auVar14 = _objc_retainAutoreleasedReturnValue();

                uVar5 = auVar14._0_8_;

                lVar8 = FUN_00293880(uVar5,auVar14._8_8_,&local_1f0,auStack_170,0x10);

                if (lVar8 != 0) {

                  lVar11 = *local_1e0;

                  do {

                    lVar10 = 0;

                    do {

                      if (*local_1e0 != lVar11) {

                        _objc_enumerationMutation(uVar5);

                      }

                      uVar12 = *(undefined8 *)(lStack_1e8 + lVar10 * 8);

                      auVar14 = _objc_opt_isKindOfClass(uVar12,lVar4);

                      if ((auVar14._0_8_ & 1) != 0) {

                        FUN_00298520(uVar12);

                        auVar14 = _objc_retainAutoreleasedReturnValue();

                        FUN_002a6080(auVar14._0_8_,auVar14._8_8_,&cf_m_sessionInfo);

                        auVar15 = _objc_retainAutoreleasedReturnValue();

                        FUN_002a6080(auVar15._0_8_,auVar15._8_8_,&cf_m_nsUserName);

                        lVar4 = _objc_retainAutoreleasedReturnValue();

                        _objc_release(auVar15._0_8_);

                        _objc_release(auVar14._0_8_);

                        _objc_release(uVar5);

                        goto LAB_00128ab0;

                      }

                      lVar10 = lVar10 + 1;

                    } while (lVar8 != lVar10);

                    lVar8 = FUN_00293880(uVar5,auVar14._8_8_,&local_1f0,auStack_170,0x10);

                  } while (lVar8 != 0);

                }

                _objc_release(uVar5);

                lVar13 = lVar13 + 1;

              } while (lVar13 != local_218);

              local_218 = FUN_00293880(uVar6,extraout_x1_00,&local_1b0,auStack_f0,0x10);

            } while (local_218 != 0);

          }

          lVar4 = 0;

LAB_00128ab0:

          _objc_release(uVar6);

          _objc_release(lVar3);

          if ((lVar4 != 0) && (lVar9 = FUN_00297fa0(lVar4), lVar9 != 0)) {

            FUN_0011ad20(lVar4);

            lVar9 = _objc_retainAutoreleasedReturnValue();

            if ((lVar9 == 0) || (lVar13 = FUN_00297fa0(lVar9), lVar13 == 0)) {

              _objc_retain(lVar4);

              _objc_release(lVar9);

              lVar9 = lVar4;

            }

            FUN_00120964(param_1,lVar4,lVar9,uVar2);

            _objc_release(lVar9);

          }

        }

        _objc_release(lVar4);

      }

      _objc_release(lVar3);

    }

    _objc_release(lVar1);

    _objc_release(uVar2);

  }

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




