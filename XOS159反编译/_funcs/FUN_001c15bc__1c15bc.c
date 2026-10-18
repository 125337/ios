// FUN_001c15bc @0x1c15bc


undefined8

FUN_001c15bc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  long local_58;

  

  _objc_retain(param_4);

  _objc_retain(param_5);

  if (param_5 == 0) {

    lVar2 = 0;

  }

  else {

    local_78 = PTR___NSConcreteStackBlock_003886f0;

    local_70 = 0xc2000000;

    local_68 = FUN_001c25c4;

    puStack_60 = &DAT_0038eaf0;

    _objc_retain(param_5);

    local_58 = param_5;

    lVar2 = _objc_retainBlock(&local_78);

    _objc_release(local_58);

  }

  lVar1 = param_5;

  if (lVar2 != 0) {

    lVar1 = lVar2;

  }

  uVar3 = (*DAT_003e9810)(param_1,param_2,param_3,param_4,lVar1);

  if ((((param_1 != (long *)0x0) && ((int)uVar3 == 0)) && (param_2 != 0)) && (*param_1 != 0)) {

    FUN_001c1c50();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_sync_enter();

    FUN_00293fc0(&_OBJC_CLASS___NSData,extraout_x1,param_2,0x28);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_001c1c50();

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6180(&_OBJC_CLASS___NSValue,auVar6._8_8_,*param_1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(auVar6._0_8_,auVar7._8_8_,uVar5,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar5);

    _objc_sync_exit(uVar4);

    _objc_release(uVar4);

  }

  _objc_release(lVar2);

  _objc_release(param_5);

  _objc_release(param_4);

  return uVar3;

}




