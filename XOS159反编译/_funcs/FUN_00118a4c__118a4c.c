// FUN_00118a4c @0x118a4c


void FUN_00118a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined1 auVar3 [16];

  

  _objc_getAssociatedObject(param_3,"editorVC");

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    FUN_002a6220(lVar1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar3._0_8_,auVar3._8_8_,&DAT_0000270f);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar3._0_8_);

    if (lVar2 != 0) {

      FUN_002a1d60(lVar2,extraout_x1,&cf___);

    }

    _objc_release(lVar2);

  }

  _objc_release(lVar1);

  return;

}




