// FUN_0007a768 @0x7a768


void FUN_0007a768(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar2 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  undefined8 local_38;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_nxnd,&cf_nx_nd_bgrv_INMR,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar2._8_8_,&cf_Sm,1,0);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  local_58 = PTR___NSConcreteStackBlock_003886f0;

  local_50 = 0xc2000000;

  local_48 = FUN_0007a8b4;

  puStack_40 = &DAT_00388cf0;

  local_38 = *(undefined8 *)(param_1 + 0x20);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_nd,2,&local_58);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,uVar1,1,0);

  _objc_release(uVar1);

  return;

}




