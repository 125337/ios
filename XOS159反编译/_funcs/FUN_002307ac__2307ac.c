// FUN_002307ac @0x2307ac


void FUN_002307ac(long param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined *puVar4;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  if (DAT_003eb0e8 == '\x01') {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

    auVar5 = _objc_opt_isKindOfClass(param_3,uVar2);

    if (((auVar5._0_8_ & 1) != 0) &&

       (iVar1 = FUN_00297820(param_3,auVar5._8_8_,&cf_CADisableMinimumFrameDurationOnPhone),

       iVar1 != 0)) {

      FUN_00298780(&_OBJC_CLASS___NSBundle);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      puVar4 = PTR____kCFBooleanTrue_00388320;

      if (param_1 == lVar3) goto LAB_00230858;

    }

  }

  (*DAT_003eb100)(param_1,param_2,param_3);

  puVar4 = (undefined *)_objc_retainAutoreleasedReturnValue();

LAB_00230858:

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(puVar4);

  return;

}




