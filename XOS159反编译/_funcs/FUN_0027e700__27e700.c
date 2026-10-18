// FUN_0027e700 @0x27e700


undefined1  [16] FUN_0027e700(undefined8 param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  undefined8 uVar6;

  

  _objc_retain();

  FUN_00297e40(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a540();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    FUN_00297e40(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    auVar5 = FUN_00295600();

    uVar6 = auVar5._8_8_;

    _objc_release(uVar3);

    auVar4._8_8_ = uVar6;

    auVar4._0_8_ = auVar5._0_8_;

  }

  else {

    auVar4 = FUN_00295600(lVar2);

  }

  uVar3 = auVar4._8_8_;

  _objc_release(lVar2);

  _objc_release(uVar1);

  _objc_release(param_1);

  auVar5._8_8_ = uVar3;

  auVar5._0_8_ = auVar4._0_8_;

  return auVar5;

}




