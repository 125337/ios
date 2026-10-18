// onReset @0x1fbeb8


/* Function Stack Size: 0x10 bytes */



void XZYCLGGroupOrderViewController::onReset(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  undefined *local_60;

  undefined8 local_58;

  code *local_50;

  undefined *puStack_48;

  undefined1 auStack_40 [8];

  undefined1 auStack_38 [8];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_b_Yz_,

               &cf__nd_O_INvR_z_b_Yc_0dkd_ONOq_TR_bXTb,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_Sm,1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  _objc_initWeak(auStack_38,param_1);

  local_60 = PTR___NSConcreteStackBlock_003886f0;

  local_58 = 0xc2000000;

  local_50 = FUN_001fc04c;

  puStack_48 = &DAT_00389250;

  _objc_copyWeak(auStack_40,auStack_38);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_b_Y,2,&local_60);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_0029a500(param_1,extraout_x1_00,uVar1,1,0);

  _objc_destroyWeak(auStack_40);

  _objc_destroyWeak(auStack_38);

  _objc_release(uVar1);

  return;

}




