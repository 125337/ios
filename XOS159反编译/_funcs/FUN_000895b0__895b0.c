// FUN_000895b0 @0x895b0


void FUN_000895b0(undefined8 param_1,undefined8 param_2,char param_3)



{

  uint uVar1;

  uint uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar9;

  undefined8 uVar10;

  long lVar11;

  undefined1 auVar12 [16];

  char local_131;

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

  if (((uVar4 & 1) == 0) || (lVar5 = FUN_00297fa0(param_1), lVar5 == 0)) {

    uVar3 = 0;

  }

  else {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_retain(param_1);

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar3);

    FUN_00297da0(param_1);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    lVar5 = FUN_00297fa0(uVar7);

    if ((lVar5 == 0) || (lVar5 = FUN_00297fa0(uVar8), lVar5 == 0)) {

      uVar3 = 0;

    }

    else {

      uStack_108 = 0;

      local_110 = 0;

      uStack_f8 = 0;

      uStack_100 = 0;

      lStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      local_120 = (long *)0x0;

      _objc_retain(param_2);

      lVar5 = FUN_00293880(param_2,extraout_x1,&local_130,auStack_f0,0x10);

      if (lVar5 != 0) {

        lVar11 = *local_120;

        do {

          lVar9 = 0;

          do {

            if (*local_120 != lVar11) {

              _objc_enumerationMutation(param_2);

            }

            uVar3 = *(undefined8 *)(lStack_128 + lVar9 * 8);

            auVar12 = FUN_00297fa0(uVar3);

            if (auVar12._0_8_ == 0) {

              _objc_retain(uVar7);

              auVar12._8_8_ = extraout_x1_00;

              auVar12._0_8_ = uVar7;

            }

            else {

              FUN_002a4460(uVar7,auVar12._8_8_,uVar3);

              auVar12 = _objc_retainAutoreleasedReturnValue();

            }

            uVar10 = auVar12._0_8_;

            FUN_002a4460(uVar10,auVar12._8_8_,uVar8);

            auVar12 = _objc_retainAutoreleasedReturnValue();

            uVar3 = auVar12._0_8_;

            local_131 = '\0';

            uVar2 = FUN_00295180(uVar6,auVar12._8_8_,uVar3,&local_131);

            uVar1 = 0;

            if (local_131 == param_3) {

              uVar1 = uVar2;

            }

            if ((uVar1 & 1) != 0) {

              _objc_release(uVar10);

              goto LAB_000897c8;

            }

            _objc_release(uVar3);

            _objc_release(uVar10);

            lVar9 = lVar9 + 1;

          } while (lVar5 != lVar9);

          lVar5 = FUN_00293880(param_2,extraout_x1_01,&local_130,auStack_f0,0x10);

        } while (lVar5 != 0);

      }

      uVar3 = 0;

LAB_000897c8:

      _objc_release(param_2);

    }

    _objc_release(uVar8);

    _objc_release(uVar7);

    _objc_release(param_1);

    _objc_release(uVar6);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    _objc_autoreleaseReturnValue(uVar3);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




