// FUN_001401e0 @0x1401e0


void FUN_001401e0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  float fVar4;

  float fVar5;

  double dVar6;

  undefined1 auVar7 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  fVar4 = (float)FUN_00295480(uVar3);

  fVar5 = 30.0;

  if (30.0 < fVar4) {

    fVar5 = fVar4;

  }

  dVar6 = 300.0;

  if ((double)fVar5 <= 300.0) {

    dVar6 = (double)fVar5;

  }

  FUN_00136588();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e500((float)(dVar6 / 100.0),auVar7._0_8_,auVar7._8_8_,&cf_CadisCardImageScale);

  _objc_release(auVar7._0_8_);

  FUN_00136604();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  _objc_release(uVar3);

  return;

}




