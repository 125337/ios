// FUN_00199fe0 @0x199fe0


void FUN_00199fe0(long param_1,long param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  uVar3 = 0;

  if (param_2 != 0) {

    uVar3 = 2;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar5._0_8_;

  FUN_0029efa0(uVar2,auVar5._8_8_,uVar3,*(undefined8 *)(param_1 + 0x20));

  FUN_002a4a40(uVar2);

  FUN_0018dc7c();

  uVar3 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_002a4dc0();

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar5._8_8_,*(undefined8 *)(param_1 + 0x30),5);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar5._0_8_,auVar6._8_8_,auVar6._0_8_);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar3);

  if (lVar4 != 0) {

    pcVar1 = &cf_ag;

    if (param_2 != 0) {

      pcVar1 = &cf__gag;

    }

    _objc_retain(pcVar1);

    FUN_002944a0(lVar4);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar5._0_8_,auVar5._8_8_,pcVar1);

    _objc_release(auVar5._0_8_);

    _objc_release(pcVar1);

  }

  _objc_release(lVar4);

  _objc_release(uVar2);

  return;

}




