// FUN_001c8600 @0x1c8600


void FUN_001c8600(long param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  long local_70;

  long local_68;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar10 = FUN_00297fa0(param_2);

  if (auVar10._0_8_ != 0) {

    iVar1 = FUN_00295f60(param_2,auVar10._8_8_,&cf__);

    if (iVar1 == 0) {

      FUN_002a44a0(&cf__,extraout_x1,param_2);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar10._8_8_;

      uVar6 = auVar10._0_8_;

    }

    else {

      _objc_retain(param_2);

      uVar3 = extraout_x1_00;

      uVar6 = param_2;

    }

    FUN_002a0060(uVar2,uVar3,uVar6,&cf_xzyDesktopLyricsColorLight);

    _objc_release(uVar6);

  }

  auVar10 = FUN_00297fa0(param_3);

  if (auVar10._0_8_ != 0) {

    iVar1 = FUN_00295f60(param_3,auVar10._8_8_,&cf__);

    if (iVar1 == 0) {

      FUN_002a44a0(&cf__,extraout_x1_01,param_3);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar10._8_8_;

      uVar6 = auVar10._0_8_;

    }

    else {

      _objc_retain(param_3);

      uVar3 = extraout_x1_02;

      uVar6 = param_3;

    }

    FUN_002a0060(uVar2,uVar3,uVar6,&cf_xzyDesktopLyricsColorDark);

    _objc_release(uVar6);

  }

  FUN_002a4a40(uVar2);

  FUN_001c478c();

  uVar3 = _objc_loadWeakRetained(param_1 + 0x20);

  FUN_002a4dc0();

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar10._8_8_,1,2);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar10._0_8_,auVar11._8_8_,auVar11._0_8_);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar11._0_8_);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  if (lVar4 != 0) {

    FUN_001c6ed8(PTR_cf__1A1A1A_003e70b8);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      FUN_00292400(&_OBJC_CLASS___UIColor);

      local_68 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar5);

      local_68 = lVar5;

    }

    _objc_release(lVar5);

    FUN_001c6ed8(PTR_cf__F5F5F5_003e70c0);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      local_70 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar5);

      local_70 = lVar5;

    }

    _objc_release(lVar5);

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar3 = FUN_00296b80(0,0,0x404e000000000000,0x403e000000000000);

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar6 = FUN_00296b80(0,0x4008000000000000,0x4038000000000000,0x4038000000000000);

    FUN_00297e40();

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4028000000000000);

    _objc_release(uVar7);

    FUN_0029cf60(uVar6,extraout_x1_03,local_68);

    FUN_00297e40(uVar6);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0e0(0x3ff0000000000000);

    _objc_release(uVar7);

    FUN_002a4b00(&_OBJC_CLASS___UIColor);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar8 = FUN_00290a20();

    FUN_00297e40(uVar6);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0a0(auVar10._0_8_,auVar10._8_8_,uVar8);

    _objc_release(auVar10._0_8_);

    _objc_release(uVar7);

    FUN_00291380(uVar3,extraout_x1_04,uVar6);

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar7 = FUN_00296b80(0x4040000000000000,0x4008000000000000,0x4038000000000000,0x4038000000000000

                        );

    FUN_00297e40();

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4028000000000000);

    _objc_release(uVar8);

    FUN_0029cf60(uVar7,extraout_x1_05,local_70);

    FUN_00297e40(uVar7);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0e0(0x3ff0000000000000);

    _objc_release(uVar8);

    FUN_002a4b00(&_OBJC_CLASS___UIColor);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar9 = FUN_00290a20();

    FUN_00297e40(uVar7);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0a0(auVar10._0_8_,auVar10._8_8_,uVar9);

    _objc_release(auVar10._0_8_);

    _objc_release(uVar8);

    FUN_00291380(uVar3,extraout_x1_06,uVar7);

    FUN_0029c820(lVar4,extraout_x1_07,uVar3);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(uVar3);

    _objc_release(local_70);

    _objc_release(local_68);

  }

  _objc_release(lVar4);

  _objc_release(uVar2);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




