// showPluginConfigurationManager: @0x2d808


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::showPluginConfigurationManager_(ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  undefined8 uVar2;

  long lVar3;

  ID IVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar6;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined *local_108;

  undefined8 local_100;

  code *local_f8;

  undefined *puStack_f0;

  undefined1 auStack_e8 [8];

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  undefined1 auStack_c0 [8];

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  undefined1 auStack_98 [8];

  undefined1 auStack_90 [16];

  

  _objc_retain(param_3);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_Mn__t,&cf_YNORY6Rv_S__SORSjR4_g,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_initWeak(auStack_90,param_1);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  local_b8 = PTR___NSConcreteStackBlock_003886f0;

  local_b0 = 0xc2000000;

  local_a8 = FUN_0002dbf4;

  puStack_a0 = &DAT_00389250;

  _objc_copyWeak(auStack_98,auStack_90);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_YNMn_,0,&local_b8);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  local_e0 = puVar1;

  local_d8 = 0xc2000000;

  local_d0 = FUN_0002f9bc;

  puStack_c8 = &DAT_00389250;

  _objc_copyWeak(auStack_c0,auStack_90);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_SMn_,0,&local_e0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

  local_108 = puVar1;

  local_100 = 0xc2000000;

  local_f8 = FUN_0002fe4c;

  puStack_f0 = &DAT_00389250;

  _objc_copyWeak(auStack_e8,auStack_90);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_nzzMn_,2,&local_108);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Sm,1,0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_0029a0a0(uVar2);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar6 = extraout_x1_04;

  if (lVar3 != 0) {

    IVar4 = param_3;

    if (param_3 == 0) {

      FUN_002a6220(param_1);

      IVar4 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029a0a0(uVar2);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar8._0_8_,auVar8._8_8_,IVar4);

    _objc_release(auVar8._0_8_);

    if (param_3 == 0) {

      _objc_release(IVar4);

      FUN_002a6220(param_1);

      IVar4 = _objc_retainAutoreleasedReturnValue();

      uVar6 = FUN_002925a0();

    }

    else {

      uVar6 = FUN_002925a0(param_3);

    }

    FUN_0029a0a0(uVar2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(uVar6,in_d1,in_d2,in_d3);

    _objc_release(uVar5);

    uVar6 = extraout_x1_05;

    if (param_3 == 0) {

      _objc_release(IVar4);

      uVar6 = extraout_x1_06;

    }

  }

  FUN_0029a500(param_1,uVar6,uVar2,1,0);

  _objc_destroyWeak(auStack_e8);

  _objc_release(auVar7._0_8_);

  _objc_destroyWeak(auStack_c0);

  _objc_destroyWeak(auStack_98);

  _objc_destroyWeak(auStack_90);

  _objc_release(uVar2);

  _objc_release(param_3);

  return;

}




