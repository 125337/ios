// pickPosition @0x1c7e60


/* Function Stack Size: 0x10 bytes */



void XZYDesktopLyricsSettingsViewController::pickPosition(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar6;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined **local_a0;

  undefined1 auStack_98 [8];

  long local_90;

  undefined1 auStack_88 [8];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_>f_yMOn_,0,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_initWeak(auStack_88,param_1);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  for (lVar6 = 0; auVar7 = FUN_00293860(&PTR__OBJC_CLASS___NSConstantArray_003bec98),

      uVar3 = auVar7._8_8_, lVar6 < auVar7._0_8_; lVar6 = lVar6 + 1) {

    if (lVar6 == DAT_003ea928) {

      FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003bec98,uVar3,lVar6);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&::cf__);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar7._0_8_);

    }

    else {

      FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003bec98,uVar3,lVar6);

      uVar3 = _objc_retainAutoreleasedReturnValue();

    }

    local_c0 = puVar1;

    local_b8 = 0xc2000000;

    local_b0 = FUN_001c82a4;

    puStack_a8 = &DAT_0038eba8;

    local_90 = lVar6;

    _objc_copyWeak(auStack_98,auStack_88);

    local_a0 = &PTR__OBJC_CLASS___NSConstantArray_003bec98;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,uVar3,0,&local_c0);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    _objc_release(local_a0);

    _objc_destroyWeak(auStack_98);

    _objc_release(uVar3);

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar3,&cf_Sm,1,0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_0029a0a0(uVar2);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar3 = extraout_x1_00;

  if (lVar6 != 0) {

    FUN_002a4dc0(param_1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar7._8_8_,0,1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar7._0_8_,auVar8._8_8_,auVar8._0_8_);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar8._0_8_);

    _objc_release(auVar7._0_8_);

    lVar6 = lVar4;

    if (lVar4 == 0) {

      FUN_002a6220(param_1);

      lVar6 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029a0a0(uVar2);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar7._0_8_,auVar7._8_8_,lVar6);

    _objc_release(auVar7._0_8_);

    if (lVar4 == 0) {

      _objc_release(lVar6);

      FUN_002a6220(param_1);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      uVar3 = FUN_002925a0();

    }

    else {

      uVar3 = FUN_002925a0(lVar4);

    }

    FUN_0029a0a0(uVar2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(uVar3,in_d1,in_d2,in_d3);

    _objc_release(uVar5);

    if (lVar4 == 0) {

      _objc_release(lVar6);

    }

    _objc_release(lVar4);

    uVar3 = extraout_x1_01;

  }

  FUN_0029a500(param_1,uVar3,uVar2,1,0);

  _objc_destroyWeak(auStack_88);

  _objc_release(uVar2);

  return;

}




