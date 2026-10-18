// FUN_0020baec @0x20baec


long FUN_0020baec(undefined8 param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  

  _objc_retain();

  if (DAT_003eaa10 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

    if ((uVar2 & 1) != 0) {

      for (lVar3 = 0; auVar4 = FUN_00293860(DAT_003eaa10), lVar3 < auVar4._0_8_; lVar3 = lVar3 + 1)

      {

        FUN_00299500(DAT_003eaa10,auVar4._8_8_,lVar3);

        auVar4 = _objc_retainAutoreleasedReturnValue();

        FUN_00299540(auVar4._0_8_,auVar4._8_8_,&cf_id);

        auVar5 = _objc_retainAutoreleasedReturnValue();

        uVar2 = FUN_00297820(auVar5._0_8_,auVar5._8_8_,param_1);

        _objc_release(auVar5._0_8_);

        _objc_release(auVar4._0_8_);

        if ((uVar2 & 1) != 0) goto LAB_0020bba8;

      }

    }

  }

  lVar3 = 0x7fffffffffffffff;

LAB_0020bba8:

  _objc_release(param_1);

  return lVar3;

}




