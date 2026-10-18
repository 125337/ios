// FUN_00027960 @0x27960


void FUN_00027960(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 extraout_x1;

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  auVar2 = FUN_00297fa0(param_2);

  if (auVar2._0_8_ == 0) {

    FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),auVar2._8_8_,&cf_xzyCoverParallaxLightingColorLight

                );

  }

  else {

    FUN_002a0060(*(undefined8 *)(param_1 + 0x20),auVar2._8_8_,param_2,

                 &cf_xzyCoverParallaxLightingColorLight);

  }

  auVar2 = FUN_00297fa0(param_3);

  if (auVar2._0_8_ == 0) {

    FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),auVar2._8_8_,&cf_xzyCoverParallaxLightingColorDark)

    ;

  }

  else {

    FUN_002a0060(*(undefined8 *)(param_1 + 0x20),auVar2._8_8_,param_3,

                 &cf_xzyCoverParallaxLightingColorDark);

  }

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_0000e850();

  uVar1 = *(undefined8 *)(param_1 + 0x28);

  FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1,3);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b1c0(uVar1,auVar2._8_8_,auVar2._0_8_,5);

  _objc_release(auVar2._0_8_);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




