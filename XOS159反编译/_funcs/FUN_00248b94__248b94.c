// FUN_00248b94 @0x248b94


void FUN_00248b94(long param_1)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined1 auVar3 [16];

  

  if (param_1 < 0) {

    FUN_00248a34();

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(auVar3._0_8_,auVar3._8_8_,&cf_icon);

    pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf_circle_fill;

    if (pcVar2 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar2;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar2);

    _objc_release(auVar3._0_8_);

  }

  else {

    FUN_0023758c();

    pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  }

  _objc_autoreleaseReturnValue(pcVar1);

  return;

}




