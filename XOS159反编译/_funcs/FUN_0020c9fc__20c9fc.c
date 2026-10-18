// FUN_0020c9fc @0x20c9fc


void FUN_0020c9fc(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 uVar8;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar9;

  undefined8 uVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

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

  if (DAT_003eaf08 != -1) {

    thunk_FUN_00223ad4();

  }

  _os_unfair_lock_lock(&DAT_003ead54);

  FUN_00291620(DAT_003eaa70);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _os_unfair_lock_unlock(&DAT_003ead54);

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  _objc_retain(uVar1);

  auVar14 = FUN_00293880(uVar1,extraout_x1,&local_1b0,auStack_f0,0x10);

  if (auVar14._0_8_ != 0) {

    lVar9 = *local_1a0;

    do {

      uVar8 = auVar14._8_8_;

      lVar12 = 0;

      do {

        if (*local_1a0 != lVar9) {

          _objc_enumerationMutation(uVar1);

          uVar8 = extraout_x1_00;

        }

        uVar2 = *(undefined8 *)(lStack_1a8 + lVar12 * 8);

        FUN_002a6080(uVar2,uVar8,&cf_m_tableView);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 != 0) {

          uStack_1c8 = 0;

          local_1d0 = 0;

          uStack_1b8 = 0;

          uStack_1c0 = 0;

          lStack_1e8 = 0;

          local_1f0 = 0;

          uStack_1d8 = 0;

          local_1e0 = (long *)0x0;

          FUN_002a62e0();

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar8 = auVar15._0_8_;

          lVar4 = FUN_00293880(uVar8,auVar15._8_8_,&local_1f0,auStack_170,0x10);

          if (lVar4 != 0) {

            lVar13 = *local_1e0;

            do {

              lVar11 = 0;

              do {

                if (*local_1e0 != lVar13) {

                  _objc_enumerationMutation(uVar8);

                }

                uVar10 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);

                FUN_0029b9c0(uVar10);

                auVar15 = _objc_retainAutoreleasedReturnValue();

                uVar5 = FUN_00297820(auVar15._0_8_,auVar15._8_8_,&cf_XZYCLGDividerCell);

                _objc_release(auVar15._0_8_);

                uVar7 = extraout_x1_01;

                if ((uVar5 & 1) != 0) {

                  _objc_getAssociatedObject(uVar10,&DAT_003eaab0);

                  lVar6 = _objc_retainAutoreleasedReturnValue();

                  if ((lVar6 != 0) && (uVar5 = FUN_00297760(lVar6), (uVar5 & 1) != 0)) {

                    FUN_0020cd60(uVar10,lVar6);

                    FUN_00293640(uVar10);

                    uVar7 = _objc_retainAutoreleasedReturnValue();

                    FUN_0029ff40();

                    _objc_release(uVar7);

                  }

                  _objc_release(lVar6);

                  uVar7 = extraout_x1_02;

                }

                lVar11 = lVar11 + 1;

              } while (lVar4 != lVar11);

              lVar4 = FUN_00293880(uVar8,uVar7,&local_1f0,auStack_170,0x10);

            } while (lVar4 != 0);

          }

          _objc_release(uVar8);

          FUN_0020b734(uVar2,1);

        }

        _objc_release(lVar3);

        lVar12 = lVar12 + 1;

        uVar8 = extraout_x1_03;

      } while (lVar12 != auVar14._0_8_);

      auVar14 = FUN_00293880(uVar1,extraout_x1_03,&local_1b0,auStack_f0,0x10);

    } while (auVar14._0_8_ != 0);

  }

  _objc_release(uVar1);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




