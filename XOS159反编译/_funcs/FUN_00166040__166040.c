// FUN_00166040 @0x166040


void FUN_00166040(long param_1,undefined8 param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined8 local_88;

  undefined8 uStack_80;

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf__YlW_,&cf_eQW_TYuzzb_YR_MO,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_00166204;

  puStack_60 = &DAT_00388f20;

  uVar3 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar3);

  local_58 = uVar3;

  FUN_00291400(uVar2,extraout_x1,&local_78);

  local_a8 = puVar1;

  local_a0 = 0xc2000000;

  local_98 = FUN_00166260;

  puStack_90 = &DAT_0038d688;

  _objc_retain(uVar2);

  uStack_80 = *(undefined8 *)(param_1 + 0x28);

  local_88 = uVar2;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_nx_,0,&local_a8);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_02,uVar2,1,0);

  _objc_release(local_88);

  _objc_release(local_58);

  _objc_release(uVar2);

  return;

}




