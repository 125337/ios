// FUN_0006ae98 @0x6ae98


void FUN_0006ae98(undefined8 param_1,undefined8 param_2)



{

  cfstringStruct *pcVar1;

  long lVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar5._0_8_,auVar5._8_8_,param_1);

  pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  auVar5 = FUN_00297fa0(pcVar1);

  uVar3 = auVar5._8_8_;

  if (auVar5._0_8_ != 0) {

    FUN_00299540(param_2,uVar3,pcVar1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar5._8_8_;

    lVar2 = auVar5._0_8_;

    pcVar4 = pcVar1;

    if (lVar2 != 0) goto LAB_0006af50;

  }

  FUN_00299540(param_2,uVar3,&cf_normal);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  pcVar4 = &cf_none;

  if (lVar2 != 0) {

    pcVar4 = &cf_normal;

  }

LAB_0006af50:

  _objc_retain(pcVar4);

  _objc_release(lVar2);

  _objc_release(pcVar1);

  _objc_release(param_2);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar4);

  return;

}




