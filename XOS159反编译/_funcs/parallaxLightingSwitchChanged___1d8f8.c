// parallaxLightingSwitchChanged: @0x1d8f8


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::parallaxLightingSwitchChanged_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined8 local_68;

  undefined8 local_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar5._8_8_,auVar5._0_8_,&cf_xzyCoverParallaxLightingEnabled);

  FUN_002a4a40(uVar1);

  FUN_0000e850();

  FUN_002990e0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar6._0_8_,auVar6._8_8_,0x3e9);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  if (lVar4 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    auVar6 = _objc_opt_isKindOfClass(lVar4,uVar2);

    if ((auVar6._0_8_ & 1) != 0) {

      FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar6._8_8_,1,3);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      local_68 = auVar6._0_8_;

      FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar6._8_8_,2,3);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      local_60 = auVar7._0_8_;

      FUN_00291e00(&_OBJC_CLASS___NSArray,auVar7._8_8_,&local_68,2);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar7._0_8_);

      _objc_release(auVar6._0_8_);

      FUN_00292280(lVar4);

      if (auVar5._0_4_ == 0) {

        FUN_002943a0(lVar4,extraout_x1,uVar2,0);

      }

      else {

        FUN_00297020(lVar4,extraout_x1,uVar2,0);

      }

      FUN_00294c60(lVar4);

      _objc_release(uVar2);

    }

  }

  _objc_release(lVar4);

  _objc_release(uVar1);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




