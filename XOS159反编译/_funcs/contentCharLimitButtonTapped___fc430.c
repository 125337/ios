// contentCharLimitButtonTapped: @0xfc430


/* Function Stack Size: 0x18 bytes */



void BannerNotifyBeautifyViewController::contentCharLimitButtonTapped_

               (ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar2 [16];

  undefined1 auVar3 [16];

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  ID local_50;

  ID local_48;

  

  _objc_retain(param_3);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_mo_Q_W___P6R,

               &cf_eQW___peP6RdkpevQ___uweuSNf,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00291400(uVar1,auVar2._8_8_,&PTR___NSConcreteGlobalBlock_0038c400);

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_000fc658;

  puStack_60 = &DAT_0038c1e0;

  local_58 = uVar1;

  local_50 = param_3;

  local_48 = param_1;

  _objc_retain(param_3);

  _objc_retain(uVar1);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_nx_,0,&local_78);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar1,1,0);

  _objc_release(auVar2._0_8_);

  _objc_release(local_50);

  _objc_release(local_58);

  _objc_release(param_3);

  _objc_release(uVar1);

  return;

}




