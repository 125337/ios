// FUN_000f7d98 @0xf7d98


void FUN_000f7d98(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  float fVar4;

  double dVar5;

  undefined1 auVar6 [16];

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

  dVar5 = 0.0;

  if (0.0 <= fVar4) {

    if (fVar4 <= 1.0) {

      dVar5 = (double)fVar4;

    }

    else {

      dVar5 = 1.0;

    }

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar6._0_8_;

  FUN_0029e500((float)dVar5,uVar1,auVar6._8_8_,&cf_SHTM_BANNER_HEIGHT);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  if (dVar5 == 0.0) {

    auVar6._8_8_ = extraout_x1;

    auVar6._0_8_ = &cf__b_YSY__;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_X_kO_n__N);

    auVar6 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar6._8_8_,&cf_n__OX_,auVar6._0_8_,1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar7._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar7._8_8_,&cf_nx_,0,0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar7._8_8_,auVar7._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_00,uVar3,1,0);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar3);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar1);

  _objc_release(uVar2);

  return;

}




