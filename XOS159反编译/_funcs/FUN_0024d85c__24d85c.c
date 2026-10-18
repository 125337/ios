// FUN_0024d85c @0x24d85c


void FUN_0024d85c(void)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined *puVar5;

  undefined1 auVar6 [16];

  

  puVar5 = DAT_003eb300;

  if (DAT_003eb300 == (undefined *)0x0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00291d40(auVar6._0_8_,auVar6._8_8_,&cf_xzyHomeDockCustomStyles);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    uVar3 = _objc_opt_class(&_OBJC_CLASS___NSArray);

    uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

    puVar5 = PTR____NSArray0__struct_00388308;

    if ((uVar4 & 1) != 0) {

      puVar5 = (undefined *)FUN_002937a0(uVar2);

    }

    puVar1 = DAT_003eb300;

    DAT_003eb300 = puVar5;

    _objc_release(puVar1);

    puVar5 = DAT_003eb300;

    _objc_retain(DAT_003eb300);

    _objc_release(uVar2);

  }

  else {

    _objc_retain(DAT_003eb300);

  }

  _objc_autoreleaseReturnValue(puVar5);

  return;

}




