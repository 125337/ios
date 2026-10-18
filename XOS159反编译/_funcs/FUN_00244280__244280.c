// FUN_00244280 @0x244280


void FUN_00244280(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  double dVar4;

  double dVar5;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined8 local_a0;

  undefined8 local_98;

  ulong local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 uStack_78;

  double local_70;

  undefined8 local_68;

  

  _objc_retain();

  FUN_002925a0(param_1);

  dVar4 = (double)_CGRectGetWidth();

  FUN_00244714(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002365b0();

  if (iVar1 == 0) {

    lVar3 = FUN_00297fa0(DAT_003eb168);

    uVar6 = 0x3fc70a3d70a3d70a;

    if (lVar3 != 0) {

      FUN_0023cdac(DAT_003eb168);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      goto LAB_00244348;

    }

  }

  else {

    lVar3 = FUN_00297fa0(DAT_003eb170);

    uVar6 = 0x3fed70a3d70a3d71;

    if (lVar3 != 0) {

      FUN_0023cdac(DAT_003eb170);

      auVar7 = _objc_retainAutoreleasedReturnValue();

LAB_00244348:

      if (auVar7._0_8_ != 0) goto LAB_00244374;

    }

  }

  FUN_00293060(uVar6,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

  auVar7 = _objc_retainAutoreleasedReturnValue();

LAB_00244374:

  FUN_0029cf60(uVar2,auVar7._8_8_,auVar7._0_8_);

  dVar5 = (double)param_2;

  if (dVar5 <= 1.0) {

    dVar5 = 1.0;

  }

  _objc_release(auVar7._0_8_);

  local_c0 = PTR___NSConcreteStackBlock_003886f0;

  local_b8 = 0xc2000000;

  local_b0 = FUN_00244830;

  puStack_a8 = &DAT_0038fac8;

  local_90 = param_2;

  _objc_retain(param_1);

  uStack_78 = 0x4046000000000000;

  local_80 = 0x404b000000000000;

  local_68 = 0x402e000000000000;

  local_a0 = param_1;

  local_88 = param_3;

  local_70 = dVar4 / dVar5;

  _objc_retain(uVar2);

  local_98 = uVar2;

  auVar7 = _objc_retainBlock(&local_c0);

  lVar3 = auVar7._0_8_;

  if (param_4 == 0) {

    (**(code **)(lVar3 + 0x10))(lVar3);

  }

  else {

    FUN_00291800(0x3fd5c28f5c28f5c3,0,0x3fe8f5c28f5c28f6,0x3fdccccccccccccd,&_OBJC_CLASS___UIView,

                 auVar7._8_8_,6,lVar3,0);

  }

  _objc_release(lVar3);

  _objc_release(local_98);

  _objc_release(local_a0);

  _objc_release(uVar2);

  _objc_release(param_1);

  return;

}




