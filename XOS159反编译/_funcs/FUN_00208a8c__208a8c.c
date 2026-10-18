// FUN_00208a8c @0x208a8c


void FUN_00208a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  if (DAT_003eaa30 == '\x01' && DAT_003ead50 == '\0') {

    FUN_002a6080(param_3,extraout_x1,&cf_m_nsUserName);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0021c634(param_1,uVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      uVar4 = 0;

      uVar3 = 0;

    }

    else {

      FUN_002a6600(lVar2);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00299540(auVar6._0_8_,auVar6._8_8_,uVar1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

      FUN_002a6640(lVar2);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00299540(auVar6._0_8_,auVar6._8_8_,uVar1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

    }

    (*DAT_003eacb8)(param_1,param_2,param_3);

    uVar5 = FUN_0021c9a4(param_1,uVar1);

    FUN_0021ccd8(param_1,param_3,uVar3,lVar2,uVar4,uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

    _objc_release(lVar2);

    _objc_release(uVar1);

  }

  else {

    (*DAT_003eacb8)(param_1,param_2,param_3);

  }

  _objc_release(param_3);

  return;

}




