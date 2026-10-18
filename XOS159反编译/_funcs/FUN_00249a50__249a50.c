// FUN_00249a50 @0x249a50


void FUN_00249a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 long param_5,undefined8 param_6)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar3 [16];

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined8 uStack_b0;

  undefined8 uStack_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 local_90;

  undefined8 uStack_88;

  undefined8 uStack_80;

  undefined8 uStack_78;

  undefined8 local_70;

  undefined8 uStack_68;

  

  _objc_retain();

  _objc_retain(param_6);

  if (param_5 != 0) {

    FUN_002a56a0(&local_90,param_6);

    uStack_b8 = uStack_88;

    local_c0 = local_90;

    uStack_a8 = uStack_78;

    uStack_b0 = uStack_80;

    uStack_98 = uStack_68;

    local_a0 = local_70;

    auVar3 = _CGAffineTransformIsIdentity(&local_c0);

    if ((auVar3._0_8_ & 1) == 0) {

      uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

      local_c0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

      uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

      uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

      local_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

      FUN_002a21c0(param_6,auVar3._8_8_,&local_c0);

    }

    FUN_002a4880(param_6);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    lVar1 = param_5;

    if (lVar2 != 0) {

      lVar1 = lVar2;

    }

    _objc_retain(lVar1);

    _objc_release(lVar2);

    if (lVar1 != param_5) {

      param_1 = FUN_002936e0(param_1,param_2,param_5,extraout_x1,lVar1);

    }

    FUN_00292180(&_OBJC_CLASS___CATransaction);

    FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_00,1);

    FUN_0029e5e0(param_1,param_2,param_3,param_4,param_6);

    if ((auVar3._0_8_ & 1) == 0) {

      uStack_b8 = uStack_88;

      local_c0 = local_90;

      uStack_a8 = uStack_78;

      uStack_b0 = uStack_80;

      uStack_98 = uStack_68;

      local_a0 = local_70;

      FUN_002a21c0(param_6,extraout_x1_01,&local_c0);

    }

    FUN_002930a0(&_OBJC_CLASS___CATransaction);

    _objc_release(lVar1);

  }

  _objc_release(param_6);

  _objc_release(param_5);

  return;

}




