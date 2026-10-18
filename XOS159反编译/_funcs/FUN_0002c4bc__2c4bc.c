// FUN_0002c4bc @0x2c4bc


void FUN_0002c4bc(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined1 auVar11 [16];

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

  uVar5 = *(undefined8 *)(param_1 + 0x20);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,param_2,0);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar5,auVar11._8_8_,auVar11._0_8_,100);

  _objc_release(auVar11._0_8_);

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  FUN_002990e0(*(undefined8 *)(param_1 + 0x28));

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6260();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  lVar2 = FUN_00293880(uVar1,extraout_x1,&local_1b0,auStack_f0,0x10);

  if (lVar2 != 0) {

    lVar7 = *local_1a0;

    do {

      lVar8 = 0;

      do {

        if (*local_1a0 != lVar7) {

          _objc_enumerationMutation(uVar1);

        }

        lStack_1e8 = 0;

        local_1f0 = 0;

        uStack_1d8 = 0;

        local_1e0 = (long *)0x0;

        uStack_1c8 = 0;

        local_1d0 = 0;

        uStack_1b8 = 0;

        uStack_1c0 = 0;

        FUN_002a6220(*(undefined8 *)(lStack_1a8 + lVar8 * 8));

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4840();

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar5);

        lVar4 = FUN_00293880(uVar3,extraout_x1_00,&local_1f0,auStack_170,0x10);

        if (lVar4 != 0) {

          lVar9 = *local_1e0;

          do {

            lVar10 = 0;

            do {

              if (*local_1e0 != lVar9) {

                _objc_enumerationMutation(uVar3);

              }

              uVar6 = *(undefined8 *)(lStack_1e8 + lVar10 * 8);

              uVar5 = _objc_opt_class(&_OBJC_CLASS___UITableView);

              auVar11 = _objc_opt_isKindOfClass(uVar6,uVar5);

              uVar5 = auVar11._8_8_;

              if (((auVar11._0_8_ & 1) != 0) &&

                 (auVar11 = FUN_002a4e60(uVar6), uVar5 = auVar11._8_8_, auVar11._0_8_ == 0x3f2)) {

                FUN_0029b140(uVar6);

                uVar5 = extraout_x1_01;

              }

              lVar10 = lVar10 + 1;

            } while (lVar4 != lVar10);

            lVar4 = FUN_00293880(uVar3,uVar5,&local_1f0,auStack_170,0x10);

          } while (lVar4 != 0);

        }

        _objc_release(uVar3);

        lVar8 = lVar8 + 1;

      } while (lVar8 != lVar2);

      lVar2 = FUN_00293880(uVar1,extraout_x1_02,&local_1b0,auStack_f0,0x10);

    } while (lVar2 != 0);

  }

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




