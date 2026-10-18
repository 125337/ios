// showSideScopeSheet @0x1e7f6c


/* Function Stack Size: 0x10 bytes */



void XZYChatListGroupingSettingsViewController::showSideScopeSheet(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar7;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  ID IStack_78;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_Oh_O_uV,0,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_a0 = PTR___NSConcreteStackBlock_003886f0;

  local_98 = 0xc2000000;

  local_90 = FUN_001e82c0;

  puStack_88 = &DAT_0038ef08;

  _objc_retain();

  local_80 = uVar1;

  IStack_78 = param_1;

  lVar2 = _objc_retainBlock(&local_a0);

  (**(code **)(lVar2 + 0x10))(lVar2,&cf_teu,0);

  (**(code **)(lVar2 + 0x10))(lVar2,&cf__NuaSGrNe,1);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_Sm,1,0);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar8._8_8_,auVar8._0_8_);

  _objc_release(auVar8._0_8_);

  FUN_002a4dc0(param_1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar8._8_8_,2,2);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar8._0_8_,auVar9._8_8_,auVar9._0_8_);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  _objc_release(auVar8._0_8_);

  lVar4 = lVar3;

  if (lVar3 == 0) {

    FUN_002a6220(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0029a0a0(uVar1);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar8._0_8_;

  FUN_002a1740(uVar5,auVar8._8_8_,lVar4);

  _objc_release(uVar5);

  if (lVar3 == 0) {

    _objc_release(lVar4);

    FUN_002a6220(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    uVar7 = _CGRectGetMidX();

    FUN_002a6220(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    in_d1 = _CGRectGetMidY();

    in_d2 = 0x3ff0000000000000;

    in_d3 = 0x3ff0000000000000;

  }

  else {

    uVar7 = FUN_002925a0(lVar3);

  }

  FUN_0029a0a0(uVar1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1700(uVar7,in_d1,in_d2,in_d3);

  _objc_release(uVar6);

  uVar7 = extraout_x1_00;

  if (lVar3 == 0) {

    _objc_release(uVar5);

    _objc_release(lVar4);

    uVar7 = extraout_x1_01;

  }

  FUN_0029a500(param_1,uVar7,uVar1,1,0);

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(local_80);

  _objc_release(uVar1);

  return;

}




