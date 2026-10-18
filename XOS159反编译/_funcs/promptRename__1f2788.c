// promptRename @0x1f2788


/* Function Stack Size: 0x10 bytes */



void XZYCLGCustomGroupEditorViewController::promptRename(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar4 [16];

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  undefined1 auStack_88 [8];

  undefined1 auStack_80 [8];

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  undefined8 local_58;

  

  FUN_00295de0();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_001cb9dc();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf__TTR_,0,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc2000000;

  local_68 = FUN_001f29d8;

  puStack_60 = &DAT_00388f20;

  _objc_retain(uVar3);

  local_58 = uVar3;

  FUN_00291400(uVar2,extraout_x1_00,&local_78);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_initWeak(auStack_80,param_1);

  local_b0 = puVar1;

  local_a8 = 0xc2000000;

  local_a0 = FUN_001f2a40;

  puStack_98 = &DAT_0038efd8;

  _objc_retain(uVar2);

  local_90 = uVar2;

  _objc_copyWeak(auStack_88,auStack_80);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_OX_,0,&local_b0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_03,uVar2,1,0);

  _objc_destroyWeak(auStack_88);

  _objc_release(local_90);

  _objc_destroyWeak(auStack_80);

  _objc_release(local_58);

  _objc_release(uVar2);

  _objc_release(uVar3);

  return;

}




