// FUN_00261288 @0x261288


void FUN_00261288(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  lVar4 = FUN_00297fa0(uVar3);

  if (lVar4 != 0) {

    FUN_0024d85c();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = FUN_00299020();

    _objc_release(uVar1);

    lVar4 = *(long *)(param_1 + 0x30);

    auVar6 = FUN_00293860(uVar2);

    if (lVar4 < auVar6._0_8_) {

      FUN_00299500(uVar2,auVar6._8_8_,*(undefined8 *)(param_1 + 0x30));

      uVar1 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_00299020();

      _objc_release(uVar1);

      FUN_002a00a0(uVar5,extraout_x1,uVar3,&cf_name);

      FUN_002a0040(uVar2,extraout_x1_00,uVar5,*(undefined8 *)(param_1 + 0x30));

      FUN_0024d944(uVar2);

      FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

      uVar1 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b140();

      _objc_release(uVar1);

      _objc_release(uVar5);

    }

    _objc_release(uVar2);

  }

  _objc_release(uVar3);

  return;

}




