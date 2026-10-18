// FUN_001556dc @0x1556dc


void FUN_001556dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined *puVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  

  _objc_retain(param_3);

  FUN_002a6220(param_3);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar5._0_8_;

  FUN_002a62a0(uVar2,auVar5._8_8_,0x1863e);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  lVar3 = auVar5._0_8_;

  FUN_00298440(param_3,auVar5._8_8_,uVar2);

  if (lVar3 != 0) {

    FUN_00295600(lVar3);

    uVar4 = _CGRectContainsPoint();

    if ((uVar4 & 1) != 0) goto LAB_001557f0;

  }

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_0016602c;

  puStack_60 = &DAT_00388e60;

  _objc_retain(uVar2);

  local_a0 = puVar1;

  local_98 = 0xc2000000;

  local_90 = FUN_00166038;

  puStack_88 = &DAT_00389830;

  local_58 = uVar2;

  _objc_retain(uVar2);

  local_80 = uVar2;

  FUN_002917c0(0x3fc999999999999a,&_OBJC_CLASS___UIView,extraout_x1,&local_78,&local_a0);

  _objc_release(local_80);

  _objc_release(local_58);

LAB_001557f0:

  _objc_release(lVar3);

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




