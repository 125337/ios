// FUN_0014074c @0x14074c


void FUN_0014074c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  float fVar4;

  float fVar5;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  fVar4 = (float)FUN_00295480(uVar3);

  fVar5 = -500.0;

  if (-500.0 < fVar4) {

    fVar5 = fVar4;

  }

  FUN_00136588();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  fVar4 = 500.0;

  if (fVar5 <= 500.0) {

    fVar4 = fVar5;

  }

  FUN_0029e500(fVar4,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(param_1 + 0x28));

  _objc_release(auVar6._0_8_);

  FUN_00136604();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  _objc_release(uVar3);

  return;

}




