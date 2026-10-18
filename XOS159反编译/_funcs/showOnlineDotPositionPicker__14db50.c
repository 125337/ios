// showOnlineDotPositionPicker @0x14db50


/* Function Stack Size: 0x10 bytes */



void CadisSettingsViewController::showOnlineDotPositionPicker(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  ID local_80;

  long lStack_78;

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf__W_WpMOn_,0,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_00148308();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar3 = auVar5._8_8_;

  lVar4 = 0;

  do {

    FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be488,uVar3,lVar4);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    if (auVar5._0_8_ == lVar4) {

      FUN_002a44a0(auVar6._0_8_,auVar6._8_8_,&::cf_space_s_);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

      auVar6._8_8_ = extraout_x1;

      auVar6._0_8_ = uVar3;

    }

    local_a0 = puVar1;

    local_98 = 0xc2000000;

    local_90 = FUN_0014dd34;

    puStack_88 = &DAT_003890b0;

    local_80 = param_1;

    lStack_78 = lVar4;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar6._8_8_,auVar6._0_8_,0,&local_a0);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    _objc_release(auVar6._0_8_);

    lVar4 = lVar4 + 1;

    uVar3 = extraout_x1_00;

  } while (lVar4 != 4);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(param_1,extraout_x1_01,uVar2,1,0);

  _objc_release(uVar2);

  return;

}




