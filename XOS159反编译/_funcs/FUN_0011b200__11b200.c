// FUN_0011b200 @0x11b200


void FUN_0011b200(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  long lVar10;

  long lVar11;

  undefined1 auVar12 [16];

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

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    _objc_setAssociatedObject(lVar1,&DAT_003e8350,0,1);

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_00291a00();

    if (lVar3 == 0) {

      FUN_002a6520(lVar1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar2);

      if ((lVar3 != 0) && (lVar3 = _objc_getClass("MainFrameItemView"), lVar3 != 0)) {

        uStack_188 = 0;

        local_190 = 0;

        uStack_178 = 0;

        uStack_180 = 0;

        lStack_1a8 = 0;

        local_1b0 = 0;

        uStack_198 = 0;

        local_1a0 = (long *)0x0;

        FUN_002a62e0(lVar1);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        uVar2 = auVar12._0_8_;

        lVar4 = FUN_00293880(uVar2,auVar12._8_8_,&local_1b0,auStack_f0,0x10);

        if (lVar4 != 0) {

          lVar10 = *local_1a0;

          do {

            lVar11 = 0;

            do {

              if (*local_1a0 != lVar10) {

                _objc_enumerationMutation(uVar2);

              }

              lVar8 = *(long *)(lStack_1a8 + lVar11 * 8);

              FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              FUN_00293640(lVar8);

              lVar6 = _objc_retainAutoreleasedReturnValue();

              if (lVar6 != 0) {

                lVar8 = lVar6;

              }

              FUN_0011b554(lVar8,lVar3,uVar5,0);

              _objc_release(lVar6);

              uStack_1c8 = 0;

              local_1d0 = 0;

              uStack_1b8 = 0;

              uStack_1c0 = 0;

              lStack_1e8 = 0;

              local_1f0 = 0;

              uStack_1d8 = 0;

              local_1e0 = (long *)0x0;

              _objc_retain(uVar5);

              lVar8 = FUN_00293880(uVar5,extraout_x1,&local_1f0,auStack_170,0x10);

              if (lVar8 != 0) {

                lVar6 = *local_1e0;

                do {

                  lVar7 = 0;

                  do {

                    if (*local_1e0 != lVar6) {

                      _objc_enumerationMutation(uVar5);

                    }

                    uVar9 = *(undefined8 *)(lStack_1e8 + lVar7 * 8);

                    _objc_retain(uVar9);

                    FUN_0011b700(uVar9);

                    FUN_0029ff40(uVar9);

                    FUN_0011b8dc(uVar9);

                    _objc_release(uVar9);

                    lVar7 = lVar7 + 1;

                  } while (lVar8 != lVar7);

                  lVar8 = FUN_00293880(uVar5,extraout_x1_00,&local_1f0,auStack_170,0x10);

                } while (lVar8 != 0);

              }

              _objc_release(uVar5);

              _objc_release(uVar5);

              lVar11 = lVar11 + 1;

            } while (lVar11 != lVar4);

            lVar4 = FUN_00293880(uVar2,extraout_x1_01,&local_1b0,auStack_f0,0x10);

          } while (lVar4 != 0);

        }

        _objc_release(uVar2);

        FUN_0029ff40(lVar1);

      }

    }

    else {

      _objc_release(uVar2);

    }

  }

  _objc_release(lVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




