// FUN_001aed18 @0x1aed18


void FUN_001aed18(long param_1,long param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  if (param_1 - 100U < 0xffffffffffffffa6) {

    if (param_2 == 2) {

      FUN_00190f70();

      pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_001941b8(param_1);

      pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    goto LAB_001aee44;

  }

  FUN_001ab458(param_2);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_00293860();

  if (param_1 + -10 < auVar5._0_8_) {

    FUN_00299500(uVar2,auVar5._8_8_,param_1 + -10);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(auVar5._0_8_,auVar5._8_8_,&cf_name);

    pcVar3 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

    auVar6 = _objc_opt_isKindOfClass(pcVar3,uVar4);

    uVar4 = auVar6._8_8_;

    if ((auVar6._0_8_ & 1) == 0) {

LAB_001aee08:

      FUN_002a4680(&_OBJC_CLASS___NSString,uVar4,&cf__IN_);

      pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    else {

      auVar6 = FUN_00297fa0(pcVar3);

      uVar4 = auVar6._8_8_;

      if (auVar6._0_8_ == 0) goto LAB_001aee08;

      _objc_retain(pcVar3);

      pcVar1 = pcVar3;

    }

    _objc_release(pcVar3);

    _objc_release(auVar5._0_8_);

  }

  else {

    pcVar1 = &cf__gw;

  }

  _objc_release(uVar2);

LAB_001aee44:

  _objc_autoreleaseReturnValue(pcVar1);

  return;

}




