// FUN_0002bafc @0x2bafc


void FUN_0002bafc(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

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

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar12._0_8_;

  FUN_0029efa0(uVar1,auVar12._8_8_,param_2,&cf_xzyHomeBottomBarStyleMode);

  FUN_002a4a40(uVar1);

  uVar7 = *(undefined8 *)(param_1 + 0x20);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,0);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar7,auVar12._8_8_,auVar12._0_8_,100);

  _objc_release(auVar12._0_8_);

  FUN_00240480();

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  FUN_002990e0(*(undefined8 *)(param_1 + 0x28));

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6260();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar7);

  lVar3 = FUN_00293880(uVar2,extraout_x1_00,&local_1b0,auStack_f0,0x10);

  if (lVar3 != 0) {

    lVar9 = *local_1a0;

    do {

      lVar10 = 0;

      do {

        if (*local_1a0 != lVar9) {

          _objc_enumerationMutation(uVar2);

        }

        lStack_1e8 = 0;

        local_1f0 = 0;

        uStack_1d8 = 0;

        local_1e0 = (long *)0x0;

        uStack_1c8 = 0;

        local_1d0 = 0;

        uStack_1b8 = 0;

        uStack_1c0 = 0;

        FUN_002a6220(*(undefined8 *)(lStack_1a8 + lVar10 * 8));

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4840();

        uVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar7);

        lVar5 = FUN_00293880(uVar4,extraout_x1_01,&local_1f0,auStack_170,0x10);

        if (lVar5 != 0) {

          lVar11 = *local_1e0;

          do {

            lVar6 = 0;

            do {

              if (*local_1e0 != lVar11) {

                _objc_enumerationMutation(uVar4);

              }

              uVar8 = *(undefined8 *)(lStack_1e8 + lVar6 * 8);

              uVar7 = _objc_opt_class(&_OBJC_CLASS___UITableView);

              auVar12 = _objc_opt_isKindOfClass(uVar8,uVar7);

              uVar7 = auVar12._8_8_;

              if (((auVar12._0_8_ & 1) != 0) &&

                 (auVar12 = FUN_002a4e60(uVar8), uVar7 = auVar12._8_8_, auVar12._0_8_ == 0x3f2)) {

                FUN_0029b140(uVar8);

                uVar7 = extraout_x1_02;

              }

              lVar6 = lVar6 + 1;

            } while (lVar5 != lVar6);

            lVar5 = FUN_00293880(uVar4,uVar7,&local_1f0,auStack_170,0x10);

          } while (lVar5 != 0);

        }

        _objc_release(uVar4);

        lVar10 = lVar10 + 1;

      } while (lVar10 != lVar3);

      lVar3 = FUN_00293880(uVar2,extraout_x1_03,&local_1b0,auStack_f0,0x10);

    } while (lVar3 != 0);

  }

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




