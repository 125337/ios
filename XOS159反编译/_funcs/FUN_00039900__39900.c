// FUN_00039900 @0x39900


void FUN_00039900(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_c_y,&cf_n_,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_Sm,1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_zsS_T,2,

               &PTR___NSConcreteGlobalBlock_003894f0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  return;

}




