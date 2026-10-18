// FUN_0014eb18 @0x14eb18


void FUN_0014eb18(long param_1)



{

  float fVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  float fVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  fVar5 = (float)FUN_00295480();

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  fVar1 = 0.0;

  if (0.0 <= fVar5) {

    fVar1 = fVar5;

  }

  FUN_00136588();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e500(fVar1,auVar6._0_8_,auVar6._8_8_,&cf_CadisBorderWidth);

  _objc_release(auVar6._0_8_);

  FUN_00136604();

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,auVar6._8_8_,2);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_,5);

  _objc_release(auVar7._0_8_);

  _objc_release(auVar6._0_8_);

  return;

}




