// FUN_002851c0 @0x2851c0


void FUN_002851c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 long param_5)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  undefined8 local_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  if (param_5 == 0) {

    FUN_0028c91c(param_2,3);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar3._0_8_;

    FUN_0029e600(uVar2,auVar3._8_8_,param_3);

    FUN_002a20a0(uVar2,extraout_x1_01,param_4);

  }

  else {

    FUN_002918e0(&_OBJC_CLASS___CABasicAnimation,extraout_x1,param_2);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar3._0_8_;

    FUN_0029e600(uVar2,auVar3._8_8_,param_3);

    FUN_002a20a0(uVar2,extraout_x1_00,param_4);

    if (param_5 == 1) {

      FUN_0029de80(0x3fd5c28f5c28f5c3,uVar2);

      FUN_00295660(0x3e8f5c29,0,0x3ea3d70a,0x3f800000,&_OBJC_CLASS___CAMediaTimingFunction);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1f00(uVar2,auVar3._8_8_,auVar3._0_8_);

      _objc_release(auVar3._0_8_);

    }

    else if (param_5 == 2) {

      FUN_0029de80(0x3fe5c28f5c28f5c3,uVar2);

      FUN_00295660(0x3e8f5c29,0x3fd55555,0x3ee147ae,0x3f2aaaab,&_OBJC_CLASS___CAMediaTimingFunction)

      ;

      auVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1f00(uVar2,auVar3._8_8_,auVar3._0_8_);

      _objc_release(auVar3._0_8_);

      FUN_00291840(&_OBJC_CLASS___CAAnimationGroup);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      uVar1 = auVar3._0_8_;

      local_70 = uVar2;

      FUN_00291e00(&_OBJC_CLASS___NSArray,auVar3._8_8_,&local_70,1);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cc80(uVar1,auVar3._8_8_,auVar3._0_8_);

      _objc_release(auVar3._0_8_);

      FUN_00294940(uVar2);

      FUN_0029de80(uVar1);

      FUN_00295660(0x3ee147ae,0,0x3f3d70a4,0x3f800000,&_OBJC_CLASS___CAMediaTimingFunction);

      auVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1f00(uVar1,auVar3._8_8_,auVar3._0_8_);

      _objc_release(auVar3._0_8_);

      FUN_00284e5c(0x3f9999999999999a,param_1,uVar1,param_2);

      _objc_release(uVar1);

      goto LAB_0028541c;

    }

  }

  FUN_00284e5c(0,param_1,uVar2,param_2);

LAB_0028541c:

  _objc_release(uVar2);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




