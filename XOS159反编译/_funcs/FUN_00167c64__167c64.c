// FUN_00167c64 @0x167c64


undefined8 FUN_00167c64(void)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  lVar1 = FUN_00138258();

  if (lVar1 < 10) {

    uVar4 = 0;

  }

  else {

    FUN_00167d7c();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    auVar5 = FUN_00293860();

    if (lVar1 + -10 < auVar5._0_8_) {

      FUN_00299500(uVar2,auVar5._8_8_,lVar1 + -10);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar4 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

      auVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);

      if ((auVar5._0_8_ & 1) == 0) {

        uVar4 = 0;

      }

      else {

        FUN_00299540(uVar3,auVar5._8_8_,&cf_type);

        auVar5 = _objc_retainAutoreleasedReturnValue();

        uVar4 = FUN_00297820(auVar5._0_8_,auVar5._8_8_,&cf_html);

        _objc_release(auVar5._0_8_);

      }

      _objc_release(uVar3);

    }

    else {

      uVar4 = 0;

    }

    _objc_release(uVar2);

  }

  return uVar4;

}




