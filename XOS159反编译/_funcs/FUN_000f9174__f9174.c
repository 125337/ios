// FUN_000f9174 @0xf9174


void FUN_000f9174(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar3 [16];

  

  if (*(char *)(param_1 + 0x30) == '\x01') {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar3._0_8_;

    FUN_002a0060(uVar1,auVar3._8_8_,*(undefined8 *)(param_1 + 0x20),&cf_SHTM_SELECTED_IMAGE_NAME);

    FUN_002a0060(uVar1,extraout_x1,&cf_photo_library,&cf_SHTM_IMAGE_SOURCE);

    FUN_002a4a40(uVar1);

    FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar2);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_VGr_OX__N_);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar3._8_8_,&cf_VGr_OX_,auVar3._0_8_,1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar3._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,0);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

    FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_02,uVar2,1,0);

    _objc_release(auVar3._0_8_);

    _objc_release(uVar2);

    _objc_release(uVar1);

    return;

  }

  FUN_002a3700(*(undefined8 *)(param_1 + 0x28),param_2,&cf_OX_VGr1Y_);

  return;

}




