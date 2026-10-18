// FUN_0019b010 @0x19b010


void FUN_0019b010(long param_1,long param_2)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar6._0_8_;

  FUN_0029efa0(uVar3,auVar6._8_8_,param_2,*(undefined8 *)(param_1 + 0x20));

  FUN_002a4a40(uVar3);

  FUN_0018dc7c();

  uVar4 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_002a4dc0();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar6._8_8_,*(undefined8 *)(param_1 + 0x30),0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar4);

  if (lVar5 != 0) {

    pcVar1 = &cf_Ne;

    if (param_2 != 1) {

      pcVar1 = &cf_Ne;

    }

    pcVar2 = &cf_N_T_u;

    if (param_2 != 2) {

      pcVar2 = pcVar1;

    }

    _objc_retain(pcVar2);

    FUN_002944a0(lVar5);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar6._0_8_,auVar6._8_8_,pcVar2);

    _objc_release(auVar6._0_8_);

    _objc_release(pcVar2);

  }

  _objc_release(lVar5);

  _objc_release(uVar3);

  return;

}




