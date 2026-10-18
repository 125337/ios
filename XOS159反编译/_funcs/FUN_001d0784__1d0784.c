// FUN_001d0784 @0x1d0784


void FUN_001d0784(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 uVar7;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar8;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  undefined8 uVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  undefined *local_238;

  undefined8 local_230;

  code *local_228;

  undefined *puStack_220;

  long local_218;

  undefined8 local_210;

  long lStack_208;

  long *local_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  undefined8 uStack_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  long lStack_1c8;

  long *local_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined1 auStack_188 [128];

  undefined1 auStack_108 [128];

  long local_88;

  

  local_88 = *(long *)PTR____stack_chk_guard_00388738;

  if (DAT_003eaf08 != -1) {

    thunk_FUN_00223ad4();

  }

  _os_unfair_lock_lock(&DAT_003ead54);

  FUN_00291620(DAT_003eaa70);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _os_unfair_lock_unlock(&DAT_003ead54);

  uStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  uStack_1a0 = 0;

  lStack_1c8 = 0;

  local_1d0 = 0;

  uStack_1b8 = 0;

  local_1c0 = (long *)0x0;

  _objc_retain(uVar1);

  auVar14 = FUN_00293880(uVar1,extraout_x1,&local_1d0,auStack_108,0x10);

  if (auVar14._0_8_ != 0) {

    lVar9 = *local_1c0;

    do {

      uVar7 = auVar14._8_8_;

      lVar10 = 0;

      do {

        if (*local_1c0 != lVar9) {

          _objc_enumerationMutation(uVar1);

          uVar7 = extraout_x1_00;

        }

        uVar2 = *(undefined8 *)(lStack_1c8 + lVar10 * 8);

        FUN_002a6080(uVar2,uVar7,&cf_m_tableView);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 != 0) {

          uStack_1e8 = 0;

          local_1f0 = 0;

          uStack_1d8 = 0;

          uStack_1e0 = 0;

          lStack_208 = 0;

          local_210 = 0;

          uStack_1f8 = 0;

          local_200 = (long *)0x0;

          FUN_002a62e0();

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar7 = auVar15._0_8_;

          lVar4 = FUN_00293880(uVar7,auVar15._8_8_,&local_210,auStack_188,0x10);

          if (lVar4 != 0) {

            lVar12 = *local_200;

            do {

              lVar11 = 0;

              do {

                if (*local_200 != lVar12) {

                  _objc_enumerationMutation(uVar7);

                }

                uVar13 = *(undefined8 *)(lStack_208 + lVar11 * 8);

                FUN_0029b9c0(uVar13);

                auVar15 = _objc_retainAutoreleasedReturnValue();

                uVar5 = FUN_00297820(auVar15._0_8_,auVar15._8_8_,&cf_XZYCLGDividerCell);

                _objc_release(auVar15._0_8_);

                uVar8 = extraout_x1_01;

                if ((uVar5 & 1) != 0) {

                  _objc_getAssociatedObject(uVar13,&DAT_003eaab0);

                  lVar6 = _objc_retainAutoreleasedReturnValue();

                  if ((lVar6 != 0) && (uVar5 = FUN_00297760(lVar6), (uVar5 & 1) != 0)) {

                    FUN_0020cd60(uVar13,lVar6);

                  }

                  _objc_release(lVar6);

                  uVar8 = extraout_x1_02;

                }

                lVar11 = lVar11 + 1;

              } while (lVar4 != lVar11);

              lVar4 = FUN_00293880(uVar7,uVar8,&local_210,auStack_188,0x10);

            } while (lVar4 != 0);

          }

          _objc_release(uVar7);

          local_238 = PTR___NSConcreteStackBlock_003886f0;

          local_230 = 0xc2000000;

          local_228 = FUN_0020e490;

          puStack_220 = &DAT_00388e60;

          _objc_retain(lVar3);

          local_218 = lVar3;

          FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_03,&local_238);

          _objc_release(local_218);

          FUN_0020b734(uVar2,1);

        }

        _objc_release(lVar3);

        lVar10 = lVar10 + 1;

        uVar7 = extraout_x1_04;

      } while (lVar10 != auVar14._0_8_);

      auVar14 = FUN_00293880(uVar1,extraout_x1_04,&local_1d0,auStack_108,0x10);

    } while (auVar14._0_8_ != 0);

  }

  _objc_release(uVar1);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_88) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




