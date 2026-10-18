// FUN_00155138 @0x155138


void FUN_00155138(undefined8 param_1)



{

  uint uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  uVar1 = FUN_00138088();

  FUN_00136588();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d080(auVar4._0_8_,auVar4._8_8_,uVar1 ^ 1,&cf_CadisCalendarMondayFirst);

  _objc_release(auVar4._0_8_);

  FUN_00136588();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar2);

  FUN_00136604();

  FUN_00292740(param_1);

  FUN_00298700(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    FUN_0029b140(lVar3);

  }

  _objc_release(lVar3);

  return;

}




