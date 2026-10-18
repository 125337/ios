// FUN_0020d8a8 @0x20d8a8


void FUN_0020d8a8(undefined8 param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  cfstringStruct *pcVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  

  _objc_retain();

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar2 = _objc_opt_isKindOfClass(param_1,uVar1);

  if ((uVar2 & 1) == 0) {

    pcVar6 = &cf___;

  }

  else {

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45c0(param_1,auVar7._8_8_,auVar7._0_8_);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4560(auVar8._0_8_,auVar8._8_8_,&cf__,&cf___);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar8._0_8_);

    _objc_release(auVar7._0_8_);

    FUN_002a5f40(uVar1);

    pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(uVar1);

    auVar7 = FUN_00297fa0(pcVar3);

    uVar1 = auVar7._8_8_;

    if ((auVar7._0_8_ == 6) ||

       (auVar7 = FUN_00297fa0(pcVar3), uVar1 = auVar7._8_8_, auVar7._0_8_ == 8)) {

      FUN_00292c40(&_OBJC_CLASS___NSCharacterSet,uVar1,&cf_0123456789ABCDEF);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      FUN_00297580();

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar1);

      lVar5 = FUN_0029ab40(pcVar3,extraout_x1,uVar4);

      if (lVar5 == 0x7fffffffffffffff) {

        _objc_retain(pcVar3);

        pcVar6 = pcVar3;

      }

      else {

        pcVar6 = &cf___;

      }

      _objc_release(uVar4);

    }

    else {

      pcVar6 = &cf___;

    }

    _objc_release(pcVar3);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar6);

  return;

}




