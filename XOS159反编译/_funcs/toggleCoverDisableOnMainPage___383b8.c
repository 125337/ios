// toggleCoverDisableOnMainPage: @0x383b8


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::toggleCoverDisableOnMainPage_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar3 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar3 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar3._8_8_,auVar3._0_8_,&cf_coverDisableOnMainPage);

  FUN_002a4a40(uVar1);

  DAT_003e74d9 = auVar3[0];

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_c_y,&cf__Nuni_n__OX__T_OT_hQuHe,1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar3._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar3._8_8_,&cf_zT_T,1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_003893f0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_01,uVar2,1,0);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




