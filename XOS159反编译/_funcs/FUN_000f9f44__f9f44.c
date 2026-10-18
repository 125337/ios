// FUN_000f9f44 @0xf9f44


void FUN_000f9f44(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  float fVar4;

  float fVar5;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  FUN_002a5020(uVar2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  fVar4 = (float)FUN_00295480();

  _objc_release(uVar1);

  fVar5 = -100.0;

  if (-100.0 < fVar4) {

    fVar5 = fVar4;

  }

  fVar4 = 100.0;

  if (fVar5 <= 100.0) {

    fVar4 = fVar5;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar6._0_8_;

  FUN_0029e500(fVar4,uVar1,auVar6._8_8_,&cf_SHTM_BORDER_IMAGE_Y_OFFSET);

  FUN_002a4a40(uVar1);

  uVar3 = *(undefined8 *)(param_1 + 0x28);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf___0f);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f80(uVar3,auVar6._8_8_,auVar6._0_8_,0);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar1);

  _objc_release(uVar2);

  return;

}




