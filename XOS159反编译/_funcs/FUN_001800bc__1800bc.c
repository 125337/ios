// FUN_001800bc @0x1800bc


void FUN_001800bc(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined1 auVar3 [16];

  

  FUN_00136588();

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029efa0(auVar3._0_8_,auVar3._8_8_,*(long *)(param_1 + 0x30) + 10,&cf_CadisCalendarStyle);

  _objc_release(auVar3._0_8_);

  FUN_00136588();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_00136604();

  FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar2 != 0) {

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar2 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))();

    _objc_release(lVar2);

  }

  FUN_0029b140(*(undefined8 *)(param_1 + 0x28));

  return;

}




