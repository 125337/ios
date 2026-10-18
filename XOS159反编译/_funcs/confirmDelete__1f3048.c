// confirmDelete @0x1f3048


/* Function Stack Size: 0x10 bytes */



void XZYCLGCustomGroupEditorViewController::confirmDelete(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar3 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined1 auStack_50 [8];

  undefined1 auStack_48 [8];

  

  FUN_00295de0();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_001cb9dc();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_Rd0_);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar3._8_8_,auVar3._0_8_,&cf_R_bXTOV0RS_gvQn_R_yJ,1

              );

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  _objc_initWeak(auStack_48,param_1);

  local_70 = PTR___NSConcreteStackBlock_003886f0;

  local_68 = 0xc2000000;

  local_60 = FUN_001f3268;

  puStack_58 = &DAT_00389250;

  _objc_copyWeak(auStack_50,auStack_48);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Rd,2,&local_70);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar3._8_8_,auVar3._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar1,1,0);

  _objc_destroyWeak(auStack_50);

  _objc_destroyWeak(auStack_48);

  _objc_release(uVar1);

  _objc_release(uVar2);

  return;

}




