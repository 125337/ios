// FUN_001b42ec @0x1b42ec


void FUN_001b42ec(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined1 auVar5 [16];

  

  FUN_001ab458(*(undefined8 *)(param_1 + 0x30));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_00299020();

  _objc_release(uVar2);

  lVar4 = *(long *)(param_1 + 0x38);

  auVar5 = FUN_00293860(uVar3);

  if (lVar4 < auVar5._0_8_) {

    FUN_0029b480(uVar3,auVar5._8_8_,*(undefined8 *)(param_1 + 0x38));

    if (*(long *)(param_1 + 0x30) == 2) {

      FUN_001ab3ac();

    }

    else {

      FUN_001ab038(uVar3);

    }

    iVar1 = FUN_001b4418(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30));

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4a40();

    _objc_release(uVar2);

    if (iVar1 != 0) {

      FUN_0018dc7c();

    }

    uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

    FUN_002995c0();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar2);

    if (lVar4 != 0) {

      uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

      FUN_002995c0();

      lVar4 = _objc_retainAutoreleasedReturnValue();

      (**(code **)(lVar4 + 0x10))();

      _objc_release(lVar4);

      _objc_release(uVar2);

    }

    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();

  }

  _objc_release(uVar3);

  return;

}




