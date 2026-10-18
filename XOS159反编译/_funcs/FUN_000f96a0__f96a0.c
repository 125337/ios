// FUN_000f96a0 @0xf96a0


void FUN_000f96a0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  if (*(char *)(param_1 + 0x38) == '\x01') {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar4._0_8_;

    FUN_002a0060(uVar3,auVar4._8_8_,*(undefined8 *)(param_1 + 0x20),&cf_SHTM_SELECTED_VIDEO_NAME);

    FUN_002a0060(uVar3,extraout_x1,&cf_photo_library,&cf_SHTM_VIDEO_SOURCE);

    FUN_002a4a40(uVar3);

    FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar1);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf__OX__N_);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar4._8_8_,&cf__OX_,auVar4._0_8_,1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar4._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,0);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

    FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_02,uVar2,1,0);

    _objc_release(auVar4._0_8_);

  }

  else {

    uVar1 = *(undefined8 *)(param_1 + 0x28);

    FUN_00298400(*(undefined8 *)(param_1 + 0x30));

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar4._0_8_;

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar4._8_8_,&cf_OX_1Y__);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar4._0_8_;

    FUN_002a3c20(uVar1,auVar4._8_8_,uVar2);

  }

  _objc_release(uVar2);

  _objc_release(uVar3);

  return;

}




