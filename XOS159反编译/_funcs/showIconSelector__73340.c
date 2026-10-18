// showIconSelector @0x73340


/* Function Stack Size: 0x10 bytes */



void _0x016d26c7::showIconSelector(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 uVar5;

  undefined8 extraout_x1_06;

  cfstringStruct *pcVar6;

  undefined1 auVar7 [16];

  undefined *local_118;

  undefined8 local_110;

  code *local_108;

  undefined *puStack_100;

  long local_f8;

  ID IStack_f0;

  undefined *local_e8;

  undefined8 local_e0;

  code *local_d8;

  undefined *puStack_d0;

  ID local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  ID local_a0;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  ID local_78;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf__IN_cVhn_,0,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar7._0_8_,auVar7._8_8_,&cf_ttsCustomIconPath);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  if (lVar3 == 0) {

    uVar4 = 0;

    uVar5 = extraout_x1;

    pcVar6 = &cf__;

  }

  else {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    uVar4 = FUN_00295160(auVar7._0_8_,auVar7._8_8_,lVar3);

    _objc_release(auVar7._0_8_);

    uVar5 = extraout_x1_00;

    pcVar6 = &cf__O_uVh;

    if ((uVar4 & 1) == 0) {

      pcVar6 = &cf__;

    }

  }

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = PTR___NSConcreteStackBlock_003886f0;

  local_90 = 0xc2000000;

  local_88 = FUN_000736ac;

  puStack_80 = &DAT_00388cf0;

  local_78 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar5,pcVar6,0,&local_98);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  local_c0 = puVar1;

  local_b8 = 0xc2000000;

  local_b0 = FUN_00073754;

  puStack_a8 = &DAT_00388cf0;

  local_a0 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_n_VhNx,0,&local_c0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  pcVar6 = &cf__;

  if ((uVar4 & 1) == 0) {

    pcVar6 = &cf_NO_INVh;

  }

  local_e8 = puVar1;

  local_e0 = 0xc2000000;

  local_d8 = FUN_0007375c;

  puStack_d0 = &DAT_00388cf0;

  local_c8 = param_1;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,pcVar6,0,&local_e8);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  uVar5 = extraout_x1_03;

  if ((uVar4 & 1) != 0) {

    local_118 = puVar1;

    local_110 = 0xc2000000;

    local_108 = FUN_00073764;

    puStack_100 = &DAT_00388d20;

    _objc_retain(lVar3);

    local_f8 = lVar3;

    IStack_f0 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_Rd_INVh,2,&local_118);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    _objc_release(local_f8);

    uVar5 = extraout_x1_05;

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar5,&cf_Sm,1,0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_0029a500(param_1,extraout_x1_06,uVar2,1,0);

  _objc_release(lVar3);

  _objc_release(uVar2);

  return;

}




