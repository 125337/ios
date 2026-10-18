// FUN_000bf394 @0xbf394


void FUN_000bf394(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d080(auVar6._0_8_,auVar6._8_8_,0,&cf_coversEnabled);

  DAT_003e7a2c = 0;

  DAT_003e74b9 = 0;

  FUN_0000b684();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_R_y_u,&cf__v_S_ybk_O_udkR,1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar7._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar7._8_8_,&cf_nx_,0,0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00297c00();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bac0();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  while( true ) {

    uVar3 = uVar4;

    _objc_release(uVar2);

    FUN_0029a560(uVar3);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar5 == 0) break;

    FUN_0029a560(uVar3);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar2 = uVar3;

  }

  FUN_0029a500(uVar3,extraout_x1_00,uVar1,1,0);

  _objc_release(uVar3);

  _objc_release(uVar1);

  _objc_release(auVar6._0_8_);

  return;

}




