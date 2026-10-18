// FUN_00028e2c @0x28e2c


void FUN_00028e2c(long param_1,undefined8 param_2)



{

  int iVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar2;

  float fVar3;

  undefined1 auVar4 [16];

  

  _objc_retain(param_2);

  FUN_002a06e0(param_2,extraout_x1,*(undefined8 *)(param_1 + 0x20));

  FUN_0029f1e0(param_2,extraout_x1_00,8);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  fVar3 = (float)FUN_00295460(auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(param_1 + 0x28));

  _objc_release(auVar4._0_8_);

  uVar2 = extraout_x1_01;

  if ((fVar3 != 0.0) ||

     (iVar1 = FUN_00297820(*(undefined8 *)(param_1 + 0x28),extraout_x1_01,&cf_xzyNameplateHeight),

     uVar2 = extraout_x1_02, iVar1 != 0)) {

    if (fVar3 <= 0.0) {

      auVar4 = FUN_00297820(*(undefined8 *)(param_1 + 0x28),uVar2,&cf_xzyNameplateHeight);

      uVar2 = auVar4._8_8_;

    }

    FUN_002a4680(&_OBJC_CLASS___NSString,uVar2,&cf___0f);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(param_2,auVar4._8_8_,auVar4._0_8_);

    _objc_release(auVar4._0_8_);

  }

  _objc_release(param_2);

  return;

}




