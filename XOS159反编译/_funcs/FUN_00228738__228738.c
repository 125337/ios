// FUN_00228738 @0x228738


void FUN_00228738(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  double dVar4;

  double dVar5;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  dVar4 = (double)FUN_00294860();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  dVar5 = 40.0;

  if (dVar4 <= 40.0) {

    dVar5 = dVar4;

  }

  if (dVar5 <= 0.0) {

    dVar5 = 0.0;

  }

  FUN_0029de20(dVar5,auVar6._0_8_,auVar6._8_8_,&cf_xzyMesReferRoundedRadius);

  _objc_release(auVar6._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_00223b38();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  return;

}




