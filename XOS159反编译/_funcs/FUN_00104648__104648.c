// FUN_00104648 @0x104648


void FUN_00104648(int param_1,undefined8 param_2)



{

  cfstringStruct *pcVar1;

  

  if (DAT_003e7fc0 == '\x01') {

    pcVar1 = &cf_config__ld__ld__ld__ld;

  }

  else {

    if (DAT_003e7ed9 != '\x01') {

      pcVar1 = &cf_default_sender;

      if (param_1 == 0) {

        pcVar1 = &cf_default_receiver;

      }

      _objc_retain(pcVar1);

      goto LAB_00104720;

    }

    pcVar1 = &cf_settings__ld__ld__ld__ld;

  }

  FUN_002a4680(&_OBJC_CLASS___NSString,param_2,pcVar1);

  pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

LAB_00104720:

  _objc_autoreleaseReturnValue(pcVar1);

  return;

}




