// FUN_00183c4c @0x183c4c


void FUN_00183c4c(undefined8 param_1)



{

  char cVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  char *pcVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  if (((uVar3 & 1) != 0) && (lVar4 = FUN_00297fa0(param_1), lVar4 != 0)) {

    _objc_retainAutorelease(param_1);

    auVar6 = FUN_00290c40();

    pcVar5 = auVar6._0_8_;

    if (pcVar5 != (char *)0x0) {

      cVar1 = *pcVar5;

      while (cVar1 != '\0') {

        pcVar5 = pcVar5 + 1;

        cVar1 = *pcVar5;

      }

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar6._8_8_,&cf_s_016llx);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      goto LAB_00183cfc;

    }

  }

  uVar2 = 0;

LAB_00183cfc:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




