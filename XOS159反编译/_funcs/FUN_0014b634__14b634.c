// FUN_0014b634 @0x14b634


void FUN_0014b634(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  float fVar4;

  double dVar5;

  double dVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  fVar4 = (float)FUN_00295480();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  dVar5 = 0.0;

  if (0.0 <= (double)fVar4 / 100.0) {

    dVar5 = (double)fVar4 / 100.0;

  }

  dVar6 = 1.0;

  if (dVar5 <= 1.0) {

    dVar6 = dVar5;

  }

  FUN_00136588();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e500((float)dVar6,auVar7._0_8_,auVar7._8_8_,&cf_CadisWeatherAlpha);

  _objc_release(auVar7._0_8_);

  FUN_00136604();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar7._8_8_,3);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_,5);

  _objc_release(auVar8._0_8_);

  _objc_release(auVar7._0_8_);

  return;

}




