// FUN_002385bc @0x2385bc


void FUN_002385bc(undefined8 param_1)



{

  undefined *puVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  double dVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e7270);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (((lVar3 == 0) || (iVar2 = FUN_002978a0(param_1), iVar2 == 0)) ||

     (dVar6 = (double)FUN_002916a0(param_1), 0.01 < dVar6)) {

    _objc_release(lVar3);

  }

  else {

    uVar5 = FUN_00297b60(param_1);

    _objc_release(lVar3);

    if ((uVar5 & 1) == 0) goto LAB_00238738;

  }

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e7270);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  puVar1 = PTR_LOOP_003e7270;

  uVar4 = extraout_x1;

  if (lVar3 == 0) {

    auVar7 = FUN_002978a0(param_1);

    FUN_00299380(&_OBJC_CLASS___NSNumber,auVar7._8_8_,auVar7._0_8_);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar1,uVar4,1);

    _objc_release(uVar4);

    puVar1 = PTR_LOOP_003e7278;

    FUN_002916a0(param_1);

    FUN_002993a0(&_OBJC_CLASS___NSNumber);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar1,uVar4,1);

    _objc_release(uVar4);

    puVar1 = PTR_LOOP_003e7280;

    auVar7 = FUN_00297b60(param_1);

    FUN_00299380(&_OBJC_CLASS___NSNumber,auVar7._8_8_,auVar7._0_8_);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_setAssociatedObject(param_1,puVar1,uVar4,1);

    _objc_release(uVar4);

    uVar4 = extraout_x1_00;

  }

  FUN_0029e8a0(param_1,uVar4,1);

  FUN_0029cb60(0,param_1);

  FUN_002a23c0(param_1,extraout_x1_01,0);

LAB_00238738:

  _objc_release(param_1);

  return;

}




