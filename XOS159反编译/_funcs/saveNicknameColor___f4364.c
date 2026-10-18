// saveNicknameColor: @0xf4364


/* Function Stack Size: 0x18 bytes */



void BannerNotifyBeautifyViewController::saveNicknameColor_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar4 [16];

  long local_48;

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar4._0_8_;

  local_48 = 0;

  FUN_00291ce0(&_OBJC_CLASS___NSKeyedArchiver,auVar4._8_8_,param_3,0,&local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(param_3);

  if (lVar2 != 0 && local_48 == 0) {

    FUN_002a0060(uVar1,extraout_x1,lVar2,&cf_SHTM_NICKNAME_COLOR_DATA);

    FUN_002a4a40(uVar1);

  }

  FUN_002a4dc0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,&cf_r_OX_,&cf_mo_5fyr_fe,1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar4._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar4._8_8_,&cf_nx_,0,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar4._8_8_,auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_01,uVar3,1,0);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar3);

  _objc_release(lVar2);

  _objc_release(uVar1);

  return;

}




