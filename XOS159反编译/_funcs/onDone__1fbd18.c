// onDone @0x1fbd18


/* Function Stack Size: 0x10 bytes */



void XZYCLGGroupOrderViewController::onDone(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  

  FUN_00295be0();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00299020();

  uVar3 = DAT_003eaa20;

  DAT_003eaa20 = uVar2;

  _objc_release(uVar3);

  _objc_release(uVar1);

  FUN_001fbe40();

  DAT_003eaab4 = DAT_003eaab4 + 1;

  FUN_001c9388();

  FUN_002990e0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6260();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  IVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar1);

  _objc_release(uVar3);

  if (IVar4 != param_1) {

    FUN_002990e0();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a080(auVar5._0_8_,auVar5._8_8_,1);

    _objc_unsafeClaimAutoreleasedReturnValue();

    _objc_release(auVar5._0_8_);

    return;

  }

  FUN_00294700(param_1,extraout_x1,1,0);

  return;

}




