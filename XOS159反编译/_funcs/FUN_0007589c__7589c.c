// FUN_0007589c @0x7589c


void FUN_0007589c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  float fVar4;

  double dVar5;

  double dVar6;

  undefined1 auVar7 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  FUN_002a5020(uVar2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  fVar4 = (float)FUN_00295480();

  _objc_release(uVar1);

  dVar5 = 0.1;

  if (0.1 <= (double)fVar4) {

    dVar5 = (double)fVar4;

  }

  dVar6 = 3.0;

  if (dVar5 <= 3.0) {

    dVar6 = dVar5;

  }

  FUN_002a18a0(dVar6,*(undefined8 *)(param_1 + 0x28));

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar7._0_8_;

  FUN_0029e500((float)dVar6,uVar1,auVar7._8_8_,&cf_ttsSpeechRate);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  _objc_release(uVar1);

  _objc_release(uVar2);

  return;

}




