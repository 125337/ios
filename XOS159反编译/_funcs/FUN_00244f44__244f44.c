// FUN_00244f44 @0x244f44


void FUN_00244f44(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  FUN_002a4840(param_1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar8._0_8_;

  lVar3 = FUN_00293880(uVar2,auVar8._8_8_,&local_130,auStack_e8,0x10);

  if (lVar3 != 0) {

    lVar6 = *local_120;

    do {

      lVar7 = 0;

      do {

        if (*local_120 != lVar6) {

          _objc_enumerationMutation(uVar2);

        }

        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);

        uVar4 = _objc_opt_class(&objc::class_t::XZYHomeDockButton);

        auVar8 = _objc_opt_isKindOfClass(uVar5,uVar4);

        uVar4 = auVar8._8_8_;

        if ((auVar8._0_8_ & 1) != 0) {

          FUN_00291240(uVar1,uVar4,uVar5);

          uVar4 = extraout_x1;

        }

        lVar7 = lVar7 + 1;

      } while (lVar3 != lVar7);

      lVar3 = FUN_00293880(uVar2,uVar4,&local_130,auStack_e8,0x10);

    } while (lVar3 != 0);

  }

  _objc_release(uVar2);

  FUN_002a3ee0(uVar1,extraout_x1_00,&PTR___NSConcreteGlobalBlock_0038fb78);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    _objc_autoreleaseReturnValue(uVar1);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




