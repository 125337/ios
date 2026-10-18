// FUN_001493ac @0x1493ac


void FUN_001493ac(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_00295480();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_00136588();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e500(uVar4,auVar5._0_8_,auVar5._8_8_,&cf_CadisCalendarBgHeight);

  _objc_release(auVar5._0_8_);

  FUN_00136604();

  FUN_001728f8();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar5._8_8_,4);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar5._0_8_,auVar6._8_8_,auVar6._0_8_,5);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  return;

}




