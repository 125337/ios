// FUN_000a6c64 @0xa6c64


void FUN_000a6c64(long param_1,undefined8 param_2,undefined8 param_3)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined8 local_130;

  undefined8 uStack_128;

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

  _objc_retain(param_3);

  lVar6 = param_1;

  if ((param_1 == 0) || (lVar1 = FUN_00297fa0(param_1), lVar1 == 0)) {

    _objc_retain(param_1);

  }

  else {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    auVar7 = FUN_00297fa0(param_2);

    if (auVar7._0_8_ != 0) {

      FUN_00291240(uVar2,auVar7._8_8_,param_2);

    }

    auVar7 = FUN_00297fa0(param_3);

    if ((auVar7._0_8_ != 0) &&

       (auVar7 = FUN_00297820(param_3,auVar7._8_8_,param_2), (auVar7._0_8_ & 1) == 0)) {

      FUN_00291240(uVar2,auVar7._8_8_,param_3);

    }

    lVar1 = FUN_00293860(uVar2);

    if (lVar1 == 0) {

      _objc_retain(param_1);

    }

    else {

      uVar3 = FUN_002937a0(param_1);

      uStack_108 = 0;

      local_110 = 0;

      uStack_f8 = 0;

      uStack_100 = 0;

      uStack_128 = 0;

      local_130 = 0;

      uStack_118 = 0;

      local_120 = (long *)0x0;

      _objc_retain(uVar2);

      auVar7 = FUN_00293880(uVar2,extraout_x1,&local_130,auStack_f0,0x10);

      if (auVar7._0_8_ != 0) {

        lVar6 = *local_120;

        do {

          uVar4 = auVar7._8_8_;

          lVar1 = 0;

          do {

            if (*local_120 != lVar6) {

              _objc_enumerationMutation(uVar2);

              uVar4 = extraout_x1_00;

            }

            FUN_002a4680(&_OBJC_CLASS___NSString,uVar4,&cf____);

            auVar8 = _objc_retainAutoreleasedReturnValue();

            FUN_002a4680(&_OBJC_CLASS___NSString,auVar8._8_8_,&cf___);

            auVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_002a4680(&_OBJC_CLASS___NSString,auVar9._8_8_,&cf__);

            auVar10 = _objc_retainAutoreleasedReturnValue();

            FUN_002a4560(uVar3,auVar10._8_8_,auVar9._0_8_,&cf___);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar3);

            FUN_002a4560(uVar4,extraout_x1_01,auVar10._0_8_,&cf___);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar4);

            FUN_002a4560(uVar5,extraout_x1_02,auVar8._0_8_,&cf___);

            uVar3 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar5);

            _objc_release(auVar10._0_8_);

            _objc_release(auVar9._0_8_);

            _objc_release(auVar8._0_8_);

            lVar1 = lVar1 + 1;

            uVar4 = extraout_x1_03;

          } while (auVar7._0_8_ != lVar1);

          auVar7 = FUN_00293880(uVar2,extraout_x1_03,&local_130,auStack_f0,0x10);

        } while (auVar7._0_8_ != 0);

      }

      _objc_release(uVar2);

      FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45c0(uVar3,auVar7._8_8_,auVar7._0_8_);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar7._0_8_);

      _objc_release(uVar3);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    _objc_autoreleaseReturnValue(lVar6);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




