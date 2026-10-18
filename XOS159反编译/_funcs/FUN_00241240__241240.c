// FUN_00241240 @0x241240


void FUN_00241240(void)



{

  undefined8 uVar1;

  long lVar2;

  undefined1 auVar3 [16];

  

  if (DAT_003eb1ca != '\x01' || DAT_003e7298 != 4) {

    return;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar3._0_8_,auVar3._8_8_,&cf_xzyHomeBottomBarProfileSubtitle);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar3._0_8_);

  lVar2 = FUN_00297fa0(uVar1);

  if (lVar2 == 0) {

    FUN_002408c0();

  }

  _objc_release(uVar1);

  return;

}




