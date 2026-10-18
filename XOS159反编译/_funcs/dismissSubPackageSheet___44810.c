// dismissSubPackageSheet: @0x44810


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::dismissSubPackageSheet_(ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  undefined8 local_68;

  undefined8 local_60;

  

  _objc_retain(param_3);

  _objc_getAssociatedObject(param_3,"cardView");

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(param_3);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00298440(param_3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_00295600(uVar2);

  uVar3 = _CGRectContainsPoint();

  if ((uVar3 & 1) == 0) {

    FUN_002a6220(param_3);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    local_88 = PTR___NSConcreteStackBlock_003886f0;

    local_80 = 0xc2000000;

    local_78 = FUN_000449ec;

    puStack_70 = &DAT_00389800;

    _objc_retain(uVar4);

    local_68 = uVar4;

    _objc_retain(uVar2);

    local_b0 = puVar1;

    local_a8 = 0xc2000000;

    local_a0 = FUN_00044aac;

    puStack_98 = &DAT_00389830;

    local_60 = uVar2;

    _objc_retain(uVar4);

    local_90 = uVar4;

    FUN_002917c0(0x3fd0000000000000,&_OBJC_CLASS___UIView,extraout_x1,&local_88,&local_b0);

    _objc_release(local_90);

    _objc_release(local_60);

    _objc_release(local_68);

    _objc_release(uVar4);

  }

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




