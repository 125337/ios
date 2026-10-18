// loadVoiceListFromCache @0x61cb8


/* Function Stack Size: 0x10 bytes */



bool _0x00bdda58::loadVoiceListFromCache(ID param_1,SEL param_2)



{

  long lVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  bool bVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00299520(auVar7._0_8_,auVar7._8_8_,&cf_ttsVoiceListCache);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  lVar1 = auVar8._0_8_;

  if (lVar1 == 0) {

    bVar6 = 0;

  }

  else {

    FUN_00299540(lVar1,auVar8._8_8_,&cf_categories);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    lVar2 = auVar8._0_8_;

    FUN_00299540(lVar1,auVar8._8_8_,&cf_categoryNames);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if ((lVar2 == 0 || lVar3 == 0) || (lVar4 = FUN_00293860(lVar3), lVar4 == 0)) {

      bVar6 = 0;

    }

    else {

      FUN_002a63a0(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b240();

      _objc_release(uVar5);

      FUN_002a63a0(param_1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00291120(auVar8._0_8_,auVar8._8_8_,lVar2);

      _objc_release(auVar8._0_8_);

      FUN_00292a40(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b240();

      _objc_release(uVar5);

      FUN_00292a40(param_1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00291260(auVar8._0_8_,auVar8._8_8_,lVar3);

      _objc_release(auVar8._0_8_);

      FUN_00292a40(param_1);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      lVar4 = FUN_00293860();

      _objc_release(uVar5);

      if (lVar4 != 0) {

        FUN_00292a40(param_1);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_00299500(auVar8._0_8_,auVar8._8_8_,0);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d920(param_1,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        _objc_release(auVar8._0_8_);

        FUN_002a2aa0(param_1);

        FUN_002a4dc0(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b140();

        _objc_release(uVar5);

      }

      bVar6 = 1;

    }

    _objc_release(lVar3);

    _objc_release(lVar2);

  }

  _objc_release(lVar1);

  _objc_release(auVar7._0_8_);

  return bVar6;

}




