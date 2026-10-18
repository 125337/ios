// updateUnreadBadgesWithEntries: @0x1dcc58


/* Function Stack Size: 0x18 bytes */



void XZYCLGHorizontalBarView::updateUnreadBadgesWithEntries_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  undefined1 auVar10 [16];

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

  FUN_00299900(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_00293860();

  if (lVar3 == 0) {

    _objc_release(uVar2);

  }

  else {

    lVar3 = FUN_00293860(param_3);

    _objc_release(uVar2);

    if (lVar3 != 0) {

      auVar10 = FUN_00293860(param_3);

      FUN_00294520(&_OBJC_CLASS___NSMutableDictionary,auVar10._8_8_,auVar10._0_8_);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      uStack_188 = 0;

      local_190 = 0;

      uStack_178 = 0;

      uStack_180 = 0;

      lStack_1a8 = 0;

      local_1b0 = 0;

      uStack_198 = 0;

      local_1a0 = (long *)0x0;

      _objc_retain(param_3);

      lVar3 = FUN_00293880(param_3,extraout_x1,&local_1b0,auStack_f0,0x10);

      if (lVar3 != 0) {

        lVar7 = *local_1a0;

        do {

          lVar9 = 0;

          do {

            if (*local_1a0 != lVar7) {

              _objc_enumerationMutation(param_3);

            }

            uVar8 = *(undefined8 *)(lStack_1a8 + lVar9 * 8);

            iVar1 = FUN_00297760(uVar8);

            uVar4 = extraout_x1_00;

            if (iVar1 != 0) {

              FUN_00295de0(uVar8);

              uVar4 = _objc_retainAutoreleasedReturnValue();

              lVar5 = FUN_00297fa0();

              _objc_release(uVar4);

              uVar4 = extraout_x1_01;

              if (lVar5 != 0) {

                FUN_00295de0(uVar8);

                auVar10 = _objc_retainAutoreleasedReturnValue();

                FUN_002a00a0(uVar2,auVar10._8_8_,uVar8,auVar10._0_8_);

                _objc_release(auVar10._0_8_);

                uVar4 = extraout_x1_02;

              }

            }

            lVar9 = lVar9 + 1;

          } while (lVar3 != lVar9);

          lVar3 = FUN_00293880(param_3,uVar4,&local_1b0,auStack_f0,0x10);

        } while (lVar3 != 0);

      }

      _objc_release(param_3);

      uStack_1c8 = 0;

      local_1d0 = 0;

      uStack_1b8 = 0;

      uStack_1c0 = 0;

      lStack_1e8 = 0;

      local_1f0 = 0;

      uStack_1d8 = 0;

      local_1e0 = (long *)0x0;

      FUN_00299900(param_1);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar10._0_8_;

      lVar3 = FUN_00293880(uVar4,auVar10._8_8_,&local_1f0,auStack_170,0x10);

      if (lVar3 != 0) {

        lVar7 = *local_1e0;

        do {

          lVar9 = 0;

          do {

            if (*local_1e0 != lVar7) {

              _objc_enumerationMutation(uVar4);

            }

            uVar8 = *(undefined8 *)(lStack_1e8 + lVar9 * 8);

            FUN_00295de0(uVar8);

            auVar10 = _objc_retainAutoreleasedReturnValue();

            FUN_00299540(uVar2,auVar10._8_8_,auVar10._0_8_);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar10._0_8_);

            if (lVar5 != 0) {

              uVar6 = FUN_002a59c0(lVar5);

              FUN_00294d20(uVar8);

              auVar10 = _objc_retainAutoreleasedReturnValue();

              FUN_002a2340(auVar10._0_8_,auVar10._8_8_,uVar6);

              _objc_release(auVar10._0_8_);

              uVar6 = FUN_00295da0(lVar5);

              FUN_00294d20(uVar8);

              auVar10 = _objc_retainAutoreleasedReturnValue();

              FUN_0029e740(auVar10._0_8_,auVar10._8_8_,uVar6);

              _objc_release(auVar10._0_8_);

              if (DAT_003e70f0 == '\x01') {

                uVar6 = FUN_002a59c0(lVar5);

              }

              else {

                uVar6 = 0;

              }

              FUN_002920a0(uVar8);

              auVar10 = _objc_retainAutoreleasedReturnValue();

              FUN_002a2340(auVar10._0_8_,auVar10._8_8_,uVar6);

              _objc_release(auVar10._0_8_);

              FUN_0029ff40(uVar8);

            }

            _objc_release(lVar5);

            lVar9 = lVar9 + 1;

          } while (lVar3 != lVar9);

          lVar3 = FUN_00293880(uVar4,extraout_x1_03,&local_1f0,auStack_170,0x10);

        } while (lVar3 != 0);

      }

      _objc_release(uVar4);

      _objc_release(uVar2);

    }

  }

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




