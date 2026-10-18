// FUN_00057330 @0x57330


void FUN_00057330(long param_1,undefined8 param_2)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar3 [16];

  

  FUN_0029d080(*(undefined8 *)(param_1 + 0x20),param_2,1,&cf_coversEnabled);

  DAT_003e7a2c = 0;

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  DAT_003e74b9 = 1;

  FUN_00007f9c();

  FUN_00298800(*(undefined8 *)(param_1 + 0x28));

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_00298800(*(undefined8 *)(param_1 + 0x28));

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a0120(auVar3._0_8_,auVar3._8_8_,1);

    _objc_release(auVar3._0_8_);

  }

  FUN_0029af80(*(undefined8 *)(param_1 + 0x28));

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf___,&cf__hKm0RsQlr_X,1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar3._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar3._8_8_,&cf_nx_,0,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_00,uVar2,1,0);

  _objc_release(uVar2);

  return;

}




