// FUN_00059718 @0x59718


void FUN_00059718(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,

                 undefined8 param_5)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_5);

  if ((param_4 == 1) && (lVar2 = FUN_0029c020(param_5), lVar2 == 2)) {

    _objc_getAssociatedObject(param_2,"fontFiles");

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_2,"fontDir");

    uVar4 = _objc_retainAutoreleasedReturnValue();

    auVar9 = FUN_0029bae0(param_5);

    FUN_00299500(uVar3,auVar9._8_8_,auVar9._0_8_);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar9._0_8_;

    FUN_002a4460(uVar4,auVar9._8_8_,uVar5);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b3c0(auVar9._0_8_,auVar9._8_8_,uVar6,0);

    _objc_release(auVar9._0_8_);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45e0(auVar9._0_8_,auVar9._8_8_,&cf_xzy_customFontFile);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar9._0_8_);

    iVar1 = FUN_00297820(uVar5,extraout_x1,uVar7);

    if (iVar1 != 0) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b4a0(auVar9._0_8_,auVar9._8_8_,&cf_xzy_customFontFile);

      _objc_release(auVar9._0_8_);

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4a40();

      _objc_release(uVar8);

    }

    _objc_getAssociatedObject(param_2,"fontPSNames");

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b4a0(auVar9._0_8_,auVar9._8_8_,uVar5);

    auVar10 = FUN_0029bae0(param_5);

    FUN_0029b480(uVar3,auVar10._8_8_,auVar10._0_8_);

    FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1_00,2);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b1c0(param_3,auVar10._8_8_,auVar10._0_8_,100);

    _objc_release(auVar10._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

  }

  _objc_release(param_5);

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




