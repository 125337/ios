// FUN_00187898 @0x187898


void FUN_00187898(undefined8 param_1)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar3;

  undefined8 extraout_x1_01;

  undefined1 auVar4 [16];

  

  (*DAT_003e8cc0)();

  FUN_00187694();

  if (DAT_003e8d33 == '\x01') {

    FUN_002a6080(param_1,extraout_x1,&cf_controlCenter);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar4._8_8_;

    lVar1 = auVar4._0_8_;

    if (lVar1 != 0) {

      FUN_002a24a0(lVar1,uVar3,PTR____kCFBooleanTrue_00388320,&cf_isOriginalImage);

      uVar3 = extraout_x1_00;

    }

    FUN_002a24a0(param_1,uVar3,PTR____kCFBooleanTrue_00388320,&cf_isOriginSelected);

    FUN_002a6080(param_1,extraout_x1_01,&cf_m_originImageCheck);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    lVar2 = auVar4._0_8_;

    if (lVar2 != 0) {

      FUN_002a1120(lVar2,auVar4._8_8_,1);

    }

    _objc_release(lVar2);

    _objc_release(lVar1);

    return;

  }

  return;

}




