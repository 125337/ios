// FUN_0018db40 @0x18db40


undefined1  [16] FUN_0018db40(undefined8 param_1)



{

  undefined8 *puVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  auVar6 = _objc_opt_respondsToSelector(param_1,"viewModel");

  if ((auVar6._0_8_ & 1) == 0) {

    iVar2 = 0;

  }

  else {

    FUN_00299c80(param_1,auVar6._8_8_,"viewModel");

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_opt_respondsToSelector(uVar3,"isSender");

    if ((uVar4 & 1) == 0) {

      iVar2 = 0;

    }

    else {

      iVar2 = FUN_00297a80(uVar3);

    }

    _objc_release(uVar3);

  }

  FUN_0018da3c();

  puVar1 = &DAT_003e95a0;

  if (iVar2 == 0) {

    puVar1 = &DAT_003e95a8;

  }

  uVar3 = *puVar1;

  uVar5 = 0;

  _objc_release(param_1);

  auVar6._8_8_ = uVar5;

  auVar6._0_8_ = uVar3;

  return auVar6;

}




