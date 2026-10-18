// FUN_0014959c @0x14959c


void FUN_0014959c(long param_1)



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

  dVar6 = (double)fVar4;

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (fVar4 <= 0.0) {

    dVar6 = 100.0;

  }

  dVar5 = 50.0;

  if (50.0 <= dVar6) {

    dVar5 = dVar6;

  }

  dVar6 = 150.0;

  if (dVar5 <= 150.0) {

    dVar6 = dVar5;

  }

  FUN_00136588();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e500((float)dVar6,auVar7._0_8_,auVar7._8_8_,&cf_CadisCalendarContentScale);

  _objc_release(auVar7._0_8_);

  FUN_00136604();

  FUN_001728f8();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar7._8_8_,4);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_,5);

  _objc_release(auVar8._0_8_);

  _objc_release(auVar7._0_8_);

  return;

}




