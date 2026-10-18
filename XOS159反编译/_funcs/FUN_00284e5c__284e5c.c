// FUN_00284e5c @0x284e5c


void FUN_00284e5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  double dVar3;

  undefined1 auVar4 [16];

  undefined8 local_60;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_4);

  _objc_retain(param_3);

  _objc_retain(param_2);

  FUN_0029cfe0(param_1,param_3);

  FUN_0029e3c0(param_3,extraout_x1,*(undefined8 *)PTR__kCAFillModeBackwards_003885f8);

  FUN_00291840(&_OBJC_CLASS___CAAnimationGroup);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar4._0_8_;

  local_60 = param_3;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar4._8_8_,&local_60,1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cc80(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  dVar3 = (double)FUN_00294940(param_3);

  _objc_release(param_3);

  FUN_0029de80(param_1 + dVar3,uVar1);

  FUN_002a44a0(&cf_xzy_liquid_motion_,extraout_x1_00,param_4);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(param_4);

  FUN_00291020(param_2,extraout_x1_01,uVar1,uVar2);

  _objc_release(param_2);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




