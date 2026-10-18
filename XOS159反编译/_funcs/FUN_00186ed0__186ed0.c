// FUN_00186ed0 @0x186ed0


void FUN_00186ed0(long param_1)



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

  fVar4 = (float)FUN_00295480();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  fVar5 = 0.0;

  if (0.0 < fVar4) {

    fVar5 = fVar4;

  }

  fVar4 = 50.0;

  if (fVar5 <= 50.0) {

    fVar4 = fVar5;

  }

  FUN_0029e500(fVar4,*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_grayTestBorderCornerRadius);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  uVar1 = *(undefined8 *)(param_1 + 0x30);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_W__N);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a3940(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  return;

}




