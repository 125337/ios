// FUN_0026049c @0x26049c


void FUN_0026049c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar4;

  undefined1 auVar5 [16];

  

  FUN_0024d85c();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_00299020();

  _objc_release(uVar1);

  lVar4 = *(long *)(param_1 + 0x28);

  auVar5 = FUN_00293860(uVar2);

  if (lVar4 < auVar5._0_8_) {

    FUN_00299500(uVar2,auVar5._8_8_,*(undefined8 *)(param_1 + 0x28));

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_00299020();

    _objc_release(uVar1);

    FUN_0029b4a0(uVar3,extraout_x1,&cf_lift);

    FUN_002a0040(uVar2,extraout_x1_00,uVar3,*(undefined8 *)(param_1 + 0x28));

    FUN_0024d944(uVar2);

    if (*(char *)(param_1 + 0x30) == '\x01') {

      FUN_00240480();

    }

    FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != 0) {

      FUN_002995c0(*(undefined8 *)(param_1 + 0x20));

      lVar4 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar4 + 0x10))();

      _objc_release(lVar4);

    }

    FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar1);

    _objc_release(uVar3);

  }

  _objc_release(uVar2);

  return;

}




