// FUN_001f2334 @0x1f2334


void FUN_001f2334(undefined8 param_1,undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  undefined1 auVar9 [16];

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

  _objc_retain(param_2);

  lVar1 = FUN_0020baec(param_1);

  if (lVar1 != 0x7fffffffffffffff) {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    uStack_100 = 0;

    lStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    local_120 = (long *)0x0;

    _objc_retain(param_2);

    lVar4 = FUN_00293880(param_2,extraout_x1,&local_130,auStack_e8,0x10);

    if (lVar4 != 0) {

      lVar7 = *local_120;

      do {

        lVar8 = 0;

        do {

          if (*local_120 != lVar7) {

            _objc_enumerationMutation(param_2);

          }

          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);

          uVar5 = _objc_opt_class(&_OBJC_CLASS___NSString);

          auVar9 = _objc_opt_isKindOfClass(uVar6,uVar5);

          uVar5 = auVar9._8_8_;

          if ((((auVar9._0_8_ & 1) != 0) &&

              (auVar9 = FUN_00297fa0(uVar6), uVar5 = auVar9._8_8_, auVar9._0_8_ != 0)) &&

             (auVar9 = FUN_00293560(uVar3,uVar5,uVar6), uVar5 = auVar9._8_8_,

             (auVar9._0_8_ & 1) == 0)) {

            FUN_00291240(uVar3,uVar5,uVar6);

            FUN_00291240(uVar2,extraout_x1_00,uVar6);

            uVar5 = extraout_x1_01;

          }

          lVar8 = lVar8 + 1;

        } while (lVar4 != lVar8);

        lVar4 = FUN_00293880(param_2,uVar5,&local_130,auStack_e8,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(param_2);

    FUN_00299500(DAT_003eaa10,extraout_x1_02,lVar1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_00299020();

    _objc_release(uVar5);

    auVar9 = FUN_002937a0(uVar2);

    FUN_002a00a0(uVar6,auVar9._8_8_,auVar9._0_8_,&cf_members);

    _objc_release(auVar9._0_8_);

    auVar9 = FUN_002937a0(uVar6);

    FUN_002a0040(DAT_003eaa10,auVar9._8_8_,auVar9._0_8_,lVar1);

    _objc_release(auVar9._0_8_);

    FUN_0020be94();

    FUN_0020bf0c();

    DAT_003eaab4 = DAT_003eaab4 + 1;

    _objc_release(uVar6);

    _objc_release(uVar3);

    _objc_release(uVar2);

  }

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




