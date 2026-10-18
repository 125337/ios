// FUN_001aaf74 @0x1aaf74


void FUN_001aaf74(void)



{

  undefined *puVar1;

  undefined *puVar2;

  undefined *puVar3;

  undefined1 auVar4 [16];

  

  puVar3 = DAT_003e96d0;

  if (DAT_003e96e0 == '\x01' && DAT_003e96d0 != (undefined *)0x0) {

    _objc_retain(DAT_003e96d0);

  }

  else {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00291d40(auVar4._0_8_,auVar4._8_8_,&cf_aabCustomDashStyles);

    puVar2 = (undefined *)_objc_retainAutoreleasedReturnValue();

    _objc_release(auVar4._0_8_);

    puVar3 = PTR____NSArray0__struct_00388308;

    if (puVar2 != (undefined *)0x0) {

      puVar3 = puVar2;

    }

    _objc_retain(puVar3);

    puVar1 = DAT_003e96d0;

    DAT_003e96d0 = puVar3;

    _objc_release(puVar1);

    puVar3 = DAT_003e96d0;

    DAT_003e96e0 = '\x01';

    _objc_retain(DAT_003e96d0);

    _objc_release(puVar2);

  }

  _objc_autoreleaseReturnValue(puVar3);

  return;

}




