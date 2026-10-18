// FUN_0014f654 @0x14f654


void FUN_0014f654(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_00295480();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (0.0 < (float)uVar4) {

    FUN_00136588();

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e500(uVar4,auVar5._0_8_,auVar5._8_8_,&cf_CadisCardHeight);

    _objc_release(auVar5._0_8_);

    FUN_00136604();

    FUN_002a4dc0(*(undefined8 *)(param_1 + 0x28));

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar1);

    return;

  }

  return;

}




