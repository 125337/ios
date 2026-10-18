// toggleAvatarCorner: @0x387e8


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::toggleAvatarCorner_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar5._8_8_,auVar5._0_8_,&cf_coverAvatarCornerEnabled);

  FUN_002a4a40(uVar1);

  FUN_002990e0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar5._0_8_,auVar5._8_8_,0x3e9);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  uVar2 = extraout_x1;

  if (lVar4 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    auVar5 = _objc_opt_isKindOfClass(lVar4,uVar2);

    uVar2 = auVar5._8_8_;

    if ((auVar5._0_8_ & 1) != 0) {

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,uVar2,1);

      auVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(lVar4,auVar5._8_8_,auVar5._0_8_,100);

      _objc_release(auVar5._0_8_);

      uVar2 = extraout_x1_00;

    }

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,uVar2,&cf_c_y,&cf_Wn_,1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar5._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar5._8_8_,&cf_Sm,1,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_00389470);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar2,1,0);

  _objc_release(uVar2);

  _objc_release(lVar4);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




