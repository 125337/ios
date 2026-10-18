// borderImageXOffsetButtonTapped: @0xfa484


/* Function Stack Size: 0x18 bytes */



void BannerNotifyBeautifyViewController::borderImageXOffsetButtonTapped_

               (ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar2 [16];

  undefined1 auVar3 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined8 local_50;

  ID local_48;

  

  _objc_retain(param_3);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_FhVGrX,&cf_ck<PTS<PT],1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar2._0_8_;

  FUN_00291400(uVar1,auVar2._8_8_,&PTR___NSConcreteGlobalBlock_0038c360);

  local_70 = PTR___NSConcreteStackBlock_003886f0;

  local_68 = 0xc2000000;

  local_60 = FUN_000fa698;

  puStack_58 = &DAT_0038c1b0;

  local_50 = uVar1;

  local_48 = param_3;

  _objc_retain(param_3);

  _objc_retain(uVar1);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_nx_,0,&local_70);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar2._8_8_,auVar2._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar1,1,0);

  _objc_release(auVar2._0_8_);

  _objc_release(local_48);

  _objc_release(local_50);

  _objc_release(param_3);

  _objc_release(uVar1);

  return;

}




