// FUN_0023cdac @0x23cdac


void FUN_0023cdac(undefined8 param_1)



{

  uint uVar1;

  undefined8 uVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  uint uVar6;

  uint uVar7;

  double dVar8;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  uint local_34;

  

  _objc_retain();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

  if ((uVar3 & 1) == 0) {

    uVar2 = 0;

    goto LAB_0023cf3c;

  }

  FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45c0(param_1,auVar9._8_8_,auVar9._0_8_);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4560(auVar10._0_8_,auVar10._8_8_,&cf__,&cf___);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  _objc_release(auVar9._0_8_);

  auVar9 = FUN_00297fa0(uVar4);

  uVar2 = auVar9._8_8_;

  if ((auVar9._0_8_ == 6) || (auVar9 = FUN_00297fa0(uVar4), uVar2 = auVar9._8_8_, auVar9._0_8_ == 8)

     ) {

    local_34 = 0;

    FUN_0029be20(&_OBJC_CLASS___NSScanner,uVar2,uVar4);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_0029bde0(auVar9._0_8_,auVar9._8_8_,&local_34);

    _objc_release(auVar9._0_8_);

    if ((uVar3 & 1) == 0) goto LAB_0023cee8;

    lVar5 = FUN_00297fa0(uVar4);

    uVar7 = local_34 >> 8;

    if (lVar5 == 8) {

      uVar1 = local_34 >> 0x18;

      dVar8 = (double)(local_34 & 0xff) / 255.0;

      uVar6 = uVar7;

      uVar7 = local_34 >> 0x10;

    }

    else {

      uVar1 = local_34 >> 0x10 & 0xff;

      dVar8 = 1.0;

      uVar6 = local_34;

    }

    FUN_00293040((double)uVar1 / 255.0,(double)(uVar7 & 0xff) / 255.0,(double)(uVar6 & 0xff) / 255.0

                 ,dVar8,&_OBJC_CLASS___UIColor);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  else {

LAB_0023cee8:

    uVar2 = 0;

  }

  _objc_release(uVar4);

LAB_0023cf3c:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




