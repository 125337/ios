// FUN_00158e58 @0x158e58


void FUN_00158e58(undefined8 param_1)



{

  long lVar1;

  long lVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  FUN_002a62a0(param_1,extraout_x1,&DAT_00002441);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar5._8_8_;

  lVar1 = auVar5._0_8_;

  if (lVar1 != 0) {

    FUN_0029b340(lVar1);

    uVar4 = extraout_x1_00;

  }

  FUN_002a62a0(param_1,uVar4,&DAT_00002442);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar5._8_8_;

  lVar2 = auVar5._0_8_;

  if (lVar2 != 0) {

    FUN_0029b340(lVar2);

    uVar4 = extraout_x1_01;

  }

  FUN_002a62a0(param_1,uVar4,&DAT_00002443);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    FUN_0029b340(lVar3);

  }

  _objc_release(lVar3);

  _objc_release(lVar2);

  _objc_release(lVar1);

  _objc_release(param_1);

  return;

}




