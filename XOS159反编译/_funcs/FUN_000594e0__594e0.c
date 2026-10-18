// FUN_000594e0 @0x594e0


void FUN_000594e0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

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

  fVar5 = -20.0;

  if (-20.0 < fVar4) {

    fVar5 = fVar4;

  }

  fVar4 = 20.0;

  if (fVar5 <= 20.0) {

    fVar4 = fVar5;

  }

  FUN_0029e500(fVar4,*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_xzy_fontSizeOffset);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  uVar1 = *(undefined8 *)(param_1 + 0x30);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1_00,1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar1,auVar6._8_8_,auVar6._0_8_,5);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar3);

  return;

}




