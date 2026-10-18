// FUN_0023fd00 @0x23fd00


void FUN_0023fd00(undefined8 param_1,long *param_2)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  undefined8 extraout_x1;

  long lVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  undefined1 auVar13 [16];

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

  FUN_002318f4(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    lVar12 = 0;

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

    FUN_002a6260();

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar13._0_8_;

    lVar4 = FUN_00293880(uVar3,auVar13._8_8_,&local_130,auStack_f0,0x10);

    if (lVar4 == 0) {

      lVar12 = 0;

    }

    else {

      lVar10 = *local_120;

      lVar9 = 0;

      do {

        lVar8 = 0;

        lVar1 = lVar9 + lVar4;

        do {

          if (*local_120 != lVar10) {

            _objc_enumerationMutation(uVar3);

          }

          lVar11 = *(long *)(lStack_128 + lVar8 * 8);

          _objc_retain(lVar11);

          uVar5 = _objc_opt_class(&_OBJC_CLASS___UINavigationController);

          uVar6 = _objc_opt_isKindOfClass(lVar11,uVar5);

          lVar12 = lVar11;

          if ((uVar6 & 1) != 0) {

            FUN_002a6260(lVar11);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_00295440();

            lVar7 = _objc_retainAutoreleasedReturnValue();

            if (lVar7 != 0) {

              lVar12 = lVar7;

            }

            _objc_retain(lVar12);

            _objc_release(lVar11);

            _objc_release(lVar7);

            _objc_release(uVar5);

          }

          _objc_opt_class(lVar12);

          _NSStringFromClass();

          auVar13 = _objc_retainAutoreleasedReturnValue();

          uVar6 = FUN_00293580(auVar13._0_8_,auVar13._8_8_,&cf_NewMainFrameViewController);

          _objc_release(auVar13._0_8_);

          if ((uVar6 & 1) != 0) {

            *param_2 = lVar9;

            goto LAB_0023fed4;

          }

          _objc_release(lVar12);

          lVar9 = lVar9 + 1;

          lVar8 = lVar8 + 1;

        } while (lVar4 != lVar8);

        lVar4 = FUN_00293880(uVar3,extraout_x1,&local_130,auStack_f0,0x10);

        lVar9 = lVar1;

      } while (lVar4 != 0);

      lVar12 = 0;

    }

LAB_0023fed4:

    _objc_release(uVar3);

  }

  _objc_release(lVar2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(lVar12);

  return;

}




