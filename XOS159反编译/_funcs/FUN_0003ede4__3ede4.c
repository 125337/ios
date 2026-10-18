// FUN_0003ede4 @0x3ede4


void FUN_0003ede4(long param_1,long param_2)



{

  undefined8 uVar1;

  cfstringStruct *pcVar2;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_0029efa0(uVar1,auVar3._8_8_,param_2,&cf_mesMsgMergeWrapReferAlignment);

  FUN_002a4a40(uVar1);

  DAT_003e74e0 = DAT_003e74e0 + 1;

  DAT_003e7508 = param_2;

  if (*(long *)(param_1 + 0x20) != 0) {

    if (param_2 - 1U < 3) {

      pcVar2 = (cfstringStruct *)(&PTR_cf____0038b9b8)[param_2 - 1U];

    }

    else {

      pcVar2 = &cf_E__N;

    }

    FUN_002944a0(*(undefined8 *)(param_1 + 0x20));

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar3._0_8_,auVar3._8_8_,pcVar2);

    _objc_release(auVar3._0_8_);

  }

  FUN_0003dcfc();

  _objc_release(uVar1);

  return;

}




