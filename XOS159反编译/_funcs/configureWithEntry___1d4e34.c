// configureWithEntry: @0x1d4e34


/* Function Stack Size: 0x18 bytes */



void XZYCLGHorizontalCard::configureWithEntry_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  FUN_0029e120(param_1,extraout_x1,param_3);

  FUN_00295de0(param_3);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e780(param_1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_00295de0(param_3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_001ccaf0();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  lVar4 = FUN_00297fa0(uVar3);

  if (lVar4 == 0) {

    FUN_00295de0(param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_001cbaa4();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    uVar2 = extraout_x1_01;

  }

  else {

    _objc_retain(uVar3);

    uVar2 = extraout_x1_00;

    uVar5 = uVar3;

  }

  FUN_0029c760(param_1,uVar2,uVar5);

  FUN_002a53a0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar6._0_8_,auVar6._8_8_,uVar3);

  _objc_release(auVar6._0_8_);

  if (DAT_003e70f0 == '\x01') {

    uVar2 = FUN_002a59c0(param_3);

  }

  else {

    uVar2 = 0;

  }

  FUN_002920a0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2340(auVar6._0_8_,auVar6._8_8_,uVar2);

  _objc_release(auVar6._0_8_);

  FUN_00295de0(param_3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_001d19cc();

  FUN_002a1fe0(param_1);

  _objc_release(uVar2);

  FUN_001d0ec4(DAT_003e7160 * 10.5,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002938c0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar6._0_8_,auVar6._8_8_,uVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar2);

  iVar1 = FUN_00297860(param_3);

  uVar2 = 0x3fe199999999999a;

  if (iVar1 == 0) {

    uVar2 = 0x3ff0000000000000;

  }

  FUN_0029cb60(uVar2,param_1);

  FUN_002a5dc0(param_1);

  FUN_0029ff40(param_1);

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(param_3);

  return;

}




