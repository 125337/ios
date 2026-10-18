// handleBubbleSwipeLeft: @0x4d6cc


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::handleBubbleSwipeLeft_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 in_d2;

  undefined1 auVar7 [16];

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  undefined8 local_78;

  undefined8 local_70;

  undefined8 local_68;

  

  _objc_retain(param_3);

  FUN_002a6220(param_3);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(uVar1,"bubbleData");

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    FUN_00293640(uVar1);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar7._0_8_,auVar7._8_8_,&DAT_0000270f);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    if (lVar3 == 0) {

      FUN_00292660(&_OBJC_CLASS___UIButton,extraout_x1,1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar7._0_8_;

      FUN_002a1c80(uVar4,auVar7._8_8_,&DAT_0000270f);

      FUN_00293640(uVar1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      FUN_00293640(uVar1);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      FUN_0029e5e0(in_d2,0,0x4051800000000000,uVar4);

      _objc_release(uVar6);

      _objc_release(uVar5);

      FUN_002a4cc0(&_OBJC_CLASS___UIColor);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(uVar4,auVar7._8_8_,auVar7._0_8_);

      _objc_release(auVar7._0_8_);

      FUN_002a1f80(uVar4,extraout_x1_00,&cf_Rd,0);

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1fc0(uVar4,auVar7._8_8_,auVar7._0_8_,0);

      _objc_release(auVar7._0_8_);

      FUN_002a4ac0(0x4030000000000000,*(undefined8 *)PTR__UIFontWeightMedium_00388420,

                   &_OBJC_CLASS___UIFont);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002a53a0(uVar4);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e520(auVar7._0_8_,auVar7._8_8_,uVar5);

      _objc_release(auVar7._0_8_);

      _objc_release(uVar5);

      FUN_002913c0(uVar4,extraout_x1_01,param_1,"handleDeleteButtonTapped:",0x40);

      _objc_setAssociatedObject(uVar4,"bubbleData",lVar2,1);

      _objc_getAssociatedObject(uVar1,"downloadVC");

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(uVar4,"downloadVC",uVar5,1);

      _objc_release(uVar5);

      _objc_getAssociatedObject(uVar1,"collectionView");

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(uVar4,"collectionView",uVar5,1);

      _objc_release(uVar5);

      _objc_setAssociatedObject(uVar4,"parentCell",uVar1,1);

      FUN_00293640(uVar1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00291380(auVar7._0_8_,auVar7._8_8_,uVar4);

      _objc_release(auVar7._0_8_);

      FUN_00293640(uVar1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d4a0(auVar7._0_8_,auVar7._8_8_,0);

      _objc_release(auVar7._0_8_);

      FUN_0029d4a0(uVar1,extraout_x1_02,0);

      local_98 = PTR___NSConcreteStackBlock_003886f0;

      local_90 = 0xc2000000;

      local_88 = FUN_0004db24;

      puStack_80 = &DAT_00389800;

      _objc_retain(uVar1);

      local_68 = 0x4051800000000000;

      local_78 = uVar1;

      _objc_retain(uVar4);

      local_70 = uVar4;

      FUN_002917a0(0x3fd0000000000000,&_OBJC_CLASS___UIView,extraout_x1_03,&local_98);

      _objc_release(local_70);

      _objc_release(local_78);

      _objc_release(uVar4);

    }

    _objc_release(lVar3);

  }

  _objc_release(lVar2);

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




