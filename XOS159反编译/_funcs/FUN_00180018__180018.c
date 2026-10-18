// FUN_00180018 @0x180018


void FUN_00180018(long param_1)



{

  long lVar1;

  undefined1 auVar2 [16];

  

  FUN_00136588();

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar2._0_8_,auVar2._8_8_,0,&cf_CadisCalendarStyle);

  _objc_release(auVar2._0_8_);

  FUN_00136604();

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar1 + 0x10))();

    _objc_release(lVar1);

  }

  FUN_0029b140(*(undefined8 *)(param_1 + 0x28));

  return;

}




